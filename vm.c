#include <stdlib.h>
#include "vm.h"

Vm* newVm(){
	Vm* new = malloc(sizeof(Vm));
	new->stackSize = 0;
	return new;
}

void push (Vm* vm,Object* object)
{
	if(vm->stackSize >= STACK_MAX ){
		printf("Stack overflow");
		exit(0);
	}
	
	vm->stack[vm->stackSize++] = object;
}


Object* pop (Vm* vm)
{
	Object* object = vm->stack[--vm->stackSize];
	return object;
}

void pushInt(Vm* vm,int value)
{
	Object* object = newObject(OBJECT_INT);
	object->value = value;
	push(vm,object);
}


Object* pushPair(Vm* vm){
	Object* object = newObject(OBJECT_PAIR);
	object->tail = pop(vm);
	object->head = pop(vm);
	push(vm,object);
	return object;
}












