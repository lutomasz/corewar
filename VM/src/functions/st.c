#include "../../header/header.h"

/*
** take a registry and a registry or an indirect and store the value of the registry
** toward a second argument. Its opcode is 0x03. For example, st r1, 42 store the
** value of r1 at the address (PC + (42 % IDX_MOD))
*/