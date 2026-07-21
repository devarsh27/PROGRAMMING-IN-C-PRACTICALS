#include <stdio.h>

// Enum to track the type of data stored in the union
enum Type {
    INTEGER,
    FLOATING_POINT
};

// Union definition
union Data {
	int integer;
	float floating_point;
};

// Structure definition to track the type of data stored in the union
struct Variable{
   enum Type type;
    union Data data;
};

int main() {
     struct Variable var1, var2;// Initialize and print the union variables
   

    scanf("%d", &var1.data.integer);// Input for variable1
    var1.type = INTEGER;
    

    // Clear the input buffer
   int ch;
	while ((ch = getchar()) != '\n' && ch != EOF)
		{}
    // Input for variable2
    scanf("%f", &var2.data.floating_point);
	var2.type = FLOATING_POINT;

    // Print variable1
   printf("%d\n", var1.data.integer);
	printf("%.1f\n", var2.data.floating_point);
    // Print variable2
   

	return 0;
}
