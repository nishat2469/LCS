#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2){
int n=s1.size();
int m=s2.size();

int mat[n+1][m+1];

for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        if(i==0||j==0){
            mat[i][j]=0;
        }
        else if(s1[i-1]==s2[j-1]){
            mat[i][j]=mat[i-1][j-1]+1;
        }
        else{
            mat[i][j]=max(mat[i][j-1], mat[i-1][j]);
        }
    }
}

int i=n;
int j=m;
string lcss="";
while(i>0&&j>0){
    if(s1[i-1]==s2[j-1]){
        lcss=lcss+s1[i-1];
        i--;
        j--;
    }
    else if(mat[i][j-1]>mat[i-1][j]){
        j--;

    }
    else{
        i--;
    }
}
reverse(lcss.begin(), lcss.end());
cout<<"lcs is: "<<lcss<<endl;


    return mat[n][m];



}

int main(){
string st1="BD";
string st2="ABCD";

int ans = lcs(st1, st2);
cout<<ans<<endl;

return 0;
}




lcs.cpp
Displaying lcs.cpp.
0-1 knapsack and LCS
Shahriar Arefin Zummon
•
Sep 24

0-1 knapsack.cpp
Text

lcs.cpp
Text
Class comments
