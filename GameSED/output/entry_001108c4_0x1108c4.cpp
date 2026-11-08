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

// Function: entry_001108c4
// Address: 0x1108c4 - 0x1108cc
void entry_001108c4_0x1108c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001108c4_0x1108c4");
#endif

    ctx->pc = 0x1108c4u;

    // 0x1108c4: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1108c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1108c8: 0x26103dd8  addiu       $s0, $s0, 0x3DD8
    ctx->pc = 0x1108c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15832));
    ctx->pc = 0x1108ccu;
}
