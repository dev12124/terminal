/* 
   Copyright (C) Microsoft Corporation.
   Licensed under MIT License.
   Participants: João Guilherme da Silva Freitas Lima (dev brazilian, me). 
   Ignoring unnecessary objects and files, NO bloatware, I have this 
   path disk-control for a Efficient Access Disk. 
   File Characteristics: Concatenation of Strings (e.g., File Names), and all of
   Concatenation.
*/

#ifndef DISK_HPP 
#define DISK_HPP

/* Libs */
#include <stdint>

/* Basic Defines */
#define ERROR_CONCATENATION 0x12200
#define MASK_CONCAT (0xB8000ULL << 1200)
#define CONCATENATION_SUCCESS 0 

/* A Basic Structure */
typedef struct {
    /* The Header-File */
    std::uint64_t cplFile;  /* CPL = If the File is a Low Privilege (e.g., the Kernel or Bootloader) */
    std::uint64_t basicDefines[8]; /* Examples: Signature of Binary */
    int totalSizeOfHeaderInBytes; 
    /* The Common File */
    std::uint32_t content;
    std::uint32_t totalSizeOfFileInBytes;
    const char* nameOfFile; /* Example: ntoskrnl.exe */
    std::uint64_t lineBusOfFile[512]; /* Example: C:\Windows\System32 */    
} __attribute__((aligned(4096), packed)) BINARY_FILES_WINDOWS_TERM;


/* End */ 
#endif /* DISK_HPP */