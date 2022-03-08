//#include <iostream>
//
//using namespace std;
//
//struct NODE{
//    int left;
//    int right;
//};
//
//NODE nodes[91]={0,};
//int N;
//int root=-1;
//void preorder(char v){
//    cout<<v;
//    if (nodes[v].left!='.') preorder(nodes[v].left);
//    if (nodes[v].right!='.') preorder(nodes[v].right);
//}
//void inorder(char v){
//    if (nodes[v].left!='.') inorder(nodes[v].left);
//    cout<<v;
//    if (nodes[v].right!='.') inorder(nodes[v].right);
//}
//void postorder(char v){
//    if (nodes[v].left!='.') postorder(nodes[v].left);
//    if (nodes[v].right!='.') postorder(nodes[v].right);
//    cout<<v;
//}
//
//
//int main() {
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        char value, left, right;
//        cin >> value >> left >> right;
//        if (root==-1) root=value;
//        nodes[value].left = left;
//        nodes[value].right = right;
//    }
//    preorder(root);
//    cout<<"\n";
//    inorder(root);
//    cout<<"\n";
//    postorder(root);
//    return 0;
//}
