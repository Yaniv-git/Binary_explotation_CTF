OK... overwriting to a positive intager is simple, but can you be more specific?


--------------------
note that when writting an exploit, python 2 and 3 act different

for example:

root@8b211ea9d734:/home/share# python3 -c 'print("\xea\xce")'     
êÎ
root@8b211ea9d734:/home/share# python2 -c 'print("\xea\xce")'
??

its reccommended to use python2 in this case (you can also install and use the pwntools package,which will help you alot, or other tools to your choice)

-en flag will also work in echo
echo -en "\xea\xce"
??