/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if (root == nullptr) {
            return root;
        }
        
        int i = 0, p = 1;
        queue<Node*> q;
       
        q.push(root);
       // root->next = nullptr;
        
        while(!q.empty()){
            i++;
            Node* temp = q.front();
            q.pop();
            
            if (temp->left != nullptr){
                q.push(temp->left);
                q.push(temp->right);
            }
            
            if (temp != nullptr) {
                if (pow(2, p) - 1 == i){
                    temp->next = nullptr;
                    p++;
                } else {
                    temp->next = q.front();
                }   
            }
      
           
        }
        
        return root;
    }
    

};