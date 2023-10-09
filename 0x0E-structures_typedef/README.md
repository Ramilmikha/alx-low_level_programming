0-main.c - This file defines a struct dog variable named my_dog and initializes its members name, age, and owner. Then, it prints the dog's name and age.

dog.h - This header file defines the structure struct dog with the specified elements: name, age, and owner. It also includes include guards to prevent multiple inclusion.

1-init_dog.c - This file contains the implementation of the init_dog function. This function initializes a struct dog by assigning values to its members (name, age, and owner) through a pointer. It checks if the pointer is not NULL before assigning values.

2-main.c - This file defines a struct dog variable my_dog, initializes its members, and then calls the print_dog function to print the dog's information.

2-print_dog.c - This file implements the print_dog function, which prints the details of a struct dog variable. It follows the specified format and checks if any of the members are NULL, printing (nil) in that case.

3-main.c - This file defines a new type dog_t and uses it to create and initialize a dog_t variable, my_dog. It then prints the dog's name and age.

4-main.c - This file uses the new_dog function to create a new dog_t variable, my_dog. It prints the dog's name and age and frees the allocated memory.

4-new_dog.c - This file contains the implementation of the new_dog function. This function creates a new dog_t variable, allocates memory for name and owner, and copies the provided values into these newly allocated memory locations. It returns a pointer to the newly created dog_t.

5-main.c - This file uses the new_dog function to create a new dog_t variable, my_dog. It prints the dog's name and age and then calls the free_dog function to free the allocated memory.

5-free_dog.c - This file implements the free_dog function, which frees the memory allocated for a dog_t variable, including its name and owner members.
