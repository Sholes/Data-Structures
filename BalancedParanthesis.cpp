/*
Given a sequence consisting of parentheses, determine whether the expression is balanced. A sequence of parentheses is balanced if every open parentheses can be paired uniquely with a closed parentheses that occurs after the former. Also, the interval between them must be balanced. You will be given three types of parentheses: (, {, and [.

{[()]} - This is a balanced parentheses.
{[(])} - This is not a balanced parentheses.
Input Format

The first line of input contains the number of test cases, . Each test case consists of a single line, , the sequence of parentheses.

Each character of the sequence will be one of {, }, (, ), [, ].

Output Format

For each test case, print on a new line "YES" if the parentheses are balanced. Otherwise, print "NO". Do not print the quotes.
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        //cout<<"len"<<s.length()<<endl;
        int stack[s.length()];
        int count=0;
        for(int i=0;i<s.length();i++)
            {
            
            
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
                {
                stack[count]=s[i];
                count=count+1;
                //cout<<"push     "<<count<<endl;
                }
            else if(s[i]==')' && stack[count-1]=='(')
                {
                    count=count-1;
                   // cout<<"pop     "<<count<<endl;
                    
                }
            else if(s[i]=='}' && stack[count-1]=='{')
                {
                    count=count-1;
                  //  cout<<"pop     "<<count<<endl;
                }
            else if(s[i]==']' && stack[count-1]=='[')
                {
                    count=count-1;
                  //  cout<<"pop     "<<count<<endl;
                }
            
            
            }
        if(count==0)
                cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;
        
    }
    return 0;
}
