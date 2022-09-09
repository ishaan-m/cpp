#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
        int startIndex=0;
        int l=s.length()-1;
        while(l>=0){
            if(s[l]==' '){
                l--;
            }
            else{
                break;
            }
        }
        int endIndex=l;
        for(int i=0;i<=l;i++){
            if(s[i]==' '){
                startIndex=i+1;
            }
        }

    return l-startIndex+1;
}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    string s="   fly me   to   the moon  ";

    cout<<lengthOfLastWord(s)<<"\n";
    return 0;
}