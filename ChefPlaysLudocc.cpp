// Chef Plays Ludo
// Chef is playing Ludo. According to the rules of Ludo, a player can enter a new token into the play only when he rolls a 
// 6 on the die.
// In the current turn, Chef rolled the number 
//  X on the die. Determine if Chef can enter a new token into the play in the current turn or not.

#include<iostream>
using namespace std;

int main(){ 
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x==6){
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}
    return 0;
}