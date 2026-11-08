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

// Function: entry_001226d4
// Address: 0x1226d4 - 0x1226e8
void entry_001226d4_0x1226d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001226d4_0x1226d4");
#endif

    ctx->pc = 0x1226d4u;

    // 0x1226d4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226D4u;
    {
        const bool branch_taken_0x1226d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1226d4) {
            ctx->pc = 0x1226D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226D4u;
            // 0x1226d8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226E8u;
            return;
        }
    }
    ctx->pc = 0x1226DCu;
    // 0x1226dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1226dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1226e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1226e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1226e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1226e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x1226e8u;
}
