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

// Function: entry_00121d40
// Address: 0x121d40 - 0x121d4c
void entry_00121d40_0x121d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121d40_0x121d40");
#endif

    ctx->pc = 0x121d40u;

    // 0x121d40: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x121d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x121d44: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x121d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x121d48: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x121d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    ctx->pc = 0x121d4cu;
}
