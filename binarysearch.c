#include<stdio.h>
void main(){
	int arr[20], i, input, find, mid, pos = -1;

	printf("How many number you want to take input{MAX=20} : ");
	scanf("%d",&input);

	printf("\nGive input in your array.. \n");
	for(i=0; i<input; i++){
		printf("Insert %d no. element : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\nWhich number you want to find : ");
	scanf("%d",&find);

	i = 0;
	input = input - 1;
	while(i<input){
		mid = (i+input) / 2;
		if(arr[mid] == find){
			pos = mid;
			printf("%d",pos);
			goto end;
		}else if(arr[mid] > find){
			input = mid - 1;
		}else{
			i = mid + 1;
		}
	}

	printf("\n");
	if(pos = -1)
		printf("%d is not found in the array",find);

	end:
		printf("\n\n");
		return;

}

