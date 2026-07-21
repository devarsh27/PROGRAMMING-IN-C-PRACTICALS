#include <stdio.h>


int compareStrings(char str1[], char str2[]) {
    // write your code here
    int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			return 1;
		}
		i++;
	}
	if (str1[i] == '\0' && str2[i] == '\0')
		return 0;
	return 1;
    
}


void findLongerString(char str1[], char str2[]) {
    // write your code here
    
    int len1 = 0, len2 = 0, i=0;
	 while(str1[len1] != '\0') len1++;
	while (str2[len2] != '\0') len2++;

	if(len1 > len2)
		printf("Longer string: %s\n", str1);
	else if (len2 > len1)
		printf("Longer string: %s\n", str2);
	else
		printf("Both strings are of eual length\n");
}


void concatenateStrings(char str1[], char str2[], char result[]) {
  
    int i = 0, j = 0;
	 while (str1[i] != '\0'){
		 result[i] = str1[i];
		 i++;
	 }
    while (str2[j] != '\0'){
		result[i] = str2[j];
		i++; j++;
	}
	result[i] = '\0';
}


int findSubstring(char mainStr[], char subStr[]) {
    // write your code here
    int i, j, start;
	for (i = 0; mainStr[i] != '\0'; i++){
		if (mainStr[i] == subStr[0]){
			start = i;
			j = 0;
				while (mainStr[i + j] == subStr[j] && subStr[j] != '\0') {
				j++;
				}
			if (subStr[j] == '\0')
				return start;
		}
	}
    return -1;
}

int main() {
	char str1[100], str2[100], result[200];
	int compare, substringIndex;
	

	printf("Enter first string: ");
	scanf("%s", str1);
	printf("Enter second string (substring): ");
	scanf("%s", str2);
	
	
	compare = compareStrings(str1, str2);
	if (compare == 0) {
		printf("Strings are equal\n");
	} else {
		printf("Strings are not equal\n");
	}
	

	findLongerString(str1, str2);
	
	
	concatenateStrings(str1, str2, result);
	printf("Concatenated string: %s\n", result);
	
	
	
	substringIndex = findSubstring(str1, str2);
	if (substringIndex != -1) {
		printf("Substring found at index: %d\n", substringIndex);
	} else {
		printf("Substring not found in the first string\n");
	}
	
	return 0;
}
