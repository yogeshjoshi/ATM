
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
	*fifty= *amount/50;
	change_amount(amount,50);
	*twenty= *amount/20;
	change_amount(amount,20);
	*ten= *amount/10;
	change_amount(amount,10);
	return 1;
}
void print_notes(int* note,int* NumberOfNote){
	int i;
	for (i = 0;i < 5;i++)
	{
		if(NumberOfNote[i]==0)
		continue;
		printf("%d Rupees Note = %d\n",note[i],NumberOfNote[i]);
	}
}