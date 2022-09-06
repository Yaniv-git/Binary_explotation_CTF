gcc /home/share/level00/code.c -o /home/share/level00/elf -fno-stack-protector -z execstack -no-pie -m32 
gcc /home/share/level01/login.c -o /home/share/level01/elf -fno-stack-protector -z execstack -no-pie -m32 
gcc /home/share/level02/code.c -o /home/share/level02/elf -fno-stack-protector -z execstack -no-pie -m32 
gcc /home/share/level03/code.c -o /home/share/level03/elf -fno-stack-protector -z execstack -no-pie -m32 
gcc /home/share/level04/32bit/code.c -o /home/share/level04/32bit/elf -fno-stack-protector -z execstack -no-pie -m32 
gcc /home/share/level04/64bit/code.c -o /home/share/level04/64bit/elf -fno-stack-protector -z execstack -no-pie 
gcc -ggdb -O0 /home/share/level05/code.c -o /home/share/level05/elf -fno-stack-protector -z execstack -no-pie -m32 
gcc /home/share/level06/code.c -o /home/share/level06/elf -fno-stack-protector -z execstack -no-pie -m32 

#enable nx
gcc /home/share/level07/code.c -o /home/share/level07/elf -fno-stack-protector -no-pie -m32  
gcc /home/share/level08/code.c -o /home/share/level08/elf -fno-stack-protector -no-pie -m32  

#enable PIE
gcc /home/share/level09/code.c -o /home/share/level09/elf -fno-stack-protector -m32

#enable canaries
gcc /home/share/level10/code.c -o /home/share/level10/elf -fno-stack-protector-all -no-pie -m32
gcc /home/share/level11/code.c -o /home/share/level11/elf -fno-stack-protector-all -no-pie -m32

