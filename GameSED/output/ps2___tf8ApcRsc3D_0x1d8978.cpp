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

// Function: __tf8ApcRsc3D
// Address: 0x1d8978 - 0x1d89c4
void ps2___tf8ApcRsc3D_0x1d8978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8ApcRsc3D_0x1d8978");
#endif

    switch (ctx->pc) {
        case 0x1d899cu: goto label_1d899c;
        case 0x1d89b0u: goto label_1d89b0;
        default: break;
    }

    ctx->pc = 0x1d8978u;

    // 0x1d8978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d897c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d897cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d8980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8984: 0x24500f90  addiu       $s0, $v0, 0xF90
    ctx->pc = 0x1d8984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1d8988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8988u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410F90u));
    // 0x1d898c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D898Cu;
    {
        const bool branch_taken_0x1d898c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898Cu;
        // 0x1d8990: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d898c) {
            ctx->pc = 0x1D89B0u;
            goto label_1d89b0;
        }
    }
    ctx->pc = 0x1D8994u;
    // 0x1d8994: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1D8994u;
    SET_GPR_U32(ctx, 31, 0x1D899Cu);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1D8994u, 0x1D899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D899Cu;
label_1d899c:
    // 0x1d899c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d899cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d89a0: 0x24a56ad0  addiu       $a1, $a1, 0x6AD0
    ctx->pc = 0x1d89a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27344));
    // 0x1d89a4: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1d89a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1d89a8: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D89A8u;
    SET_GPR_U32(ctx, 31, 0x1D89B0u);
    ctx->pc = 0x1D89ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89A8u;
    // 0x1d89ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D89A8u, 0x1D89B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89B0u;
label_1d89b0:
    // 0x1d89b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d89b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d89b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d89b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d89b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d89bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D89BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89BCu;
        // 0x1d89c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D89BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89C4u;
}
