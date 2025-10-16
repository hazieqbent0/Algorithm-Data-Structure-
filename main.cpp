/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct Node{
    string data;
    Node *ptr;
};



int main(){
    Node node1 = Node();
    Node node2 = Node();
    Node node3 = Node();
    
    node1.data ="test";
    node1.ptr = &node3;
    
    //node2.data = "test2";
    //node2.ptr = &node3;
    
    node3.data = "test3";
    node3.ptr = NULL;
    
    cout<<node1.data<<endl;
    cout<<node1.ptr<<endl;
    cout<<node1.ptr->data; 
}