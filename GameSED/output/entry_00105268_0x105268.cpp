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

// Function: entry_00105268
// Address: 0x105268 - 0x1052a0
void entry_00105268_0x105268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105268_0x105268");
#endif

    switch (ctx->pc) {
        case 0x10527cu: goto label_10527c;
        case 0x10528cu: goto label_10528c;
        case 0x10529cu: goto label_10529c;
        default: break;
    }

    ctx->pc = 0x105268u;

label_105268:
    // 0x105268: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x105268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x10526c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x10526cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x105270: 0x2631f800  addiu       $s1, $s1, -0x800
    ctx->pc = 0x105270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965248));
    // 0x105274: 0xc041b1c  jal         func_106C70
    ctx->pc = 0x105274u;
    SET_GPR_U32(ctx, 31, 0x10527Cu);
    ctx->pc = 0x105278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105274u;
    // 0x105278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C70u, 0x105274u, 0x10527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10527Cu;
label_10527c:
    // 0x10527c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105284: 0xc06cc4a  jal         func_1B3128
    ctx->pc = 0x105284u;
    SET_GPR_U32(ctx, 31, 0x10528Cu);
    ctx->pc = 0x105288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105284u;
    // 0x105288: 0x24060600  addiu       $a2, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3128u, 0x105284u, 0x10528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10528Cu;
label_10528c:
    // 0x10528c: 0x663fff6  bgezl       $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x10528Cu;
    {
        const bool branch_taken_0x10528c = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x10528c) {
            ctx->pc = 0x105290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10528Cu;
            // 0x105290: 0x8f9088a8  lw          $s0, -0x7758($gp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105268;
        }
    }
    ctx->pc = 0x105294u;
    // 0x105294: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x105294u;
    SET_GPR_U32(ctx, 31, 0x10529Cu);
    ctx->pc = 0x105298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105294u;
    // 0x105298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x105294u, 0x10529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10529Cu;
label_10529c:
    // 0x10529c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10529cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x1052a0u;
}
