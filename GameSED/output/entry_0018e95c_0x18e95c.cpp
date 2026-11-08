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

// Function: entry_0018e95c
// Address: 0x18e95c - 0x18e964
void entry_0018e95c_0x18e95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e95c_0x18e95c");
#endif

    ctx->pc = 0x18e95cu;

    // 0x18e95c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x18e95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18e960: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x18e964u;
}
