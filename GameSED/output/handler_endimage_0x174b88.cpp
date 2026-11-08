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

// Function: handler_endimage
// Address: 0x174b88 - 0x174bcc
void handler_endimage_0x174b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("handler_endimage_0x174b88");
#endif

    switch (ctx->pc) {
        case 0x174b98u: goto label_174b98;
        case 0x174bb0u: goto label_174bb0;
        default: break;
    }

    ctx->pc = 0x174b88u;

    // 0x174b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174b90: 0xc05d278  jal         func_1749E0
    ctx->pc = 0x174B90u;
    SET_GPR_U32(ctx, 31, 0x174B98u);
    ctx->pc = 0x1749E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1749E0u, 0x174B90u, 0x174B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B98u;
label_174b98:
    // 0x174b98: 0x8f828c0c  lw          $v0, -0x73F4($gp)
    ctx->pc = 0x174b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937612)));
    // 0x174b9c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x174b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x174ba0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174BA0u;
    {
        const bool branch_taken_0x174ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BA0u;
        // 0x174ba4: 0x248412a8  addiu       $a0, $a0, 0x12A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ba0) {
            ctx->pc = 0x174BB4u;
            goto label_174bb4;
        }
    }
    ctx->pc = 0x174BA8u;
    // 0x174ba8: 0xc05cfae  jal         func_173EB8
    ctx->pc = 0x174BA8u;
    SET_GPR_U32(ctx, 31, 0x174BB0u);
    ctx->pc = 0x173EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173EB8u, 0x174BA8u, 0x174BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BB0u;
label_174bb0:
    // 0x174bb0: 0xaf808c0c  sw          $zero, -0x73F4($gp)
    ctx->pc = 0x174bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937612), GPR_U32(ctx, 0));
label_174bb4:
    // 0x174bb4: 0xf  sync
    ctx->pc = 0x174bb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x174bb8: 0x42000038  ei
    ctx->pc = 0x174bb8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x174bbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x174BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BC4u;
        // 0x174bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174BCCu;
}
