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

// Function: entry_001b4868
// Address: 0x1b4868 - 0x1b4894
void entry_001b4868_0x1b4868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4868_0x1b4868");
#endif

    ctx->pc = 0x1b4868u;

label_1b4868:
    // 0x1b4868: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b4868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b486c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B486Cu;
    {
        const bool branch_taken_0x1b486c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B486Cu;
        // 0x1b4870: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b486c) {
            ctx->pc = 0x1B48A0u;
            return;
        }
    }
    ctx->pc = 0x1B4874u;
    // 0x1b4874: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1b4874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b4878: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b487c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b487cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4880: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b4880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b4884: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B4884u;
    {
        const bool branch_taken_0x1b4884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4884) {
            ctx->pc = 0x1B4888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4884u;
            // 0x1b4888: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4868;
        }
    }
    ctx->pc = 0x1B488Cu;
    // 0x1b488c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B488Cu;
    {
        const bool branch_taken_0x1b488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B488Cu;
        // 0x1b4890: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b488c) {
            ctx->pc = 0x1B48A4u;
            return;
        }
    }
    ctx->pc = 0x1B4894u;
}
