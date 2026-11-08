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

// Function: entry_001b5310
// Address: 0x1b5310 - 0x1b533c
void entry_001b5310_0x1b5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5310_0x1b5310");
#endif

    ctx->pc = 0x1b5310u;

label_1b5310:
    // 0x1b5310: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b5310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b5314: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5314u;
    {
        const bool branch_taken_0x1b5314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5314u;
        // 0x1b5318: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5314) {
            ctx->pc = 0x1B5348u;
            return;
        }
    }
    ctx->pc = 0x1B531Cu;
    // 0x1b531c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1b531cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b5320: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b5320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b5324: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b5324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5328: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b5328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b532c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B532Cu;
    {
        const bool branch_taken_0x1b532c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b532c) {
            ctx->pc = 0x1B5330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B532Cu;
            // 0x1b5330: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5310;
        }
    }
    ctx->pc = 0x1B5334u;
    // 0x1b5334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5334u;
    {
        const bool branch_taken_0x1b5334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5334u;
        // 0x1b5338: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5334) {
            ctx->pc = 0x1B534Cu;
            return;
        }
    }
    ctx->pc = 0x1B533Cu;
}
