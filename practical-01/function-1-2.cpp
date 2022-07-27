// function to ...
double average(int array[], int n)
{
	double average = 0;
    if(n <1){
    return 0;
}
int sum = 0;
for(int i = 0;i<n;i++){
    sum = sum + array[i];
}

average = sum/n;
return average;
}