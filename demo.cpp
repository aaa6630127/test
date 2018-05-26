#include <iostream>
#include <set>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum=0,maxlen=0;
	set<int> arr_len;
	for(int i=0; i<n; i++)
	{
		int type,len;
		cin >> type >> len;
		if(type==1){
			arr_len.insert(len);
			if(maxlen<len)
				maxlen=len;
			sum+=len;
		}
		else if(type==2){
			arr_len.erase(len);
			sum-=len;
			if(maxlen==len)
				maxlen=*arr_len.begin();
		}
		if(sum>2*maxlen)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
