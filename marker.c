#include "marker.h"
#include "object.h"
#include "vm.h"


void markAll(Vm* vm)
{
	for(int i=0; i < STACK_MAX ; i++){
		markObject(vm->stack[i]);	
	}
}
void markObject(Object* object)
{
	if(object->isMarked){
		printf("Object already marked");
		return;
	}
	
	object->isMarked = 1;
	
	if(object->type == OBJECT_PAIR){
		markObject(object->head);
		markObject(object->tail);
	}	
}
