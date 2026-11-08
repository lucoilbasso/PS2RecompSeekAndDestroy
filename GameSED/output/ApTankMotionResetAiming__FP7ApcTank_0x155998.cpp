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

// Function: ApTankMotionResetAiming__FP7ApcTank
// Address: 0x155998 - 0x155a00
void ApTankMotionResetAiming__FP7ApcTank_0x155998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankMotionResetAiming__FP7ApcTank_0x155998");
#endif

    switch (ctx->pc) {
        case 0x1559acu: goto label_1559ac;
        default: break;
    }

    ctx->pc = 0x155998u;

    // 0x155998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15599c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1559a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1559a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1559a4: 0xc066800  jal         func_19A000
    ctx->pc = 0x1559A4u;
    SET_GPR_U32(ctx, 31, 0x1559ACu);
    ctx->pc = 0x1559A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1559A4u;
    // 0x1559a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x1559A4u, 0x1559ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559ACu;
label_1559ac:
    // 0x1559ac: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x1559acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1559b0: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x1559b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x1559b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1559b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1559b8: 0x3c04fff7  lui         $a0, 0xFFF7
    ctx->pc = 0x1559b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65527 << 16));
    // 0x1559bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1559bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1559c0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1559c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1559c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1559c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1559c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1559c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1559cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1559ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1559d0: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x1559d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
    // 0x1559d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1559d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1559d8: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x1559d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x1559dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1559dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1559e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1559e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1559e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1559e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1559e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1559e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1559ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1559ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1559f0: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x1559f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
    // 0x1559f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1559f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1559f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1559F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1559FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559F8u;
        // 0x1559fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1559F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155A00u;
}
