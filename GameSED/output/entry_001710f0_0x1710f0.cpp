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

// Function: entry_001710f0
// Address: 0x1710f0 - 0x171108
void entry_001710f0_0x1710f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001710f0_0x1710f0");
#endif

    ctx->pc = 0x1710f0u;

    // 0x1710f0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1710f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1710f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1710f8: 0x8d220034  lw          $v0, 0x34($t1)
    ctx->pc = 0x1710f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x1710fc: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x1710fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x171100: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x171100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171104: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x171104u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x171108u;
}
