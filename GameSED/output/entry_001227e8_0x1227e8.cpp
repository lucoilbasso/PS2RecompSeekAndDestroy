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

// Function: entry_001227e8
// Address: 0x1227e8 - 0x122808
void entry_001227e8_0x1227e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001227e8_0x1227e8");
#endif

    switch (ctx->pc) {
        case 0x1227f0u: goto label_1227f0;
        case 0x1227f8u: goto label_1227f8;
        case 0x122800u: goto label_122800;
        default: break;
    }

    ctx->pc = 0x1227e8u;

    // 0x1227e8: 0xc047ac8  jal         func_11EB20
    ctx->pc = 0x1227E8u;
    SET_GPR_U32(ctx, 31, 0x1227F0u);
    ctx->pc = 0x1227ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227E8u;
    // 0x1227ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB20u, 0x1227E8u, 0x1227F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227F0u;
label_1227f0:
    // 0x1227f0: 0xc047a6a  jal         func_11E9A8
    ctx->pc = 0x1227F0u;
    SET_GPR_U32(ctx, 31, 0x1227F8u);
    ctx->pc = 0x1227F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227F0u;
    // 0x1227f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9A8u, 0x1227F0u, 0x1227F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227F8u;
label_1227f8:
    // 0x1227f8: 0xc0486f8  jal         func_121BE0
    ctx->pc = 0x1227F8u;
    SET_GPR_U32(ctx, 31, 0x122800u);
    ctx->pc = 0x1227FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227F8u;
    // 0x1227fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121BE0u, 0x1227F8u, 0x122800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122800u;
label_122800:
    // 0x122800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122800u;
    {
        const bool branch_taken_0x122800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122800u;
        // 0x122804: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122800) {
            ctx->pc = 0x12280Cu;
            return;
        }
    }
    ctx->pc = 0x122808u;
}
