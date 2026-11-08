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

// Function: entry_0017b3b0
// Address: 0x17b3b0 - 0x17b3d8
void entry_0017b3b0_0x17b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b3b0_0x17b3b0");
#endif

    ctx->pc = 0x17b3b0u;

label_17b3b0:
    // 0x17b3b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b3b4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17B3B4u;
    {
        const bool branch_taken_0x17b3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3B4u;
        // 0x17b3b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3b4) {
            ctx->pc = 0x17B390u;
            return;
        }
    }
    ctx->pc = 0x17B3BCu;
    // 0x17b3bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17b3c0: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x17b3c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b3c4: 0x0  nop
    ctx->pc = 0x17b3c4u;
    // NOP
    // 0x17b3c8: 0x0  nop
    ctx->pc = 0x17b3c8u;
    // NOP
    // 0x17b3cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B3CCu;
    {
        const bool branch_taken_0x17b3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3CCu;
        // 0x17b3d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3cc) {
            ctx->pc = 0x17B3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b3b0;
        }
    }
    ctx->pc = 0x17B3D4u;
    // 0x17b3d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x17b3d8u;
}
