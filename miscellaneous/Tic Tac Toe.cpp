#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define archiezzz ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve(){
	ll x=0,o=0,under=0;
	int p1=0,p2=0; //player1 & player2
	string s1,s2,s3; 
		cin>>s1;
		cin>>s2;
		cin>>s3;
		
		//lets like count for each string 
		for(int i=0;i<3;i++){
			if(s1[i]=='X') x++;
			if(s1[i]=='O') o++;
			if(s1[i]=='_') under++;
		}
		for(int i=0;i<3;i++){
			if(s2[i]=='X') x++;
			if(s2[i]=='O') o++;
			if(s2[i]=='_') under++;
		}
		for(int i=0;i<3;i++){
			if(s3[i]=='X') x++;
			if(s3[i]=='O') o++;
			if(s3[i]=='_') under++;
		}
		
		/*This will not work
		
		//so now we check if there are underscores
		// or not
		
//		if(under==0){
//			// X starts so X should be > O
//			if(x==5 &&o==4)
//			
//				cout<<"1"<<"\n";
//			else 
//			cout<<"3"<<"\n";
//		}
//		//There are underscores
//		else {
			//horizontal -X
			*/
			if(s1[0]=='X'&&s1[1]=='X'&&s1[2]=='X') p1=1;
			if(s2[0]=='X'&&s2[1]=='X'&&s2[2]=='X') p1=1;
			if(s3[0]=='X'&&s3[1]=='X'&&s3[2]=='X') p1=1;
			//dia-X
			if(s1[0]=='X'&&s2[1]=='X'&&s3[2]=='X') p1=1;
			if(s1[2]=='X'&&s2[1]=='X'&&s3[0]=='X') p1=1;
			//vertical
			if(s1[0]=='X'&&s2[0]=='X'&&s3[0]=='X') p1=1;
			if(s1[1]=='X'&&s2[1]=='X'&&s3[1]=='X') p1=1;
			if(s1[2]=='X'&&s2[2]=='X'&&s3[2]=='X') p1=1;
			
			
			//O
			//horizontal -O
			if(s1[0]=='O'&&s1[1]=='O'&&s1[2]=='O') p2=1;
			if(s2[0]=='O'&&s2[1]=='O'&&s2[2]=='O') p2=1;
			if(s3[0]=='O'&&s3[1]=='O'&&s3[2]=='O') p2=1;
			//dia-O
			if(s1[0]=='O'&&s2[1]=='O'&&s3[2]=='O') p2=1;
			if(s1[2]=='O'&&s2[1]=='O'&&s3[0]=='O') p2=1;
			//vertical
			if(s1[0]=='O'&&s2[0]=='O'&&s3[0]=='O') p2=1;
			if(s1[1]=='O'&&s2[1]=='O'&&s3[1]=='O') p2=1;
			if(s1[2]=='O'&&s2[2]=='O'&&s3[2]=='O') p2=1;
			
			if((p1==1&&p2==1)||(x-o<0)||(x-o>1)){
        	cout<<"3"<<"\n";
    		}
    		else if(x==0&&o==0&&under==9){
        	cout<<"2"<<"\n";
    		}
    		else if(p1==1&&x>o){
        	cout<<"1"<<"\n";
    		}
    		else if(p2==1&&x==o){
        	cout<<"1"<<"\n";
    		}
    		else if(p1==0&&p2==0&&under==0){
        	cout<<"1"<<"\n";
    		}
    		else if(p1==0&&p2==0&&under>0){
        	cout<<"2"<<"\n";
    		}else{
        	cout<<"3"<<"\n";
    		}			
}	
				
	//	}

int main(){
	archiezzz;
	ll t;
	
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
