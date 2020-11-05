/* A1
#include <iostream>
using namespace std;

int main(void)
{
	int i;
	int j;
	
	for(i=0; i<4; i++) {
		for(j=0; j<=i; j++) { cout<<"*";}
		cout<<endl;
	}
	
	return 0;
}
*/
 
/* A2
#include <iostream>
using namespace std;

int main(void)
{
	for(int i=0; i<4; i++) {
		for(int j=4; j>i; j--) {
			cout<<"*";
		}
		cout<<endl;
	}
}

*/

/* A3
#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++) {
		for(int j=1; j<n-i; j++) cout<<" ";
		for(int j=n-i; j<=n; j++) cout<<"*";
		cout<<endl;
	}
	return 0;
}
*/

/* A4
#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<i; j++) cout<<" ";
		for(int j=i; j<n; j++) cout<<"*";
		cout<<endl;
	}
	
	return 0;
}
*/

/* A1-1
#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int i, j;
	cin>>n;
	
	for(i=0; i<n; i++) {
		if(i==0 || i==n-1)  { for(j=0; j<=i; j++) cout<<"*";}
		else {for(j=0; j<=i; j++) {
			if(j==0 || j==i) cout<<"*";
			else cout<<" ";
		}
	}
	cout<<endl;
}
	return 0;
}
*/

/* A2-1
#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int i, j;
	cin>>n;
	
	for(i=0; i<n; i++) {
		if(i==0 || i==n-1) {for(int j=0; j<n-i; j++) cout<<"*";}
		else {for(j=0; j<n-1; j++) {
			if(j==0 || j==n-i-1) cout<<"*";
			else cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
*/

