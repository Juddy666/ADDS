// function to find number of times a chosen number appears in a array
int num_count(int array[], int n, int number);
{
	int count = 0;
    for(int i =0;i<n;i++){
        if(array[i]==number){
            count = count +1;
        }
    }
    return count;
}