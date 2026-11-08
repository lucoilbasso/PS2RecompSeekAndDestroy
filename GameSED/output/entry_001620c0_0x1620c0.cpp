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

// Function: entry_001620c0
// Address: 0x1620c0 - 0x1620e0
void entry_001620c0_0x1620c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001620c0_0x1620c0");
#endif

    ctx->pc = 0x1620c0u;

    // 0x1620c0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1620C0u;
    {
        const bool branch_taken_0x1620c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620C0u;
        // 0x1620c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620c0) {
            ctx->pc = 0x1620E0u;
            return;
        }
    }
    ctx->pc = 0x1620C8u;
    // 0x1620c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1620c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1620cc: 0x8d6301b4  lw          $v1, 0x1B4($t3)
    ctx->pc = 0x1620ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 436)));
    // 0x1620d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1620d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1620d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1620D4u;
    {
        const bool branch_taken_0x1620d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620D4u;
        // 0x1620d8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620d4) {
            ctx->pc = 0x1620E4u;
            return;
        }
    }
    ctx->pc = 0x1620DCu;
    // 0x1620dc: 0x0  nop
    ctx->pc = 0x1620dcu;
    // NOP
    ctx->pc = 0x1620e0u;
}
