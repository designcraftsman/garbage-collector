#pragma once

typedef enum{
  OBJECT_INT,
  OBJECT_PAIR,
} ObjectType;


typedef struct sObject{
	ObjectType type;
	union{
		int value;

		struct{
			struct sObject* head;
			struct sObject* tail;
		};
	};
}Object;
