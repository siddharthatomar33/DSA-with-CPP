// Bone Appetit
// Trick or treat, bags of sweets, ghosts are walking down the street
// It's Halloween and Suri Bhai is out to get his treats.
// There are two sectors in his neighborhood, "Bones" and "Blood". They have N and M people, respectively.
// Each person in "Bones" will hand out X treats, and each person in "Blood" will hand out Y treats.
// How many treats does Suri Bhai get from visiting everyone in his neighborhood in total?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m,x,y;
	cin>>n>>m;
	cin>>x>>y;
	
	cout<<(n*x)+(m*y)<<endl;
}
