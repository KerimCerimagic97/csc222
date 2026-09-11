#include <iostream>
using namespace std;

//Question 1:

void new_line(){
    cout << endl;
}

void adding_new_func(){
  cout << "First Line." << endl;
  new_line();
  cout << "Second Line." << endl;
}

//if new line is declared after adding new func, it doesn't work

//Question 2:

void print_twice(char phil) {
    cout << phil << phil << endl;
}

void par_arg(){
    print_twice('a');
    print_twice('b');
    print_twice('c');
    print_twice(24);
    //print_twice(24.6);
    //print_twice("tryme");
}

// works with int but not with double or String

//Question 3:

int func1(x){
    return x*2;
}

void func2(){
    cout << "hello world" << endl;
}

int main(){
    adding_new_func();
    par_arg();
    func1(15);
    cout << "abc" < func2() << endl;
    
  return 0;
}


