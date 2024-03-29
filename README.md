<h1>0x1D. C - Binary trees</h1>
<p><span>Algorithm</span> <span>Data Structure</span></p>
<h1>Resources</h1>
<h6>Read or Watch:</h6>
<ul>
	<li><a href="https://intranet.alxswe.com/rltoken/1F2x42-8vUbOmU4L1C1KMg">Binary Tree(note the first lin: Not to be confused with B-tree.)</a></li>
	<li><a href="https://intranet.alxswe.com/rltoken/QmcTMCkQyrgMjrqoWxYdhw">Data Structure and Algorithms - Tree</a></li>
	<li><a href="https://intranet.alxswe.com/rltoken/z6ZaXr_RxwE5nTHAUx_dfQ">Tree Traversal</a></li>
	<li><a href="https://intranet.alxswe.com/rltoken/qO5dBlMnYJzbaWG3xVpcnQ">Binary Search Tree</a></li>
	<li><a href="https://intranet.alxswe.com/rltoken/BeyJ2gjlE7_djwRiDyeHig">Data Structures: Binary Tree</a></li>
</ul>
<h1>Learning Objectives</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, without the help of Google:</p>
<h2>General</h2>
<ul>
	<li>What is a binary tree</li>
	<li>What is the difference between a binary tree and a Binary Search Tree</li>
	<li>What is the possible gain in terms of time complexity compared to linked lists</li>
	<li>What are the depth, the height, the size of a binary tree</li>
	<li>What is a complete, a full, a perfect, a balanced binary tree</li>
</ul>

<h1>Copyright - Plagiarism</h1>
<ul>
	<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
	<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.</li>
	<li>You are not allowed to publish any content of this project.</li>
	<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>
<h1>Requirements</h1>
<h3>General</h3>
<ul>
	<li>Allowed editors: vi, vim, emacs</li>
	<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
	<li>A README.md file, at the root of the folder of the project, is mandatory</li>
	<li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
	<li>You are not allowed to use global variables</li>
	<li>No more than 5 functions per file</li>
	<li>You are allowed to use the standard library</li>
	<li>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples</li>
	<li>The prototypes of all your functions should be included in your header file called binary_trees.h</li>
	<li>Don’t forget to push your header file</li>
	<li>All your header files should be include guarded</li>
</ul>

<h2>Github</h2>
<p>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</p>
<h1>More Info</h1>
<h2>Data Structures</h2>
<p>Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.</p>
<h3>Basic Binary Tree</h3>
```
	/**
	* struct binary_tree_s - Binary tree node
	*
	* @n: Integer stored in the node
	* @parent: Pointer to the parent node
	* @left: Pointer to the left child node
	* @right: Pointer to the right child node
	*/
	struct binary_tree_s
	{
		int n;
		struct binary_tree_s *parent;
		struct binary_tree_s *left;
		struct binary_tree_s *right;
	};
	typedef struct binary_tree_s binary_tree_t;
```
<h3>Binary Search Tree</h3>
```
	typedef struct binary_tree_s bst_t;
```
<h3>AVL Tree</h3>
```
	typedef struct binary_tree_s avl_t;
```
<h3>Max Binary Heap</h3>
```
	typedef struct binary_tree_s heap_t;
```
<p>Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.</p>
<h1>Print Function</h1>
<p>To match the exampls in the task, you are given <a href="https://github.com/alx-tools/0x1C.c">this function</a></p>
<p>This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction</p>
