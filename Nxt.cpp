#include<iostream>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int score[n];
for(int i=0;i<n;i++){
    cin>>score[i];
}
int cuttoff=score[k-1];
int cnt=0;
for(int i=0;i<n;i++){
    if(score[i] >= cuttoff && score[i] > 0){
        cnt++;
    }
}
cout<<cnt<<endl;
return 0;
}