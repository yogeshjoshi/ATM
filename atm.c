#include "atmHeader.h"

int main(){
	int validation;
	float Money;
	int notes[] = {1000,500,100,50,20,10};
	int thousandNotes=0,fiveHundredNotes=0,hundredNotes = 0,fiftynotes=0,twentynotes=0,tenrupeenotes=0;
	printf("\nNotice: We do not provide change of 1,2 and 5\n\n");
	printf("Money you want = ");
	scanf("%f",&Money);
	printf("\n");
	validation = validateAmount(Money);
	if(validation == 0){
		printf("amount is not valid");
		return 0;		
	}
	else{
		int amount = (int)Money;
		NumberOfNote(&amount,&thousandNotes,&fiveHundredNotes,&hundredNotes,&fiftynotes,&twentynotes,&tenrupeenotes);
		int NumberOfNotes[]={thousandNotes,fiveHundredNotes,hundredNotes,fiftynotes,twentynotes,tenrupeenotes};
		print_notes(notes,NumberOfNotes);
		return 1;	
	}
}
