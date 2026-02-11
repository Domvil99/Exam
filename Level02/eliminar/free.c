void free(void *ptr)
{
    if (ptr == NULL)
        return;

    // Marca el bloque como libre en la tabla interna del heap
    mark_block_as_free(ptr);

    // Opcional: unir bloques libres adyacentes
    coalesce_free_blocks();
}