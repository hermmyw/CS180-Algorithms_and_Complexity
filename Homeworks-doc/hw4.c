build(array, root , i) {
	if i == n
		return
	if (next < root) {
		if root does not have a left child:
			insert here
			build(array, root->left, i+1)
			return 
		else  {
			build(array, root->left, i)
		}
	}
	else {
		if root does not have a right child:
			insert here
			build(array, root->right, i+1)
			return 
		else {
			build(array, root->right, i)
		}
	}
}



void unionatob(Node* root, Node* x, Node* y) {
	if x == root
		x->unionatob = y;
	else if x < root
		unionatob(root->left, x, y);
	else if x > root
		unionatob(root->right, x, y);
}

void union(Node* root, Node* x, Node* y) {
	unionatob(root, x, y);
	unionbtoa(root, y, x);
} 