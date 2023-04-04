#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];

int top = -1;
void push(int x){
    top = top+1;
    stack[top]=x; 
}

int pop(){

}

int peek(){

}


int main(){
    printf("HELLO");
    return 0;
}