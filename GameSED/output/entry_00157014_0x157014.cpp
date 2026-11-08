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

// Function: entry_00157014
// Address: 0x157014 - 0x15701c
void entry_00157014_0x157014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157014_0x157014");
#endif

    ctx->pc = 0x157014u;

    // 0x157014: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x157014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x157018: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x157018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x15701cu;
}
