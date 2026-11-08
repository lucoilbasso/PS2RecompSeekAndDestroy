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

// Function: __tf5WcRsc
// Address: 0x1dc370 - 0x1dc3bc
void ps2___tf5WcRsc_0x1dc370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf5WcRsc_0x1dc370");
#endif

    switch (ctx->pc) {
        case 0x1dc394u: goto label_1dc394;
        case 0x1dc3a8u: goto label_1dc3a8;
        default: break;
    }

    ctx->pc = 0x1dc370u;

    // 0x1dc370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc374: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dc374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dc378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc37c: 0x245014b0  addiu       $s0, $v0, 0x14B0
    ctx->pc = 0x1dc37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x1dc380: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc380u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4114B0u));
    // 0x1dc384: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC384u;
    {
        const bool branch_taken_0x1dc384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC384u;
        // 0x1dc388: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc384) {
            ctx->pc = 0x1DC3A8u;
            goto label_1dc3a8;
        }
    }
    ctx->pc = 0x1DC38Cu;
    // 0x1dc38c: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1DC38Cu;
    SET_GPR_U32(ctx, 31, 0x1DC394u);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1DC38Cu, 0x1DC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC394u;
label_1dc394:
    // 0x1dc394: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1dc394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1dc398: 0x24a5d570  addiu       $a1, $a1, -0x2A90
    ctx->pc = 0x1dc398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956400));
    // 0x1dc39c: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1dc39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1dc3a0: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DC3A0u;
    SET_GPR_U32(ctx, 31, 0x1DC3A8u);
    ctx->pc = 0x1DC3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3A0u;
    // 0x1dc3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DC3A0u, 0x1DC3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3A8u;
label_1dc3a8:
    // 0x1dc3a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc3b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3B4u;
        // 0x1dc3b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC3BCu;
}
