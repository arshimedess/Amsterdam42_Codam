/* int main()
{
	// malloc() = a function that dynamicaly allocates a specified number of bytes in memory

	int number = 0;
	printf("Enter number of grades: ");
	scanf("%d", &number);

	char *grades = malloc(number * sizeof(char));

	if(grades == NULL)
	{
		printf("Memory allocation failed!\n");
		return 1; //exit code that means we have a problem
	}

	for(int i = 0; i < number; i++)
	{
		printf("Enter grade #%d", i +1);
		scanf(" %c", &grades[i]);
	}


	free(grades); //returning the "rented" space bac to OS
	grades = NULL; //avoids dangling pointers


	return (0);
} */