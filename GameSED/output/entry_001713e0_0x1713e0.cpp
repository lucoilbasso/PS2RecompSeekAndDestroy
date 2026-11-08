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

// Function: entry_001713e0
// Address: 0x1713e0 - 0x1713f8
void entry_001713e0_0x1713e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001713e0_0x1713e0");
#endif

    ctx->pc = 0x1713e0u;

    // 0x1713e0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1713e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1713e4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x1713e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x1713e8: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x1713e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x1713ec: 0x8d030048  lw          $v1, 0x48($t0)
    ctx->pc = 0x1713ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x1713f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1713f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1713f4: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1713f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1713f8u;
}
