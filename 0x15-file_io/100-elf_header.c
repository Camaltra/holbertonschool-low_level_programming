#include "main.h"
#include <stdint.h>


 
typedef struct{
    uint8_t e_ident[16];
    uint16_t e_type; 
    uint16_t e_machine;
    uint32_t e_version;
    uint32_t e_entry;
    uint32_t e_phoff;
    uint32_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
}ELFHEADER;
 
int main(int  __attribute__((__unused__))  argc, char *argv[])
{
    int file, i, test_read;
    ELFHEADER elf;

    file = open(argv[1], O_RDONLY);
    if (file == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open the file %s\n", argv[1]);
        exit(98);
    }
    test_read = read(file, &elf, sizeof(elf));
    if (test_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
        exit(98);
    }
    printf("ELF Header:\n");

    printf("Magic:\t");
    for(i = 0; i < 16; i++)
    {
        printf("%02x ", elf.e_ident[i]);
    }
    close(file);
    return (0);
}