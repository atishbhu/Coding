#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
  int data;
    vector < TreeNode * >children;
    TreeNode (int data)
  {
	this->data = data;
  }
};

TreeNode *
takeInput ()
{
  int rootData;
  cout << "Enter Data : ";
  cin >> rootData;
  TreeNode *root = new TreeNode (rootData);
  cout << endl;
  int n;
  cout << "Enter how many children of " << rootData << endl;
  cin >> n;
  for (int i = 0; i < n; i++)
	{
	  TreeNode *child = takeInput ();
	  root->children.push_back (child);
	}
  return root;
}

void
printLevelWise (TreeNode * root)
{
  queue < TreeNode * >q;
  q.push (root);
  int count = 1;
  while (!q.empty ())
	{
	  TreeNode *f = q.front ();
	  q.pop ();
	  cout << f->data << ": ";
	  for (int i = 0; i < f->children.size (); i++)
		{
		  cout << f->children[i]->data << ", ";
		  q.push (f->children[i]);
		}
	  cout << endl;
	}
}

TreeNode *
takeInputLevelWise ()
{
  int rootData;
  cout << "Enter root Data " << endl;
  cin >> rootData;
  TreeNode *root = new TreeNode (rootData);
  queue < TreeNode * >q;
  q.push (root);
  while (!q.empty ())
	{
	  TreeNode *f = q.front ();
	  q.pop ();
	  cout << "Enter the number of child of " << f->data << endl;
	  int n;
	  cin >> n;
	  for (int i = 1; i <= n; i++)
		{
		  cout << "Enter " << i << " th child of " << f->data << endl;
		  int childData;
		  cin >> childData;
		  TreeNode *child = new TreeNode (childData);
		  q.push (child);
		  f->children.push_back (child);
		}
	}
  return root;
}

int
height (TreeNode * root)
{
  if (root == nullptr)
	return 0;
  int mx = 0;
  for (int i = 0; i < root->children.size (); i++)
	{
	  int childHeight = height (root->children[i]);
	  if (childHeight > mx)
		{
		  mx = childHeight;
		}
	}
  return mx + 1;
}

void
print (TreeNode * root)
{
  if (root == nullptr)
	{
	  return;
	}
  cout << root->data << " : ";
  for (int i = 0; i < root->children.size (); i++)
	{
	  cout << root->children[i]->data << ", ";
	}
  cout << endl;
  for (int i = 0; i < root->children.size (); i++)
	{
	  print (root->children[i]);
	}
}

int
countNodes (TreeNode * root)
{
  if (root == nullptr)
	return 0;

  int ans = 1;
  for (int i = 0; i < root->children.size (); i++)
	{
	  ans += countNodes (root->children[i]);
	}
  return ans;
}

void
printAtLevelK (TreeNode * root, int k)
{
  if (root == nullptr)
	return;
  if (k == 0)
	{
	  cout << root->data << endl;
	  return;
	}
  for (int i = 0; i < root->children.size (); i++)
	{
	  printAtLevelK (root->children[i], k - 1);
	}
}

int
countLeafsNode (TreeNode * root)
{
  if (root == nullptr)
	return 1;

  if (root->children.size () == 0)
	{
	  return 1;
	}
  int ans = 0;
  for (int i = 0; i < root->children.size (); i++)
	{
	  ans += countLeafsNode (root->children[i]);
	}
  return ans;
}

int
main ()
{
  TreeNode *root;
  root = takeInputLevelWise ();
  // cout<<height(root)<<endl;
  // printLevelWise(root);
  cout << countLeafsNode (root);

  return 0;
}
