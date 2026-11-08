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

// Function: entry_001b4630
// Address: 0x1b4630 - 0x1b4658
void entry_001b4630_0x1b4630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4630_0x1b4630");
#endif

    ctx->pc = 0x1b4630u;

label_1b4630:
    // 0x1b4630: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b4630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b4634: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x1b4634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b4638: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4638u;
    {
        const bool branch_taken_0x1b4638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4638u;
        // 0x1b463c: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4638) {
            ctx->pc = 0x1B4664u;
            return;
        }
    }
    ctx->pc = 0x1B4640u;
    // 0x1b4640: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x1b4640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b4644: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4648: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B4648u;
    {
        const bool branch_taken_0x1b4648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4648u;
        // 0x1b464c: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4648) {
            ctx->pc = 0x1B4630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4630;
        }
    }
    ctx->pc = 0x1B4650u;
    // 0x1b4650: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4650u;
    {
        const bool branch_taken_0x1b4650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4650u;
        // 0x1b4654: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4650) {
            ctx->pc = 0x1B4668u;
            return;
        }
    }
    ctx->pc = 0x1B4658u;
}
