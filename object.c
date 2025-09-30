#include <stdio.h>
#include <stdlib.h>
#include "object.h"

Object* newObject(ObjectType type){
	Object* newObject = (Object*) malloc(sizeof(Object));
	newObject->type = type;
	return newObject;
}

