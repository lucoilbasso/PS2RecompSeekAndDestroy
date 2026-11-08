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

// Function: caseD_55
// Address: 0x1d1968 - 0x1d196c
void caseD_55_0x1d1968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_55_0x1d1968");
#endif

    ctx->pc = 0x1d1968u;

    // 0x1d1968: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x1d1968u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
    ctx->pc = 0x1d196cu;
}
