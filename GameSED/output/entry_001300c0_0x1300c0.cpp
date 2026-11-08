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

// Function: entry_001300c0
// Address: 0x1300c0 - 0x1300e8
void entry_001300c0_0x1300c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001300c0_0x1300c0");
#endif

    ctx->pc = 0x1300c0u;

label_1300c0:
    // 0x1300c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1300c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1300c4: 0x10e2fff6  beq         $a3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1300C4u;
    {
        const bool branch_taken_0x1300c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1300C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300C4u;
        // 0x1300c8: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300c4) {
            ctx->pc = 0x1300A0u;
            return;
        }
    }
    ctx->pc = 0x1300CCu;
    // 0x1300cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1300ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1300d0: 0x28a2002c  slti        $v0, $a1, 0x2C
    ctx->pc = 0x1300d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x1300d4: 0x0  nop
    ctx->pc = 0x1300d4u;
    // NOP
    // 0x1300d8: 0x0  nop
    ctx->pc = 0x1300d8u;
    // NOP
    // 0x1300dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1300DCu;
    {
        const bool branch_taken_0x1300dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1300E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300DCu;
        // 0x1300e0: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300dc) {
            ctx->pc = 0x1300C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1300c0;
        }
    }
    ctx->pc = 0x1300E4u;
    // 0x1300e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1300e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1300e8u;
}
