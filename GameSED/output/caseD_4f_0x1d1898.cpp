#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: caseD_4f
// Address: 0x1d1898 - 0x1d189c
void caseD_4f_0x1d1898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4f_0x1d1898");
#endif

    ctx->pc = 0x1d1898u;

    // 0x1d1898: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x1d1898u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
    ctx->pc = 0x1d189cu;
}
