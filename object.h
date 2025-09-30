#pragma once

typedef struct Vm Vm;

typedef enum{
  OBJECT_INT,
  OBJECT_PAIR,
} ObjectType;


typedef struct sObject{
	struct sObject* next;
	int isMarked;
	ObjectType type;
	union{
		int value;

		struct{
			struct sObject* head;
			struct sObject* tail;
		};
	};
}Object;

Object* newObject(Vm* vm,ObjectType type);
