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

// Function: ApTankMotionPositionAiming__FP7ApcTankP9FVector32
// Address: 0x14fe00 - 0x14fe90
void ApTankMotionPositionAiming__FP7ApcTankP9FVector32_0x14fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankMotionPositionAiming__FP7ApcTankP9FVector32_0x14fe00");
#endif

    switch (ctx->pc) {
        case 0x14fe1cu: goto label_14fe1c;
        default: break;
    }

    ctx->pc = 0x14fe00u;

    // 0x14fe00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14fe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14fe04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14fe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14fe08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14fe08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14fe10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14fe14: 0xc066800  jal         func_19A000
    ctx->pc = 0x14FE14u;
    SET_GPR_U32(ctx, 31, 0x14FE1Cu);
    ctx->pc = 0x14FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE14u;
    // 0x14fe18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x14FE14u, 0x14FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE1Cu;
label_14fe1c:
    // 0x14fe1c: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x14fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14fe20: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x14fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
    // 0x14fe24: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x14fe24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x14fe28: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x14fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x14fe2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x14fe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14fe30: 0x3c04fff7  lui         $a0, 0xFFF7
    ctx->pc = 0x14fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65527 << 16));
    // 0x14fe34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14fe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14fe38: 0x3c05ffbf  lui         $a1, 0xFFBF
    ctx->pc = 0x14fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65471 << 16));
    // 0x14fe3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14fe3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14fe40: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x14fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x14fe44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x14fe44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x14fe48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x14fe48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x14fe4c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x14fe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14fe50: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x14fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x14fe54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x14fe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14fe58: 0x260407e0  addiu       $a0, $s0, 0x7E0
    ctx->pc = 0x14fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
    // 0x14fe5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14fe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14fe60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14fe60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14fe64: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x14fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
    // 0x14fe68: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x14fe68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14fe6c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x14fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x14fe70: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x14fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14fe74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14fe74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14fe78: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14fe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14fe7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14fe7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fe80: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x14fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
    // 0x14fe84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14fe84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fe88: 0x3e00008  jr          $ra
    ctx->pc = 0x14FE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE88u;
        // 0x14fe8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FE90u;
}
