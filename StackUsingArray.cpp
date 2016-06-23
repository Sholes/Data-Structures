/*
You have an empty sequence, and you will be given  queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.
Input Format

The first line of input contains an integer, . The next  lines each contain an above mentioned query. (It is guaranteed that each query is valid.)

Output Format

For each type  query, print the maximum element in the stack on a new line.*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define INT_MAX    2147483647
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int size,check,element,max=0;
    cin>>size;
    long int stack[size];
    long int count=0;
    for(int i=0;i<size;i++)
        {
            cin>>check;
            if(check==1)
                {
                    cin>>element;
                    stack[count]=element; 
                    
                    count=count+1;
                
                }
            else if(check==2)
                {
                    stack[count--]=0;
                }
            else if(check==3)
                {
                    for(int j=0;j<count;j++)
                        {
                            if(stack[j]>max)
                                {
                                max=stack[j];
                                }
                        }
                    cout<<max<<endl;
                    
                    
                }
            else
                {
                break;
                }
           
        }
    
    return 0;
}
