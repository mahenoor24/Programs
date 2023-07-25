 vector<int> result;
    
    if(root == NULL)
        return result;
    
    stack<Node*> s1;
    stack<Node*> s2;
    
    s1.push(root);
    
    while(!s1.empty() || !s2.empty()){
        
        while(!s1.empty()){
            Node *current = s1.top();
            s1.pop();
            result.push_back(current->data);
            
            if(current->right)
                s2.push(current->right);
            if(current->left)
                s2.push(current->left);
        }
        
        while(!s2.empty()){
            Node* current = s2.top();
            s2.pop();
            result.push_back(current->data);
            
            if(current->left)
                s1.push(current->left);
            if(current->right)
                s1.push(current->right);
        }
    }
    
    return result;
}
vector<int> findSpiral(Node *root)
{
    //Your code here
     vector<int> result;
    
    if(root == NULL)
        return result;
    
    stack<Node*> s1;
    stack<Node*> s2;
    
    s1.push(root);
    
    while(!s1.empty() || !s2.empty()){
        
        while(!s1.empty()){
            Node *current = s1.top();
            s1.pop();
            result.push_back(current->data);
            
            if(current->right)
                s2.push(current->right);
            if(current->left)
                s2.push(current->left);
        }
        
        while(!s2.empty()){
            Node* current = s2.top();
            s2.pop();
            result.push_back(current->data);
            
            if(current->left)
                s1.push(current->left);
            if(current->right)
                s1.push(current->right);
        }
    }
    
    return result;

}