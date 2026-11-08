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

// Function: entry_001774a8
// Address: 0x1774a8 - 0x1774d8
void entry_001774a8_0x1774a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001774a8_0x1774a8");
#endif

    switch (ctx->pc) {
        case 0x1774b4u: goto label_1774b4;
        case 0x1774c0u: goto label_1774c0;
        default: break;
    }

    ctx->pc = 0x1774a8u;

    // 0x1774a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1774a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1774ac: 0xc06e390  jal         func_1B8E40
    ctx->pc = 0x1774ACu;
    SET_GPR_U32(ctx, 31, 0x1774B4u);
    ctx->pc = 0x1774B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774ACu;
    // 0x1774b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8E40u, 0x1774ACu, 0x1774B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774B4u;
label_1774b4:
    // 0x1774b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1774b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1774b8: 0xc06e390  jal         func_1B8E40
    ctx->pc = 0x1774B8u;
    SET_GPR_U32(ctx, 31, 0x1774C0u);
    ctx->pc = 0x1774BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774B8u;
    // 0x1774bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8E40u, 0x1774B8u, 0x1774C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774C0u;
label_1774c0:
    // 0x1774c0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1774c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1774c4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1774c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1774c8: 0x24630158  addiu       $v1, $v1, 0x158
    ctx->pc = 0x1774c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 344));
    // 0x1774cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1774ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1774d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1774D0u;
    {
        const bool branch_taken_0x1774d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774D0u;
        // 0x1774d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774d0) {
            ctx->pc = 0x177518u;
            return;
        }
    }
    ctx->pc = 0x1774D8u;
}
