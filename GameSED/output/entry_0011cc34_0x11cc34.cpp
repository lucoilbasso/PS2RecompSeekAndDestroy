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

// Function: entry_0011cc34
// Address: 0x11cc34 - 0x11cc68
void entry_0011cc34_0x11cc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc34_0x11cc34");
#endif

    switch (ctx->pc) {
        case 0x11cc44u: goto label_11cc44;
        case 0x11cc50u: goto label_11cc50;
        default: break;
    }

    ctx->pc = 0x11cc34u;

    // 0x11cc34: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x11cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11cc38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11cc3c: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x11CC3Cu;
    SET_GPR_U32(ctx, 31, 0x11CC44u);
    ctx->pc = 0x11CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC3Cu;
    // 0x11cc40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x11CC3Cu, 0x11CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC44u;
label_11cc44:
    // 0x11cc44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc48: 0xc06ca22  jal         func_1B2888
    ctx->pc = 0x11CC48u;
    SET_GPR_U32(ctx, 31, 0x11CC50u);
    ctx->pc = 0x11CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC48u;
    // 0x11cc4c: 0x24050602  addiu       $a1, $zero, 0x602 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2888u, 0x11CC48u, 0x11CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC50u;
label_11cc50:
    // 0x11cc50: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x11cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11cc54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11cc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc58: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CC58u;
    {
        const bool branch_taken_0x11cc58 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC58u;
        // 0x11cc5c: 0x24844808  addiu       $a0, $a0, 0x4808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc58) {
            ctx->pc = 0x11CC68u;
            return;
        }
    }
    ctx->pc = 0x11CC60u;
    // 0x11cc60: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11CC60u;
    SET_GPR_U32(ctx, 31, 0x11CC68u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11CC60u, 0x11CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC68u;
}
