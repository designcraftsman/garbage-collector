#pragma once

#define STACK_MAX 256

#include <stdio.h>
#include "object.h"


typedef struct{
	Object* stack [STACK_MAX];
	int stackSize;
}Vm;


Vm* newVm();

void push (Vm* vm,Object* object);
Object*  pop (Vm* vm);


Object* pushPair(Vm* vm);


