#include "sweeper.h"
#include "vm.h"
#include "object.h"
#include <stdlib.h>

void sweep(Vm* vm)
{
	Object** object = &vm->firstObject;
	while(*object){
		if(!(*object)->isMarked){
			Object* unreached = *object;
			*object = unreached->next;
			free(unreached);
		}else{
			(*object)->isMarked = 0;
			object = &(*object)->next;
		}

	}
}
