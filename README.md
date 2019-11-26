# get_next_line

## gnl is a second project in school 42 - get_next_line

this function reads one line at a time from a given file descriptor, writes this line
into a dynamically allocated memory area and returns a pointer to this area.

the line is a series of characters, which end with a '\n'.
the line returned is null-terminated (there is no new-line character).

by calling the function in a loop, it will read the contents of a file given as an
argument or stdin untill the EoF (ctrl + D) signal is sent.

**to prevent memory leaks, the user must free(line) after each call to _get_next_line_**

> the function returns 1 if a line has been read

> the function returns 0 if a file has been read (EoF)

> the function returns -1 on error

### the prototype is as follows:

`int	get_next_line(const int fd, char **line);`

where 

> **fd** - file descriptor of a desired file

> ** **line** - pointer to the memory area where the contents of a line would be stored



## ** usage **

to test the code, run `sh compile.sh`
this will *make*, *link* the library and will produce *test_gnl* executable file.
to run use `./test_gnl *read*` or `./test_gnl` to read from stdin

## final notes

proud to say that the code has NO memory leaks
to clean up the library files, run `cd ./libft && make clean`

sadly, had to rewrite it using a static array to store the data instead of lists (which would be prefered), but 
