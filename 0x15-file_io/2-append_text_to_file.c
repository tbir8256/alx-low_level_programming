#include "main.h"
/**
 * append_text_to_file - Appends txt at the file end
 * @filename: A pointer to file name
 * @text_content: A string to add to the end of the file
 * Return: returns -1 if fun fails of filename is NULL,
 * if the file doesn't exist, lacks user write permission
 * else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
