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

// Function: ApTankMotionResetTargetAiming__FP7ApcTank
// Address: 0x155a00 - 0x155a50
void ApTankMotionResetTargetAiming__FP7ApcTank_0x155a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankMotionResetTargetAiming__FP7ApcTank_0x155a00");
#endif

    switch (ctx->pc) {
        case 0x155a14u: goto label_155a14;
        default: break;
    }

    ctx->pc = 0x155a00u;

    // 0x155a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155a08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x155a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x155a0c: 0xc066800  jal         func_19A000
    ctx->pc = 0x155A0Cu;
    SET_GPR_U32(ctx, 31, 0x155A14u);
    ctx->pc = 0x155A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A0Cu;
    // 0x155a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x155A0Cu, 0x155A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155A14u;
label_155a14:
    // 0x155a14: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x155a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x155a18: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x155a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x155a1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155a20: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x155a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x155a24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x155a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155a28: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x155a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x155a2c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x155a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x155a30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155a34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x155a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x155a38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x155a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155a3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x155a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155a40: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x155a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
    // 0x155a44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155a48: 0x3e00008  jr          $ra
    ctx->pc = 0x155A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A48u;
        // 0x155a4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155A50u;
}
