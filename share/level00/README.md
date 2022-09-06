Welcome to my not vulnerable code, don't we all love c?

--------------------
This is a simple code that is vulnerable to buffer-overflow. The function gets (read the documentation with `man gets`) doesnt verify the lenght of the input, which enables us to write more data to the buffer than allocated. And thus crushing the application.