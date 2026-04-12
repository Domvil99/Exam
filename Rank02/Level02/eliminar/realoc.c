void *realloc(void *ptr, size_t new_size)
{
    void *new_ptr;

    // Caso especial: ptr == NULL → funciona como malloc
    if (ptr == NULL)
        return malloc(new_size);

    // Caso especial: new_size == 0 → libera y devuelve NULL
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    // Reservar un nuevo bloque del tamaño pedido
    new_ptr = malloc(new_size);
    if (!new_ptr)
        return NULL;

    // Copiar los datos antiguos al nuevo bloque
    // (tamaño real desconocido → simplificado)
    memcpy(new_ptr, ptr, new_size);

    // Liberar el bloque viejo
    free(ptr);

    return new_ptr;
}