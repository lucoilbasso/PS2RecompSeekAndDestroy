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

// Function: entry_001605a8
// Address: 0x1605a8 - 0x1605b0
void entry_001605a8_0x1605a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001605a8_0x1605a8");
#endif

    ctx->pc = 0x1605a8u;

    // 0x1605a8: 0x24103630  addiu       $s0, $zero, 0x3630
    ctx->pc = 0x1605a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13872));
    // 0x1605ac: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1605acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x1605b0u;
}
