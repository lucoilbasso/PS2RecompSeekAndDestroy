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

// Function: entry_001b4c20
// Address: 0x1b4c20 - 0x1b4c4c
void entry_001b4c20_0x1b4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4c20_0x1b4c20");
#endif

    ctx->pc = 0x1b4c20u;

label_1b4c20:
    // 0x1b4c20: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b4c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b4c24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4C24u;
    {
        const bool branch_taken_0x1b4c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C24u;
        // 0x1b4c28: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c24) {
            ctx->pc = 0x1B4C50u;
            return;
        }
    }
    ctx->pc = 0x1B4C2Cu;
    // 0x1b4c2c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1b4c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b4c30: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4c34: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b4c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4c38: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b4c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b4c3c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B4C3Cu;
    {
        const bool branch_taken_0x1b4c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4c3c) {
            ctx->pc = 0x1B4C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4C3Cu;
            // 0x1b4c40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4c20;
        }
    }
    ctx->pc = 0x1B4C44u;
    // 0x1b4c44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4C44u;
    {
        const bool branch_taken_0x1b4c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C44u;
        // 0x1b4c48: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c44) {
            ctx->pc = 0x1B4C54u;
            return;
        }
    }
    ctx->pc = 0x1B4C4Cu;
}
