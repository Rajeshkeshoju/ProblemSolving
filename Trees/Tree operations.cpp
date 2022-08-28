#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    
    struct Node* left;
    struct Node* right;
    
    Node(int data = 0) {
        this -> data = data;
        this -> left = nullptr;
        this -> right = nullptr;
    }
};

Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if(root == nullptr || root == p || root == q) {
        return root;
    }
    
    Node* left = lowestCommonAncestor(root -> left, p, q);
    Node* right = lowestCommonAncestor(root -> right, p, q);
    
    if(left == nullptr) {
        return right;
    }
    
    if(right == nullptr) {
        return left;
    }
    
    return root;
}

void topView(Node* root, map<int, int>& list, int verticalLevel = 0) {
    if(root == nullptr) {
        return;
    }
    
    topView(root -> left, list, verticalLevel - 1);
    topView(root -> right, list, verticalLevel + 1);
    
    list[verticalLevel] = root -> data;
}

//  Needs to be fixed
void bottomView(Node* root, map<int, int>& list, int verticalLevel = 0) {
    if(root == nullptr) {
        return;
    }
    
    list[verticalLevel] = root -> data;
    
    bottomView(root -> left, list, verticalLevel - 1);
    bottomView(root -> right, list, verticalLevel + 1);
}

void leftView(Node* root, vector<int>& list, int level = 0) {
    if(root == nullptr) {
        return;
    }
    
    if(list.size() == level) {
        cout << root -> data << " ";
        list.emplace_back(root -> data);
    }
    
    leftView(root -> left, list, level + 1);
    leftView(root -> right, list, level + 1);
}

void rightView(Node* root, vector<int>& list, int level = 0) {
    if(root == nullptr) {
        return;
    }
    
    if(list.size() == level) {
        cout << root -> data << " ";
        list.emplace_back(root -> data);
    }
    
    rightView(root -> right, list, level + 1);
    rightView(root -> left, list, level + 1);
}

int heightOfTree(Node* root) {
    if(root == nullptr) {
        return 0;
    }
    
    int left = heightOfTree(root -> left);
    int right = heightOfTree(root -> right);
    
    return 1 + max(left, right);
}

int diameterOfTree(Node* root, int& maxDiameter) {
    if(root == nullptr) {
        return 0;
    }
    
    int left = diameterOfTree(root -> left, maxDiameter);
    int right = diameterOfTree(root -> right, maxDiameter);
    
    maxDiameter = max(maxDiameter, left + right);
    
    return 1 + max(left, right);
}

void levelOrderSpiral(Node* root) {
    list<Node*> listNodes;
    int level = 0;
    
    listNodes.push_front(root);
    
    while(!listNodes.empty()) {
        int n = listNodes.size();
        
        if(level & 1 == 0) {
            while(n--) {
                Node* node = listNodes.front();
                listNodes.pop_front();
                
                cout << node -> data << " ";
                
                if(node -> left != nullptr) {
                    listNodes.push_back(node -> left);
                }
                
                if(node -> right != nullptr) {
                    listNodes.push_back(node -> right);
                }
            }
        } else {
            while(n--) {
                Node* node = listNodes.back();
                listNodes.pop_back();
                
                cout << node -> data << " ";
                
                if(node -> right != nullptr) {
                    listNodes.push_front(node -> right);
                }
                
                if(node -> left != nullptr) {
                    listNodes.push_front(node -> left);
                }
            }
        }
        
        level++;
    }
    
    cout << endl;
}

void levelOrder(Node* root) {
    queue<Node*> list;
    
    list.push(root);
    while(!list.empty()) {
        Node* node = list.front();
        list.pop();
        
        cout << node -> data << " ";
        
        if(node -> left != nullptr) {
            list.push(node -> left);
        }
        
        if(node -> right != nullptr) {
            list.push(node -> right);
        }
    }
    
    cout << endl;
}

void preOrderIterative(Node* root) {
    stack<Node*> st;
    st.push(root);
    
    Node* temp = root;
    while(!st.empty()) {
        temp = st.top();
        st.pop();
        
        cout << temp -> data << " ";
        
        if(temp -> right != nullptr) {
            st.push(temp -> right);
        }
        
        if(temp -> left != nullptr) {
            st.push(temp -> left);
        }
    }
    
    cout << endl;
}

void postOrderIterative(Node* root) {
    stack<Node*> st;
    st.push(root);
    
    Node* temp = root;
    while(!st.empty()) {
        
        if(temp -> left != nullptr) {
            st.push(temp -> left);
        }
        
        if(temp -> right != nullptr) {
            st.push(temp -> right);
        }
        
        
        temp = st.top();
        st.pop();
        
        cout << temp -> data << " ";
    }
    
    cout << endl;
}

void inOrder(Node* root) {
    if(root == nullptr) {
        return;
    }
    
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

void preOrder(Node* root) {
    if(root == nullptr) {
        return;
    }
    
    cout << root -> data << " ";
    
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(Node* root) {
    if(root == nullptr) {
        return;
    }
    
    postOrder(root -> left);
    postOrder(root -> right);
    
    cout << root -> data << " ";
}

int main()
{
    
    /***
     * 
     *              10
     *             /  \
     *           4     15
     *          / \    / \
     *         2  7  12  18
     *           / \
     *          5  8
     * 
    ***/
    
    
    Node* root = new Node(10);
    
    root -> left = new Node(4);
    root -> left -> left = new Node(2);
    root -> left -> right = new Node(7);
    
    root -> left -> right -> left = new Node(5);
    root -> left -> right -> right = new Node(8);
    
    root -> right = new Node(15);
    root -> right -> left = new Node(12);
    root -> right -> right = new Node(18);
    
    cout << "--- DFS ---" << endl;
    cout << "In-order: "; inOrder(root); cout << endl;
    cout << "Pre-order: "; preOrder(root); cout << endl;
    cout << "Post-order: "; postOrder(root); cout << endl;
    
    // cout << "In-order (Iterative): "; inOrderIterative(root); cout << endl;
    cout << "Pre-order (Iterative): "; preOrderIterative(root); cout << endl;
    // cout << "Post-order (Iterative): "; postOrderIterative(root); cout << endl;
    
    cout << "--- BFS ---" << endl;
    cout << "Level order: "; levelOrder(root);
    cout << "Level order (Spiral): "; levelOrderSpiral(root);
    cout << endl;
    
    
    
    cout << "Height: " << heightOfTree(root) << endl;
    
    int diameter = INT_MIN;
    diameterOfTree(root, diameter);
    cout << "Diameter: " << diameter << endl;
    
    vector<int> list;
    cout << "Left view: "; leftView(root, list); cout << endl;
    list.clear();
    
    cout << "Right view: "; rightView(root, list); cout << endl;
    list.clear();
    
    map<int, int> list2;
    cout << "Top view: "; topView(root, list2);
    
    for(auto it: list2) {
        cout << it.second << " ";
    }
    cout << endl;
    list2.clear();
    
    cout << "Bottom view: "; bottomView(root, list2);
    
    for(auto it: list2) {
        cout << it.second << " ";
    }cout << endl;
    
    Node*  p = root -> left -> left;
    Node* q = root -> left -> right -> right;
    cout << "Common Ancestor LCA(2, 8): ";
    cout << lowestCommonAncestor(root, p, q) -> data; cout << endl;

    return 0;
}
