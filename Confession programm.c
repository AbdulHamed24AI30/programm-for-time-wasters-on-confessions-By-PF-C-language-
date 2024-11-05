#include<stdio.h>
#include<conio.h>

void main()
{
	int reading_time,writting_time,total_time;
	printf("Enter the reading time you have spent  on Confession (In minutes ):");
	scanf("%d",&reading_time);
	
	printf("Enter the writting time you have spent on confession (In minutes):");
	scanf("%d",&writting_time);
	
	total_time = reading_time + writting_time;
	
	if (total_time >= 120 ){
		printf("Samajh lo! Tum apna qeemati waqt barbad kar rahe ho. Yeh waqt wapas nahi aayega  ab bhi waqt hai, sambhal jao warna sirf pachtawa reh jayega!");
	}
	else if (total_time >= 60 && total_time <= 120){
		printf("Yaad rahe, waqt ki qeemat ko samjho! Confession pages pe zyada waqt na gawayen – apne goals pe focus rakhein aur apne waqt ka behtareen istemaal karein");
	}
	else if (total_time <= 60 ){
		printf("Wah! Tumhari time management skills bohot zabardast hain! Tum apna waqt itne ache tareeke se manage kar rahe ho, yeh tumhari dedication aur commitment ko dikhata hai. Aise hi focused raho, aur kamyabi tumhara intezar kar rahi hai");
	}
}