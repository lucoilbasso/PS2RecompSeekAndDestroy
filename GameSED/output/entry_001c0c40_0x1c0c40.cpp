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

// Function: entry_001c0c40
// Address: 0x1c0c40 - 0x1c0c58
void entry_001c0c40_0x1c0c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0c40_0x1c0c40");
#endif

    ctx->pc = 0x1c0c40u;

    // 0x1c0c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0c44: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1c0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1c0c48: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0C48u;
    {
        const bool branch_taken_0x1c0c48 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C48u;
        // 0x1c0c4c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c48) {
            ctx->pc = 0x1C0C58u;
            return;
        }
    }
    ctx->pc = 0x1C0C50u;
    // 0x1c0c50: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1C0C50u;
    {
        const bool branch_taken_0x1c0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C50u;
        // 0x1c0c54: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c50) {
            ctx->pc = 0x1C0BD4u;
            return;
        }
    }
    ctx->pc = 0x1C0C58u;
}
