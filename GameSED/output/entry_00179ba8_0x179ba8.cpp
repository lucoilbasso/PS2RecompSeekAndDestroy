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

// Function: entry_00179ba8
// Address: 0x179ba8 - 0x179bdc
void entry_00179ba8_0x179ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ba8_0x179ba8");
#endif

    switch (ctx->pc) {
        case 0x179bb0u: goto label_179bb0;
        case 0x179bc8u: goto label_179bc8;
        default: break;
    }

    ctx->pc = 0x179ba8u;

label_179ba8:
    // 0x179ba8: 0xc0714be  jal         func_1C52F8
    ctx->pc = 0x179BA8u;
    SET_GPR_U32(ctx, 31, 0x179BB0u);
    ctx->pc = 0x179BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BA8u;
    // 0x179bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C52F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C52F8u, 0x179BA8u, 0x179BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179BB0u;
label_179bb0:
    // 0x179bb0: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x179BB0u;
    {
        const bool branch_taken_0x179bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BB0u;
        // 0x179bb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bb0) {
            ctx->pc = 0x179BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179ba8;
        }
    }
    ctx->pc = 0x179BB8u;
    // 0x179bb8: 0x26304030  addiu       $s0, $s1, 0x4030
    ctx->pc = 0x179bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16432));
    // 0x179bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bc0: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179BC0u;
    SET_GPR_U32(ctx, 31, 0x179BC8u);
    ctx->pc = 0x179BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BC0u;
    // 0x179bc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179BC0u, 0x179BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179BC8u;
label_179bc8:
    // 0x179bc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x179bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179bcc: 0x4630006  bgezl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x179BCCu;
    {
        const bool branch_taken_0x179bcc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x179bcc) {
            ctx->pc = 0x179BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179BCCu;
            // 0x179bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179BE8u;
            return;
        }
    }
    ctx->pc = 0x179BD4u;
    // 0x179bd4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179bdcu;
}
