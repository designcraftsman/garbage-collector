#pragma once

#define STACK_MAX 256
#include "object.h"

typedef struct{
	Object* stack [STACK_MAX];
	int stackSize;
}VM;
