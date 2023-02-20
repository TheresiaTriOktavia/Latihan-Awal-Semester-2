#include<iostream>
using namespace std;
int main(){

	int bil_bulat;
	cin>>bil_bulat;
	
	for(int i=1; i<=bil_bulat; i++){
		if(i % 5 == 0){
		continue;
	}
		else if(i>=31){
		cout<<"NOT FOUND";
		break;
		
	}
	cout<<i<<endl;
}

return 0;

}

