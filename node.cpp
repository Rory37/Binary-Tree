#include "node.h"
#include <iostream>
node :: node(int newdata) {
  left = NULL;
  right = NULL;
  data = newdata;
}

node :: ~node() {
  left = NULL;
  right = NULL;
}

void node :: setLeft(node* newLeft) {
  left = newLeft;
}

void node :: setRight(node* newRight) {
  right = newRight;
}

node* node :: getLeft() {
  return left;
}

node* node :: getRight() {
  return right;
}

void node :: setData(int newdata) {
  data = newdata;
}

int node :: getData() {
  return data;
}
