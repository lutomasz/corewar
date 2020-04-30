#include "../../header/header.h"

/*
** There is no argument’s coding byte, take an index, opcode 0x0c. Create a
** new process that will inherit the different states of its father, except its PC, which
** will be put at (PC + (1st parameter % IDX_MOD)).
*/