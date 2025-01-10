// 404 Not Found
// Chef's website has a specific response mechanism based on the HTTP status code received:
// If the response code is 404, the website will return NOT FOUND. For any other response code different from 404, the website will return FOUND.
// Given the response code as X, determine the website response.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;
    if(x==404){
        cout<<"NOT FOUND";
    }
    else {
        cout<<"FOUND";
    }
}
