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

// Function: entry_0011bb24
// Address: 0x11bb24 - 0x11bb2c
void entry_0011bb24_0x11bb24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bb24_0x11bb24");
#endif

    ctx->pc = 0x11bb24u;

    // 0x11bb24: 0x245036d0  addiu       $s0, $v0, 0x36D0
    ctx->pc = 0x11bb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14032));
    // 0x11bb28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x11bb28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x11bb2cu;
}
