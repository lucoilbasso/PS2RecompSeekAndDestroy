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

// Function: entry_001226e8
// Address: 0x1226e8 - 0x1226fc
void entry_001226e8_0x1226e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001226e8_0x1226e8");
#endif

    ctx->pc = 0x1226e8u;

    // 0x1226e8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226E8u;
    {
        const bool branch_taken_0x1226e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1226e8) {
            ctx->pc = 0x1226ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226E8u;
            // 0x1226ec: 0x8c82015c  lw          $v0, 0x15C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226FCu;
            return;
        }
    }
    ctx->pc = 0x1226F0u;
    // 0x1226f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1226f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1226f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1226f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1226f8: 0x8c82015c  lw          $v0, 0x15C($a0)
    ctx->pc = 0x1226f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    ctx->pc = 0x1226fcu;
}
