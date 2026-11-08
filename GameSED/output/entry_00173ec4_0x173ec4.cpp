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

// Function: entry_00173ec4
// Address: 0x173ec4 - 0x173ed0
void entry_00173ec4_0x173ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173ec4_0x173ec4");
#endif

    ctx->pc = 0x173ec4u;

    // 0x173ec4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x173ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x173ec8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x173ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x173ecc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x173eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x173ed0u;
}
