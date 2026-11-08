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

// Function: entry_00102708
// Address: 0x102708 - 0x10272c
void entry_00102708_0x102708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102708_0x102708");
#endif

    ctx->pc = 0x102708u;

label_102708:
    // 0x102708: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x102708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x10270c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x10270cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x102710: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x102710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x102714: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x102714u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x102718: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x102718u;
    {
        const bool branch_taken_0x102718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x10271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102718u;
        // 0x10271c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102718) {
            ctx->pc = 0x102738u;
            return;
        }
    }
    ctx->pc = 0x102720u;
    // 0x102720: 0x0  nop
    ctx->pc = 0x102720u;
    // NOP
    // 0x102724: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x102724u;
    {
        const bool branch_taken_0x102724 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x102724) {
            ctx->pc = 0x102728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102724u;
            // 0x102728: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102708;
        }
    }
    ctx->pc = 0x10272Cu;
}
