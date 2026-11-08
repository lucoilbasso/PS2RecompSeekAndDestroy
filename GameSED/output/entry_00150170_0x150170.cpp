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

// Function: entry_00150170
// Address: 0x150170 - 0x150180
void entry_00150170_0x150170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150170_0x150170");
#endif

    ctx->pc = 0x150170u;

    // 0x150170: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x150170u;
    {
        const bool branch_taken_0x150170 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x150170) {
            ctx->pc = 0x150174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150170u;
            // 0x150174: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150180u;
            return;
        }
    }
    ctx->pc = 0x150178u;
    // 0x150178: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x150178u;
    {
        const bool branch_taken_0x150178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150178u;
        // 0x15017c: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150178) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x150180u;
}
