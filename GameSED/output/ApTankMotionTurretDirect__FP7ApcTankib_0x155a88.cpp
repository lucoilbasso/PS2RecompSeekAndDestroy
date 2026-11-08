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

// Function: ApTankMotionTurretDirect__FP7ApcTankib
// Address: 0x155a88 - 0x155b1c
void ApTankMotionTurretDirect__FP7ApcTankib_0x155a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankMotionTurretDirect__FP7ApcTankib_0x155a88");
#endif

    switch (ctx->pc) {
        case 0x155aacu: goto label_155aac;
        default: break;
    }

    ctx->pc = 0x155a88u;

    // 0x155a88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155a8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x155a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x155a90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x155a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155a98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x155a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155aa0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x155aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x155aa4: 0xc066800  jal         func_19A000
    ctx->pc = 0x155AA4u;
    SET_GPR_U32(ctx, 31, 0x155AACu);
    ctx->pc = 0x155AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155AA4u;
    // 0x155aa8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x155AA4u, 0x155AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155AACu;
label_155aac:
    // 0x155aac: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x155aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x155ab0: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x155ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x155ab4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155ab8: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x155ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x155abc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x155abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155ac0: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x155ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x155ac4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x155ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x155ac8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155acc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x155accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x155ad0: 0x3c05fff7  lui         $a1, 0xFFF7
    ctx->pc = 0x155ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65527 << 16));
    // 0x155ad4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x155ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155ad8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x155ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x155adc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x155adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x155ae0: 0xae5007f0  sw          $s0, 0x7F0($s2)
    ctx->pc = 0x155ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2032), GPR_U32(ctx, 16));
    // 0x155ae4: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x155ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x155ae8: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x155ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x155aec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x155AECu;
    {
        const bool branch_taken_0x155aec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x155AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AECu;
        // 0x155af0: 0xae430184  sw          $v1, 0x184($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155aec) {
            ctx->pc = 0x155B00u;
            goto label_155b00;
        }
    }
    ctx->pc = 0x155AF4u;
    // 0x155af4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x155AF4u;
    {
        const bool branch_taken_0x155af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AF4u;
        // 0x155af8: 0xae420184  sw          $v0, 0x184($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155af4) {
            ctx->pc = 0x155B04u;
            goto label_155b04;
        }
    }
    ctx->pc = 0x155AFCu;
    // 0x155afc: 0x0  nop
    ctx->pc = 0x155afcu;
    // NOP
label_155b00:
    // 0x155b00: 0xae440184  sw          $a0, 0x184($s2)
    ctx->pc = 0x155b00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 4));
label_155b04:
    // 0x155b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155b08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155b0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155b10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x155b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155b14: 0x3e00008  jr          $ra
    ctx->pc = 0x155B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B14u;
        // 0x155b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155B1Cu;
}
