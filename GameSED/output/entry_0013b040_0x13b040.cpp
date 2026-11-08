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

// Function: entry_0013b040
// Address: 0x13b040 - 0x13b058
void entry_0013b040_0x13b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b040_0x13b040");
#endif

    switch (ctx->pc) {
        case 0x13b04cu: goto label_13b04c;
        default: break;
    }

    ctx->pc = 0x13b040u;

label_13b040:
    // 0x13b040: 0x26240200  addiu       $a0, $s1, 0x200
    ctx->pc = 0x13b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x13b044: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x13B044u;
    SET_GPR_U32(ctx, 31, 0x13B04Cu);
    ctx->pc = 0x13B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B044u;
    // 0x13b048: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13B044u, 0x13B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B04Cu;
label_13b04c:
    // 0x13b04c: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13B04Cu;
    {
        const bool branch_taken_0x13b04c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b04c) {
            ctx->pc = 0x13B050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B04Cu;
            // 0x13b050: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b040;
        }
    }
    ctx->pc = 0x13B054u;
    // 0x13b054: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x13b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    ctx->pc = 0x13b058u;
}
