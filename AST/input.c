// header files
#include<stdio.h>

/*
this is a multiline comment
and foo is a random function
//and there's a comment within a comment
*/
int foo(int a, int b) {
    a = a + b;
}

int main() {
    int a, arr[3], c=10, i;
    // for
    for (i=0;i<10;i++) {
        a = 3;
        while (c>1) {
            c--;
            // scope
            int a = c + 1;
        }
        if (a>2) {
            c++;
        }
    }
}
