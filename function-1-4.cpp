// function to ...
int sumtwo(int array[], int secondarray[], int n)
{
	    if(n <1){
    return 0;
}
int sum =0;
int newarray[] = {*array, *secondarray};

for(int i =0;i<(2*n);i++){
    sum = sum + newarray[i];
}
return sum;

}