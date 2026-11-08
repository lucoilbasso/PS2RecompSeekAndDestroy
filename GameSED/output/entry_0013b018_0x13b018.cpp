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

// Function: entry_0013b018
// Address: 0x13b018 - 0x13b030
void entry_0013b018_0x13b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b018_0x13b018");
#endif

    switch (ctx->pc) {
        case 0x13b024u: goto label_13b024;
        default: break;
    }

    ctx->pc = 0x13b018u;

label_13b018:
    // 0x13b018: 0x262401fc  addiu       $a0, $s1, 0x1FC
    ctx->pc = 0x13b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 508));
    // 0x13b01c: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x13B01Cu;
    SET_GPR_U32(ctx, 31, 0x13B024u);
    ctx->pc = 0x13B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B01Cu;
    // 0x13b020: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13B01Cu, 0x13B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B024u;
label_13b024:
    // 0x13b024: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13B024u;
    {
        const bool branch_taken_0x13b024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b024) {
            ctx->pc = 0x13B028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B024u;
            // 0x13b028: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b018;
        }
    }
    ctx->pc = 0x13B02Cu;
    // 0x13b02c: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x13b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    ctx->pc = 0x13b030u;
}
