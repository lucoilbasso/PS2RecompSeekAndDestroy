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

// Function: SRemoteCameraChangePosMode__Fv
// Address: 0x1108b8 - 0x11091c
void SRemoteCameraChangePosMode__Fv_0x1108b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SRemoteCameraChangePosMode__Fv_0x1108b8");
#endif

    switch (ctx->pc) {
        case 0x1108d8u: goto label_1108d8;
        case 0x1108e0u: goto label_1108e0;
        case 0x1108e8u: goto label_1108e8;
        case 0x1108f0u: goto label_1108f0;
        case 0x1108f8u: goto label_1108f8;
        default: break;
    }

    ctx->pc = 0x1108b8u;

    // 0x1108b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1108b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1108bc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1108bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1108c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1108c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1108c4: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1108c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1108c8: 0x26103dd8  addiu       $s0, $s0, 0x3DD8
    ctx->pc = 0x1108c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15832));
    // 0x1108cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1108ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1108d0: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x1108D0u;
    SET_GPR_U32(ctx, 31, 0x1108D8u);
    ctx->pc = 0x1108D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108D0u;
    // 0x1108d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x1108D0u, 0x1108D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108D8u;
label_1108d8:
    // 0x1108d8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1108D8u;
    SET_GPR_U32(ctx, 31, 0x1108E0u);
    ctx->pc = 0x1108DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108D8u;
    // 0x1108dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1108D8u, 0x1108E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108E0u;
label_1108e0:
    // 0x1108e0: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1108E0u;
    SET_GPR_U32(ctx, 31, 0x1108E8u);
    ctx->pc = 0x1108E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108E0u;
    // 0x1108e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1108E0u, 0x1108E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108E8u;
label_1108e8:
    // 0x1108e8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1108E8u;
    SET_GPR_U32(ctx, 31, 0x1108F0u);
    ctx->pc = 0x1108ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108E8u;
    // 0x1108ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1108E8u, 0x1108F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108F0u;
label_1108f0:
    // 0x1108f0: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1108F0u;
    SET_GPR_U32(ctx, 31, 0x1108F8u);
    ctx->pc = 0x1108F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108F0u;
    // 0x1108f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1108F0u, 0x1108F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108F8u;
label_1108f8:
    // 0x1108f8: 0x8f829118  lw          $v0, -0x6EE8($gp)
    ctx->pc = 0x1108f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x1108fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1108fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110900: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110904: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x110904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110908: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x110908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x11090c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x11090cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x110910: 0xaf829118  sw          $v0, -0x6EE8($gp)
    ctx->pc = 0x110910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 2));
    // 0x110914: 0x3e00008  jr          $ra
    ctx->pc = 0x110914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110914u;
        // 0x110918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11091Cu;
}
