#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int arr[1001];
 
    int j = 1;
    for(int i = 1 ; i <= 1666 ; i++ ){
        if(i%3 != 0)
        {
            if(i%10 != 3){
                arr[j] = i;
                j = j + 1;
            }
 
        }
 
    }
 
    int t;sssssss
    cin>>t;
    int k;
    while(t--){
        cin>>k;
        cout<<arr[k]<<endl;
    }
 
 return 0;
}
