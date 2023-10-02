
//gauss 

#include<bits/stdc++.h>
using namespace std;
float xv(float y,float z){
	return ((17-y+(2*z))/20);
}
float yv(float x, float z){
	return ((-18-(3*x)+z)/20);
}

int main(){
	float xo = 0,x1 = 0,yo =0,y1 =0,zo=0,y2,z1,o,e,ex,ey,ez;
	cout<<"enter the error ";
	cin>>e;
	do{
		x1 = xv(yo,zo); y1=yv(xo,zo);
		z1 = zv(xo,yo);
		ex = abs(x1-xo);
		ey = abs(y1-yo);
		ez = abs(z1-zo);
		xo=x1;yo=y1;zo=z1
;}
while(ex>e && ey>e && ez>e);
cout<<xo<<"\n"<<yo<<"\n"<<zo<<"\n";
return 0;	


}

