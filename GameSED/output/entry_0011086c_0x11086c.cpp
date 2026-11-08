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

// Function: entry_0011086c
// Address: 0x11086c - 0x110874
void entry_0011086c_0x11086c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011086c_0x11086c");
#endif

    ctx->pc = 0x11086cu;

    // 0x11086c: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x11086cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x110870: 0x26103dd8  addiu       $s0, $s0, 0x3DD8
    ctx->pc = 0x110870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15832));
    ctx->pc = 0x110874u;
}
