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

// Function: entry_0013c8e0
// Address: 0x13c8e0 - 0x13c90c
void entry_0013c8e0_0x13c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c8e0_0x13c8e0");
#endif

    switch (ctx->pc) {
        case 0x13c8e8u: goto label_13c8e8;
        case 0x13c8f0u: goto label_13c8f0;
        case 0x13c900u: goto label_13c900;
        case 0x13c908u: goto label_13c908;
        default: break;
    }

    ctx->pc = 0x13c8e0u;

    // 0x13c8e0: 0xc04f56e  jal         func_13D5B8
    ctx->pc = 0x13C8E0u;
    SET_GPR_U32(ctx, 31, 0x13C8E8u);
    ctx->pc = 0x13C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8E0u;
    // 0x13c8e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D5B8u, 0x13C8E0u, 0x13C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8E8u;
label_13c8e8:
    // 0x13c8e8: 0xc04f41e  jal         func_13D078
    ctx->pc = 0x13C8E8u;
    SET_GPR_U32(ctx, 31, 0x13C8F0u);
    ctx->pc = 0x13D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D078u, 0x13C8E8u, 0x13C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8F0u;
label_13c8f0:
    // 0x13c8f0: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C8F0u;
    {
        const bool branch_taken_0x13c8f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c8f0) {
            ctx->pc = 0x13C8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C8F0u;
            // 0x13c8f4: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C90Cu;
            return;
        }
    }
    ctx->pc = 0x13C8F8u;
    // 0x13c8f8: 0xc0521cc  jal         func_148730
    ctx->pc = 0x13C8F8u;
    SET_GPR_U32(ctx, 31, 0x13C900u);
    ctx->pc = 0x13C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8F8u;
    // 0x13c8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148730u, 0x13C8F8u, 0x13C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C900u;
label_13c900:
    // 0x13c900: 0xc05203e  jal         func_1480F8
    ctx->pc = 0x13C900u;
    SET_GPR_U32(ctx, 31, 0x13C908u);
    ctx->pc = 0x13C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C900u;
    // 0x13c904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1480F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1480F8u, 0x13C900u, 0x13C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C908u;
label_13c908:
    // 0x13c908: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x13c908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    ctx->pc = 0x13c90cu;
}
