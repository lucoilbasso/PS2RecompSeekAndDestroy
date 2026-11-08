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

// Function: entry_0011db68
// Address: 0x11db68 - 0x11db70
void entry_0011db68_0x11db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011db68_0x11db68");
#endif

    ctx->pc = 0x11db68u;

    // 0x11db68: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x11db68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x11db6c: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x11db6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2400C4u));
    ctx->pc = 0x11db70u;
}
