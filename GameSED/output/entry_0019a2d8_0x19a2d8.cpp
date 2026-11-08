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

// Function: entry_0019a2d8
// Address: 0x19a2d8 - 0x19a300
void entry_0019a2d8_0x19a2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a2d8_0x19a2d8");
#endif

    ctx->pc = 0x19a2d8u;

label_19a2d8:
    // 0x19a2d8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x19a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x19a2dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a2e0: 0x0  nop
    ctx->pc = 0x19a2e0u;
    // NOP
    // 0x19a2e4: 0x0  nop
    ctx->pc = 0x19a2e4u;
    // NOP
    // 0x19a2e8: 0x0  nop
    ctx->pc = 0x19a2e8u;
    // NOP
    // 0x19a2ec: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A2ECu;
    {
        const bool branch_taken_0x19a2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a2ec) {
            ctx->pc = 0x19A2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A2ECu;
            // 0x19a2f0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a2d8;
        }
    }
    ctx->pc = 0x19A2F4u;
    // 0x19a2f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A2F4u;
    {
        const bool branch_taken_0x19a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2F4u;
        // 0x19a2f8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2f4) {
            ctx->pc = 0x19A310u;
            return;
        }
    }
    ctx->pc = 0x19A2FCu;
    // 0x19a2fc: 0x0  nop
    ctx->pc = 0x19a2fcu;
    // NOP
    ctx->pc = 0x19a300u;
}
