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

// Function: entry_0012d3d8
// Address: 0x12d3d8 - 0x12d3f8
void entry_0012d3d8_0x12d3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d3d8_0x12d3d8");
#endif

    switch (ctx->pc) {
        case 0x12d3e0u: goto label_12d3e0;
        case 0x12d3e8u: goto label_12d3e8;
        case 0x12d3f0u: goto label_12d3f0;
        default: break;
    }

    ctx->pc = 0x12d3d8u;

    // 0x12d3d8: 0xc047ac8  jal         func_11EB20
    ctx->pc = 0x12D3D8u;
    SET_GPR_U32(ctx, 31, 0x12D3E0u);
    ctx->pc = 0x12D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3D8u;
    // 0x12d3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB20u, 0x12D3D8u, 0x12D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3E0u;
label_12d3e0:
    // 0x12d3e0: 0xc047a6a  jal         func_11E9A8
    ctx->pc = 0x12D3E0u;
    SET_GPR_U32(ctx, 31, 0x12D3E8u);
    ctx->pc = 0x12D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3E0u;
    // 0x12d3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9A8u, 0x12D3E0u, 0x12D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3E8u;
label_12d3e8:
    // 0x12d3e8: 0xc04b2d0  jal         func_12CB40
    ctx->pc = 0x12D3E8u;
    SET_GPR_U32(ctx, 31, 0x12D3F0u);
    ctx->pc = 0x12D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3E8u;
    // 0x12d3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB40u, 0x12D3E8u, 0x12D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3F0u;
label_12d3f0:
    // 0x12d3f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12D3F0u;
    {
        const bool branch_taken_0x12d3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3F0u;
        // 0x12d3f4: 0x8e1000c4  lw          $s0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3f0) {
            ctx->pc = 0x12D3FCu;
            return;
        }
    }
    ctx->pc = 0x12D3F8u;
}
