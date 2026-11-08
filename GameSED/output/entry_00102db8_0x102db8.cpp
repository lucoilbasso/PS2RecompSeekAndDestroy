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

// Function: entry_00102db8
// Address: 0x102db8 - 0x102ddc
void entry_00102db8_0x102db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102db8_0x102db8");
#endif

    ctx->pc = 0x102db8u;

label_102db8:
    // 0x102db8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x102db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x102dbc: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x102dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x102dc0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x102dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x102dc4: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x102dc4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x102dc8: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x102DC8u;
    {
        const bool branch_taken_0x102dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x102DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DC8u;
        // 0x102dcc: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dc8) {
            ctx->pc = 0x102DE8u;
            return;
        }
    }
    ctx->pc = 0x102DD0u;
    // 0x102dd0: 0x0  nop
    ctx->pc = 0x102dd0u;
    // NOP
    // 0x102dd4: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x102DD4u;
    {
        const bool branch_taken_0x102dd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x102dd4) {
            ctx->pc = 0x102DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102DD4u;
            // 0x102dd8: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102db8;
        }
    }
    ctx->pc = 0x102DDCu;
}
