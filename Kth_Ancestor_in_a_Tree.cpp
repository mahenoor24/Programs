class Solution
{
    public int kthAncestor(Node root, int k, int node)
    {
        //Write your code here
        
        //map to store <child,parent> data
        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
        int key=root.data;
        
        //function call to fill the map with tree value
        fillNode(map,root);
        
        //while the kth node is not reached
        while(k-- >0){
            
            //since get() returns null in case there is no value for the specified key,
            //therefore putting it inside try block
            try{
                node=map.get(node);
            }
            //returning -1 if any Exception is raised
            //i.e. there exist no parent/ancestor for the current node.
            catch(Exception e){
                return -1;
            }
            
            //if node value is equal to root data value but k!=0 then return -1
            if(node==key && k>0)
                return -1;
        }
        
        //lastly return the node value after iterating the above steps k times
       //i.e. reaching the kth ancestor from the given node
        return node;
        
    }
    
    
    public static void fillNode(Map map, Node root){
        if(root==null)
            return;
        
        //if root.left is not null, then add the data to the map.
        if(root.left!=null)
            map.put(root.left.data,root.data);
        //if root.right is not null, then add the data to the map.
        if(root.right!=null)
            map.put(root.right.data,root.data);
        
        //explore the left node
        fillNode(map,root.left);
        
        //explore the right node
        fillNode(map,root.right);
    }
    
    
}