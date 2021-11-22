#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>


/**
* struct ELFHEADER - Struct to describe the ELF header
*
* @e_ident: Did not really understand
* @e_type: Did not really understand
* @e_machine: Did not really understand
* @e_version: Did not really understand
* @e_entry: Did not really understand
*/
typedef struct ELFHEADER
{
	uint8_t e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint32_t e_entry;
} ELFHEADER;


int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif
