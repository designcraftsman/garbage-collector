#include <stdlib.h>
#include "object.h"
#include "vm.h"


Object* newObject(Vm* vm,ObjectType type){
	Object* newObject = (Object*) malloc(sizeof(Object));
	newObject->type = type;
	newObject->next = vm->firstObject;
	newObject->isMarked = 0;
	return newObject;
}

