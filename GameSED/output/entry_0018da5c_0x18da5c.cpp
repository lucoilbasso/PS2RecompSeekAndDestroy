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

// Function: entry_0018da5c
// Address: 0x18da5c - 0x18da64
void entry_0018da5c_0x18da5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da5c_0x18da5c");
#endif

    ctx->pc = 0x18da5cu;

    // 0x18da5c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x18da5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x18da60: 0x24c2ffb0  addiu       $v0, $a2, -0x50
    ctx->pc = 0x18da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967216));
    ctx->pc = 0x18da64u;
}
