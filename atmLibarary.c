
int change_amount(int*amount,int note){
	*amount= *amount%note;
	return 1;
}
int validateAmount(float amount){
	if(amount < 10.0){
		return 0;
	}
	return 1;
}
int NumberOfNote(int* amount,int* thousand ,int* fiveHundred, int* hundred, int* fifty, int* twenty, int* ten){
	*thousand = *amount/1000;
	change_amount(amount,1000);
	*fiveHundred = *amount/500;
	change_amount(amount,500);
	*hundred = *amount/100;
	change_amount(amount,100);
	*fifty = *amount/50;
	change_amount(amount,50);
	*twenty = *amount/20;
	change_amount(amount,20);
	*ten = *amount/10;
	change_amount(amount,10);
	return 1;
}
void print_notes(int* note,int* NumberOfNote,int amount){
	int i;
	printf("\n\t\t\tWITHDRAWN AMOUNT SUMMERY");
	for (i = 0;i < 6;i++)
	{
		if(NumberOfNote[i]==0)
		continue;
		printf("\n\t\t\t%d Rupees Note = %d",note[i],NumberOfNote[i]);
	}
	if (amount!=0)
	{
		printf("\n\aNOTICE:Due to Unability of 1,2 and 5 Rupee .We can't provide you %d Rupee ",amount);
	}
}