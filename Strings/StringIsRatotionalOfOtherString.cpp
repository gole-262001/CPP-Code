#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1 = "abcd";
    string s2 = "cdab";
    int n1 = s1.size();
    int n2 = s2.size();

    if(n1 != n2){
        cout<<"S1 and s2 are not rotation of each other";
    }else{

            string temp = s1 + s1;
            if(temp.find(s2) != string::npos)
            {
                cout<<"s1 and s2 is rotational"<<endl;
            }else{
                cout<<"s1 and s2 is not rotational"<<endl;
            }

    }

    return 0;
}
