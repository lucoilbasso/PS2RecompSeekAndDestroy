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

// Function: entry_00106138
// Address: 0x106138 - 0x106168
void entry_00106138_0x106138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106138_0x106138");
#endif

    ctx->pc = 0x106138u;

label_106138:
    // 0x106138: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x106138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x10613c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10613cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x106140: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x106140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10614c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x106150: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x106150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x106154: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x106154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x106158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10615c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10615cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x106160: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x106160u;
    {
        const bool branch_taken_0x106160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106160) {
            ctx->pc = 0x106164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106160u;
            // 0x106164: 0x8f8488a0  lw          $a0, -0x7760($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106138;
        }
    }
    ctx->pc = 0x106168u;
}
