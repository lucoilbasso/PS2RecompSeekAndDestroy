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

// Function: ApItemCamouflageCheck__Fi
// Address: 0x11a668 - 0x11a6ac
void ApItemCamouflageCheck__Fi_0x11a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemCamouflageCheck__Fi_0x11a668");
#endif

    switch (ctx->pc) {
        case 0x11a688u: goto label_11a688;
        case 0x11a6a0u: goto label_11a6a0;
        default: break;
    }

    ctx->pc = 0x11a668u;

    // 0x11a668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a66c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11a66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a670: 0x2c840008  sltiu       $a0, $a0, 0x8
    ctx->pc = 0x11a670u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11a674: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11A674u;
    {
        const bool branch_taken_0x11a674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A674u;
        // 0x11a678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a674) {
            ctx->pc = 0x11A6A0u;
            goto label_11a6a0;
        }
    }
    ctx->pc = 0x11A67Cu;
    // 0x11a67c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x11a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11a680: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11A680u;
    SET_GPR_U32(ctx, 31, 0x11A688u);
    ctx->pc = 0x11A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A680u;
    // 0x11a684: 0x24844328  addiu       $a0, $a0, 0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11A680u, 0x11A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A688u;
label_11a688:
    // 0x11a688: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11a688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11a68c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11a690: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x11a690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x11a694: 0x24a54338  addiu       $a1, $a1, 0x4338
    ctx->pc = 0x11a694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17208));
    // 0x11a698: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11A698u;
    SET_GPR_U32(ctx, 31, 0x11A6A0u);
    ctx->pc = 0x11A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A698u;
    // 0x11a69c: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11A698u, 0x11A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6A0u;
label_11a6a0:
    // 0x11a6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11A6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6A4u;
        // 0x11a6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A6ACu;
}
