#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,step,tower[3][40];
    cin>>m;
    step=pow(2,m);
    for(int i=1;i<step;i++)
        cout<<"Step"<<i<<": "<<(i&(i-1))%3+1<<" to "<<((i|(i-1))+1)%3+1<<endl;
        
	return 0;
}
//Tower of Hanoi Implementation c++ 
// by puujee
