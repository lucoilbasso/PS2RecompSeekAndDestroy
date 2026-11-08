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

// Function: entry_001836c8
// Address: 0x1836c8 - 0x1836f0
void entry_001836c8_0x1836c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001836c8_0x1836c8");
#endif

    ctx->pc = 0x1836c8u;

label_1836c8:
    // 0x1836c8: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1836c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1836cc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1836ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1836d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1836d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1836d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1836d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1836d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1836d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1836dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1836dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1836e0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1836e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1836e4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1836e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1836e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1836E8u;
    {
        const bool branch_taken_0x1836e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1836ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836E8u;
        // 0x1836ec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836e8) {
            ctx->pc = 0x1836C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1836c8;
        }
    }
    ctx->pc = 0x1836F0u;
}
