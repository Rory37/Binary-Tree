#ifndef guard
#define guard
class node {
 public:
  node(int);
  ~node();
  void setLeft(node*);
  void setRight(node*);
  node* getLeft();
  node* getRight();
  void setData(int);
  int getData();
 private:
  node* left;
  node* right;
  int data;
};

#endif
