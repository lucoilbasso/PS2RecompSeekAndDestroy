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

// Function: BUtilityMoveDVAngle__FP9DVAngle32T0if
// Address: 0x19f108 - 0x19f16c
void BUtilityMoveDVAngle__FP9DVAngle32T0if_0x19f108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMoveDVAngle__FP9DVAngle32T0if_0x19f108");
#endif

    switch (ctx->pc) {
        case 0x19f134u: goto label_19f134;
        default: break;
    }

    ctx->pc = 0x19f108u;

    // 0x19f108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f10c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19f10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19f110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f114: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19f114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19f118: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x19f118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f11c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x19f11cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f120: 0x70431048  psubw       $v0, $v0, $v1
    ctx->pc = 0x19f120u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x19f124: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x19f124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x19f128: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19f128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f12c: 0xc067774  jal         func_19DDD0
    ctx->pc = 0x19F12Cu;
    SET_GPR_U32(ctx, 31, 0x19F134u);
    ctx->pc = 0x19F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F12Cu;
    // 0x19f130: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDD0u, 0x19F12Cu, 0x19F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F134u;
label_19f134:
    // 0x19f134: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x19f134u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f138: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x19f138u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f13c: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x19f13cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x19f140: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x19f140u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x19f144: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f148: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19f14c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x19f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f150: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19f150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19f154: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19f154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f158: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19f158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x19f15c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19f15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f160: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19f160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f164: 0x3e00008  jr          $ra
    ctx->pc = 0x19F164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F164u;
        // 0x19f168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F16Cu;
}
