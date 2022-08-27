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

int widthOfTree(Node* root, int& maxWidth) {
    if(root == nullptr) {
        return 0;
    }
    
    int left = widthOfTree(root -> left, maxWidth);
    int right = widthOfTree(root -> right, maxWidth);
    
    maxWidth = max(maxWidth, left + right);
    
    return 1 + max(left, right);
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
    
    cout << "In-order: "; inOrder(root); cout << endl;
    cout << "Pre-order: "; preOrder(root); cout << endl;
    cout << "Post-order: "; postOrder(root); cout << endl;
    
    // cout << "In-order (Iterative): "; inOrderIterative(root); cout << endl;
    cout << "Pre-order (Iterative): "; preOrderIterative(root); cout << endl;
    // cout << "Post-order (Iterative): "; postOrderIterative(root); cout << endl;
    
    cout << "Height: " << heightOfTree(root) << endl;
    
    int width = INT_MIN;
    widthOfTree(root, width);
    cout << "Width: " << width << endl;
    
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
    }
    cout << endl;

    return 0;
}
