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

// Function: entry_0011403c
// Address: 0x11403c - 0x114044
void entry_0011403c_0x11403c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011403c_0x11403c");
#endif

    ctx->pc = 0x11403cu;

    // 0x11403c: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x11403cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x114040: 0x24468000  addiu       $a2, $v0, -0x8000
    ctx->pc = 0x114040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    ctx->pc = 0x114044u;
}
