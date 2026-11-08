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

// Function: entry_0011b664
// Address: 0x11b664 - 0x11b668
void entry_0011b664_0x11b664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b664_0x11b664");
#endif

    ctx->pc = 0x11b664u;

    // 0x11b664: 0x249020a0  addiu       $s0, $a0, 0x20A0
    ctx->pc = 0x11b664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8352));
    ctx->pc = 0x11b668u;
}
