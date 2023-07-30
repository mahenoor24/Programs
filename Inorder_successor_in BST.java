class Solution
{
    // returns the inorder successor of the Node x in BST (rooted at 'root')
	public Node inorderSuccessor(Node root,Node x)
         {
          //add code here.
            Node tmp = root, prev = null;
            while(tmp != null) {
                if(tmp == x) {
                    break;
                }
                if(x.data < tmp.data) {
                    prev = tmp;
                    tmp = tmp.left;
                } else {
                    tmp = tmp.right;
                }
            }
            
            if(tmp == null) {
                return null;
            } 
            if(tmp.right == null) {
                return prev;
            } 
            
            tmp = tmp.right;
            
            while(tmp.left != null) {
                tmp = tmp.left;
            }
            return tmp;
         }
}