/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i = 0;

    // Calculate the length of the destination string
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Append characters from src to dest
    while (src[i] != '\0')
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    // Add null terminator to the end of the concatenated string
    dest[dest_len] = '\0';

    return dest;
}
