//#include <iostream>
//#define EMPTY -1
//using namespace std;
//
//typedef struct node {
//    int left;
//    int right;
//}NODE;
//
//NODE tree[1000001] = {0,};
//
//void buildTree(int val, int par) {
//    if (val<par) {
//        if (tree[par].left==EMPTY) {
//            tree[par].left=val;
//            tree[val] = {EMPTY, EMPTY};
//        }
//        else buildTree(val, tree[par].left);
//    }
//    else {
//        if (tree[par].right==EMPTY) {
//            tree[par].right = val;
//            tree[val] = {EMPTY, EMPTY};
//        }
//        else buildTree(val, tree[par].right);
//    }
//}
//
//void postorder(int val){
//    if (tree[val].left!=-1) postorder(tree[val].left);
//    if (tree[val].right!=-1) postorder(tree[val].right);
//    cout<<val<<"\n";
//}
//
//int main() {
//    int root;
//    cin>>root;
//    tree[root]={EMPTY, EMPTY};
//    int tmp;
//    while(true){
//        cin >> tmp;
//        if(cin.eof() == true) break;
//        else buildTree(tmp, root);
//    }
//    postorder(root);
//
//    return 0;
//}