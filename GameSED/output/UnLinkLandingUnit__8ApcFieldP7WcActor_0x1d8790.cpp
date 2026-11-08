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

// Function: UnLinkLandingUnit__8ApcFieldP7WcActor
// Address: 0x1d8790 - 0x1d87e0
void UnLinkLandingUnit__8ApcFieldP7WcActor_0x1d8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnLinkLandingUnit__8ApcFieldP7WcActor_0x1d8790");
#endif

    switch (ctx->pc) {
        case 0x1d87bcu: goto label_1d87bc;
        default: break;
    }

    ctx->pc = 0x1d8790u;

    // 0x1d8790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8794: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1d8794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1d8798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d879c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d879cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d87a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d87a4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d87a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d87a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d87ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D87ACu;
    {
        const bool branch_taken_0x1d87ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87ACu;
        // 0x1d87b0: 0x248401fc  addiu       $a0, $a0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 508));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87ac) {
            ctx->pc = 0x1D87D0u;
            goto label_1d87d0;
        }
    }
    ctx->pc = 0x1D87B4u;
    // 0x1d87b4: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x1D87B4u;
    SET_GPR_U32(ctx, 31, 0x1D87BCu);
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1D87B4u, 0x1D87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87BCu;
label_1d87bc:
    // 0x1d87bc: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x1d87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x1d87c0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d87c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d87c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d87c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d87c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d87cc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d87ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1d87d0:
    // 0x1d87d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d87d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d87d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d87d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d87d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D87D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87D8u;
        // 0x1d87dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D87D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D87E0u;
}
