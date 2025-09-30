#pragma once

#include "vm.h"
#include "object.h"

void markAll(Vm* vm);
void markObject(Object* object);

