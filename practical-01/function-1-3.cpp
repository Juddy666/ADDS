// function to find number of times a chosen number appears in a array
int count(int array[], int n, int num)
{
	int count = 0;
    for(int i =0;i<n;i++){
        if(array[i]==num){
            count = count +1;
        }
    }
    return count;
}