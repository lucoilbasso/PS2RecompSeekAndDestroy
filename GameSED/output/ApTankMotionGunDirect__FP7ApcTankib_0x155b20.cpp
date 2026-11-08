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

// Function: ApTankMotionGunDirect__FP7ApcTankib
// Address: 0x155b20 - 0x155bb4
void ApTankMotionGunDirect__FP7ApcTankib_0x155b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankMotionGunDirect__FP7ApcTankib_0x155b20");
#endif

    switch (ctx->pc) {
        case 0x155b44u: goto label_155b44;
        default: break;
    }

    ctx->pc = 0x155b20u;

    // 0x155b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155b24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x155b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x155b28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x155b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155b30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x155b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155b38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x155b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x155b3c: 0xc066800  jal         func_19A000
    ctx->pc = 0x155B3Cu;
    SET_GPR_U32(ctx, 31, 0x155B44u);
    ctx->pc = 0x155B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B3Cu;
    // 0x155b40: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x155B3Cu, 0x155B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B44u;
label_155b44:
    // 0x155b44: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x155b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x155b48: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x155b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x155b4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155b50: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x155b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x155b54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x155b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155b58: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x155b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x155b5c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x155b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x155b60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155b64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x155b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x155b68: 0x3c05ffef  lui         $a1, 0xFFEF
    ctx->pc = 0x155b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65519 << 16));
    // 0x155b6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x155b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155b70: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x155b70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x155b74: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x155b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x155b78: 0xae500810  sw          $s0, 0x810($s2)
    ctx->pc = 0x155b78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 16));
    // 0x155b7c: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x155b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x155b80: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x155b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x155b84: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x155B84u;
    {
        const bool branch_taken_0x155b84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B84u;
        // 0x155b88: 0xae430184  sw          $v1, 0x184($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b84) {
            ctx->pc = 0x155B98u;
            goto label_155b98;
        }
    }
    ctx->pc = 0x155B8Cu;
    // 0x155b8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x155B8Cu;
    {
        const bool branch_taken_0x155b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B8Cu;
        // 0x155b90: 0xae420184  sw          $v0, 0x184($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b8c) {
            ctx->pc = 0x155B9Cu;
            goto label_155b9c;
        }
    }
    ctx->pc = 0x155B94u;
    // 0x155b94: 0x0  nop
    ctx->pc = 0x155b94u;
    // NOP
label_155b98:
    // 0x155b98: 0xae440184  sw          $a0, 0x184($s2)
    ctx->pc = 0x155b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 4));
label_155b9c:
    // 0x155b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155ba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155ba4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155ba8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x155ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155bac: 0x3e00008  jr          $ra
    ctx->pc = 0x155BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BACu;
        // 0x155bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155BB4u;
}
