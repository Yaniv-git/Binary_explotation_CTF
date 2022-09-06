FROM debian:latest 
RUN apt update
RUN apt-get install file gcc sudo gcc-multilib checksec gdb git python2 python3 pip man -y


RUN cd ~ && git clone https://github.com/apogiatzis/gdb-peda-pwndbg-gef.git
RUN cd ~/gdb-peda-pwndbg-gef && ./install.sh
RUN pip install ropper
RUN pip install pwn
WORKDIR /home/share



CMD ["/bin/bash","--init-file", "/home/share/entrypoint.sh"]