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

// Function: entry_0016a150
// Address: 0x16a150 - 0x16a174
void entry_0016a150_0x16a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a150_0x16a150");
#endif

    ctx->pc = 0x16a150u;

label_16a150:
    // 0x16a150: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x16a150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x16a154: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x16a154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x16a158: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16a158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x16a15c: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x16a15cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x16a160: 0x106a0005  beq         $v1, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A160u;
    {
        const bool branch_taken_0x16a160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x16A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A160u;
        // 0x16a164: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a160) {
            ctx->pc = 0x16A178u;
            return;
        }
    }
    ctx->pc = 0x16A168u;
    // 0x16a168: 0x0  nop
    ctx->pc = 0x16a168u;
    // NOP
    // 0x16a16c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16A16Cu;
    {
        const bool branch_taken_0x16a16c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a16c) {
            ctx->pc = 0x16A170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A16Cu;
            // 0x16a170: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a150;
        }
    }
    ctx->pc = 0x16A174u;
}
