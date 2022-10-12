#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog attributes
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: The attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - Typedef for dog structure
*/
typedef struct dog dog_t;


#endif /* DOG_H_ */
