You are starting to annoy me, just for you i'll disable the executable stack. 
But i will still dynamically link the libraries because is more convenient right?


Writers note: since disabling ASLR is in the kernel level and you are running on a container, you will have to stop winning like a bitch and overcome ASLR. Sorry not sorry.
---------------

in this challange you need to see the content of the flag through the elf file, you can either cat it or run a shell from the elf and then cat yourself.