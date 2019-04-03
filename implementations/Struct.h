/**
* @file Struct.h
* @brief This header file includes basic array implementation of stack functions.
*
* @author Halil Ibrahim Turan
*/

/** @def STACK_H
 * @brief define macro to avoid multiple invocation of the header file*/
#ifndef STACK_H
#define STACK_H
/** @typedef dataType */
typedef char dataType;
/**
* @typedef stack_t
* 
* @brief This is a struct to represent stack.
*/
typedef struct {
	int size; /**@param size of stack**/
	int top;
	dataType *data;
} stack_t;


/**
* @fn initializeStack (int size)
* @brief This is a function to initialize stack.
* @param size is size of stack.
* @return stack_t* returns the address of the initialized stack.
*/
stack_t* initializeStack (int size) {
	stack_t* stack = (stack_t*) malloc(sizeof(stack_t));
	stack->size = size;
	stack -> top = -1;
	stack->data = (dataType*)malloc(sizeof(dataType) * stack->size);
	return stack;
}
/**
* @fn isEmpty (stack_t *stack)
* @brief This is a function to check wheter stack is empty or not.
* @param stack is pointer to the stack.
* @return int returns 1 if stack is empty 0 if its not.
*/
int isEmpty (stack_t *stack) {
	if(stack -> top == -1)
		return 1;
	return 0;
}
/**
* @fn isFull (stack_t *stack)
* @brief This is a function to check wheter stack is full or not.
* @param stack is pointer to the stack.
* @return int returns 1 if stack is full 0 if its not.
*/
int isFull (stack_t *stack) {
	if(stack -> top == stack->size-1)
		return 1;
	return 0;
}
/**
* @fn push(stack_t* stack, dataType item)
* @brief This is a function to push an item into the stack.
* @param stack is pointer to the stack.
* @param dataType item is item to push with type dataType. 
* @return no returnValue it prints a message.
*/
void push(stack_t* stack, dataType item) {
	if(!isFull(stack)) {
		stack->data[++stack->top] = item;
		printf("item pushed to stack successfully.@n");
	}
	else{
	printf("Stackowerflow!@n");
	}
}
/**
* @fn pop(stack_t* stack)
* @brief This is a function to get an item from top of the stack.
* @param stack is pointer to the stack.
* @return dataType returns the last item in the stack.
*/
dataType pop(stack_t* stack) 
{ 
    if (isEmpty(stack)) {
		printf("stack is empty");
		return;
	}
    return stack->data[stack->top--]; 
} 

#endif