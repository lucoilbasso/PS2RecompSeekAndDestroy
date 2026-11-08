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

// Function: entry_001c49a8
// Address: 0x1c49a8 - 0x1c49d8
void entry_001c49a8_0x1c49a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c49a8_0x1c49a8");
#endif

    ctx->pc = 0x1c49a8u;

label_1c49a8:
    // 0x1c49a8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c49ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c49acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c49b0: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1c49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1c49b4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1c49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1c49b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1c49b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1c49bc: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C49BCu;
    {
        const bool branch_taken_0x1c49bc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1c49bc) {
            ctx->pc = 0x1C49A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c49a8;
        }
    }
    ctx->pc = 0x1C49C4u;
    // 0x1c49c4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C49C4u;
    {
        const bool branch_taken_0x1c49c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49C4u;
        // 0x1c49c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49c4) {
            ctx->pc = 0x1C49D8u;
            return;
        }
    }
    ctx->pc = 0x1C49CCu;
    // 0x1c49cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1c49d0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1c49d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c49d4: 0x8c4dddc0  lw          $t5, -0x2240($v0)
    ctx->pc = 0x1c49d4u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x24DDC0u));
    ctx->pc = 0x1c49d8u;
}
