# get_next_line

get_next_line() function reads a line from a file descriptor delimited by new line character. New line character is not included in the line. Calling the function in a while loop will allow to read the text available on a file descriptor one line at a time until the end of the text

Param 1: const int fd is a file descriptor that will be used to read from

Param 2: char **line is the address of a pointer to a character that will be used to save the line read from the file descriptor

Returns: 1 if a line has been read, 0 when the reading has been completed or -1 if an error accused.
