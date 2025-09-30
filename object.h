#pragma once

typedef enum{
  OBJECT_INT,
  OBJECT_PAIR,
} ObjectType;


typedef struct sObject{
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

Object* newObject(ObjectType type);
