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
  int getData();
 private:
  node* left;
  node* right;
  char data;
};

#endif
