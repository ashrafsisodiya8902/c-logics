#include<stdio.h>
int calcpercentage(int science,int math,int sst,int hindi,int english);
int main(){
	int science=75;
	int math=80;
	int sst=70;
	int hindi=70;
	int english=60;
	printf("percentage is : %d",calcpercentage(science,math,sst,hindi,english));
	return 0;
}
 int calcpercentage(int science,int math,int sst,int hindi,int english){
 	return((science+math+sst+hindi+english) /5);
 }
  