<h2>0x0E. C - Structures, typedef</h2>

<h2>TASKS:</h2>

<dl>
<dt>0. Poppy
<ul>
<li>Define a new type struct dog with the following elements:</li>
<li>name, type = char * </li>
<li>age, type = float</li>
<li>owner, type = char * </li>
</dt>
</dl>


<dl>
<dt>1. A dog is the only thing on earth that loves you more than you love yourself
<ul>
<li>Write a function that initialize a variable of type struct dog</li>
<li>Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);*</li>
</ul>
</dt>
</dl>

<dl>
<dt>
<ul>2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
<li>Write a function that prints a struct dog</li>
<li>`Prototype: void print_dog(struct dog *d);`</li>
<li>Format: see example bellow</li>
<li>You are allowed to use the standard library</li>
<li>If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))</li>
<li>If d is NULL print nothing.</li>
</ul>
</dt>
</dl>


<dl>
<dt>3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
<ul>
<li>Define a new type dog_t as a new name for the type struct dog.</li>
</ul>
</dt>
</dl>


<dl>
<dt>4. A door is what a dog is perpetually on the wrong side of
<ul>
<li>Write a function that creates a new dog.</li>
<li>`Prototype: dog_t *new_dog(char *name, float age, char *owner);`</li>
<li>You have to store a copy of name and owner</li>
<li>Return NULL if the function fails</li>
</ul>
</dt>
</dl>


<dl>
<dt>5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
<ul>
<li>Write a function that frees dogs.</li>
<li>`Prototype: void free_dog(dog_t *d);`</li>
</ul>
</dt>
</dl>


