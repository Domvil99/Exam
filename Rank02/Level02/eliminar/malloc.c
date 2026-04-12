void *malloc(size_t size)
{
    void *ptr;

    // pide memoria al sistema operativo
    ptr = sbrk(size);   // mueve el break del heap

    if (ptr == (void *)-1)
        return NULL;    // no hay memoria

    return ptr;         // devuelve el bloque
}