#include <iostream>
#include "node.h"
#include <fstream>
#include <cstring>
#include <stdlib.h>
using namespace std;

void add(node*);
node* create(int*, int);

int main() {
  //input code adapted from heap
  char c [80];
  bool b = true;
  int treear [100]; //array to initially hold values for tree
  while ( b == true) {//runs the input until valid
    cout << "Please input a input method (series or filename)" << endl;
    cin >> c;//takes method
    for(int i = 0; i < 100; i++) {//sets everything in array to val 0 (was issue at home computer)
      treear[i] = 0;
    }
    if (strcmp(c, "series") == 0) {//If the input is series
      b = false;//Proper input
      bool stillIn = true;//While still adding
      int count = 0;//spot to put new number
      cin.ignore(); //ignores previous cin in
      while(stillIn == true) {
	cout << "Please input a number to be in your heap, or END to construct your heap" << endl;
	char input [1000];//can hold number for input
	cin.getline(input,1000);//gets input
	if(strcmp(input, "END") == 0) { //Once end is typed, quits
	  stillIn = false;
	}
	else{
	  treear[count] = atoi(input); //take input, convert to int and add to array
	  count++;//increment spot to put int
	}
      }
    }
    else if (strcmp(c, "filename") == 0) {//if file
      cout << "Please input the list in the given input method" << endl;
      char filename[80];//for name of file
      cin.ignore();//ignores past cin
      cin.getline(filename, 80);//takes in the name
      ifstream newFile; //new file
      newFile.open(filename);//opens file with the name put in
      if (newFile == NULL) {//if file doesn't exist
	cout << "There was an error reading the file" << endl;
      }
      else {
	b = false;//input method correct
	int i = 0; //keeps track of spots in heap
	while (newFile.eof() != true) {//while not end of file
	  newFile >> treear[i];//puts each number seperated by whitespace in
	  i++;
	}
      }
      newFile.close();//closes file
    }
  }
  int length;
  for (int i = 0; i < sizeof(treear)/sizeof(treear[0]); i++) {//calculates elements in int array, puts in length
    if (treear[i] == 0) {
      length = i;
      break;
    }
  }
  
  node* root = create(treear, length); //creates tree of node
}


void add (node* root) {

}

node* create(int* treear, int length){
  node* root = new node(treear[0]);
  node* current = root;
  int i = 1
    
}
