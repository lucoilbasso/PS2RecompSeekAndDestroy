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

// Function: entry_001c0b94
// Address: 0x1c0b94 - 0x1c0bb4
void entry_001c0b94_0x1c0b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0b94_0x1c0b94");
#endif

    ctx->pc = 0x1c0b94u;

    // 0x1c0b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0b98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0b9c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1c0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1c0ba0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1c0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1c0ba4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1c0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c0ba8: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0BA8u;
    {
        const bool branch_taken_0x1c0ba8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BA8u;
        // 0x1c0bac: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ba8) {
            ctx->pc = 0x1C0BB4u;
            return;
        }
    }
    ctx->pc = 0x1C0BB0u;
    // 0x1c0bb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1c0bb4u;
}
