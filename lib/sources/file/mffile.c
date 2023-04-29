/*
** EPITECH PROJECT, 2023
** fline
** File description:
** vim users are the way
*/

#include "../../../includes/lib.h"

ssize_t mfwrite(const void *ptr, size_t size, size_t count, t_file *file)
{
    ssize_t bytes_written;

    if (!ptr || !file || size == 0 || count == 0)
        return 0;

    bytes_written = write(file->fd, ptr, size * count);
    if (bytes_written == -1)
        return 0;

    return bytes_written / size;
}

ssize_t mfread(void *ptr, size_t size, size_t count, t_file *file)
{
    ssize_t bytes_read;

    if (!ptr || !file || size == 0 || count == 0)
        return 0;

    bytes_read = read(file->fd, ptr, size * count);
    if (bytes_read == -1)
        return 0;

    return bytes_read / size;
}

t_file *mfopen(const char *filename, const char *mode)
{
    t_file *file;
    int flags;

    file = malloc(sizeof(t_file));
    if (!file)
        return NULL;

    switch (mode[0]) {
        case 'r': flags = O_RDONLY; break;
        case 'w': flags = O_WRONLY | O_CREAT | O_TRUNC; break;
        case 'a': flags = O_WRONLY | O_CREAT | O_APPEND; break;
        default: free(file); return NULL;
    }
    file->fd = open(filename, flags, 0644);
    if (file->fd == -1) {
        free(file);
        return NULL;
    }

    return file;
}

int mfclose(t_file *file)
{
    int result;

    if (!file)
        return -1;

    result = close(file->fd);
    free(file);

    return result;
}
