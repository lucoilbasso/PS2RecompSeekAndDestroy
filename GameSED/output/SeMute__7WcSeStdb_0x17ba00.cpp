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

// Function: SeMute__7WcSeStdb
// Address: 0x17ba00 - 0x17baa8
void SeMute__7WcSeStdb_0x17ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeMute__7WcSeStdb_0x17ba00");
#endif

    switch (ctx->pc) {
        case 0x17ba40u: goto label_17ba40;
        case 0x17ba54u: goto label_17ba54;
        default: break;
    }

    ctx->pc = 0x17ba00u;

    // 0x17ba00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ba04: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17ba08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ba0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ba10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ba14: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x17ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17ba18: 0x3411c034  ori         $s1, $zero, 0xC034
    ctx->pc = 0x17ba18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17ba1c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x17ba1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17ba20: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x17ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17ba24: 0x1045001b  beq         $v0, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x17BA24u;
    {
        const bool branch_taken_0x17ba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x17BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA24u;
        // 0x17ba28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba24) {
            ctx->pc = 0x17BA94u;
            goto label_17ba94;
        }
    }
    ctx->pc = 0x17BA2Cu;
    // 0x17ba2c: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x17ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
    // 0x17ba30: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17ba30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17ba34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17ba34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba38: 0x24440130  addiu       $a0, $v0, 0x130
    ctx->pc = 0x17ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17ba3c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x17ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_17ba40:
    // 0x17ba40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ba44: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BA44u;
    {
        const bool branch_taken_0x17ba44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA44u;
        // 0x17ba48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba44) {
            ctx->pc = 0x17BA60u;
            goto label_17ba60;
        }
    }
    ctx->pc = 0x17BA4Cu;
    // 0x17ba4c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17BA4Cu;
    SET_GPR_U32(ctx, 31, 0x17BA54u);
    ctx->pc = 0x17BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA4Cu;
    // 0x17ba50: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17BA4Cu, 0x17BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA54u;
label_17ba54:
    // 0x17ba54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BA54u;
    {
        const bool branch_taken_0x17ba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA54u;
        // 0x17ba58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba54) {
            ctx->pc = 0x17BA74u;
            goto label_17ba74;
        }
    }
    ctx->pc = 0x17BA5Cu;
    // 0x17ba5c: 0x0  nop
    ctx->pc = 0x17ba5cu;
    // NOP
label_17ba60:
    // 0x17ba60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17ba64: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x17ba64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17ba68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17BA68u;
    {
        const bool branch_taken_0x17ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA68u;
        // 0x17ba6c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba68) {
            ctx->pc = 0x17BA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ba40;
        }
    }
    ctx->pc = 0x17BA70u;
    // 0x17ba70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ba70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ba74:
    // 0x17ba74: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x17ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17ba78: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x17ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17ba7c: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x17ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x17ba80: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x17ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
    // 0x17ba84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x17ba88: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x17ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
    // 0x17ba8c: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x17ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x17ba90: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x17ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
label_17ba94:
    // 0x17ba94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ba94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ba98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ba98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ba9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ba9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17baa0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAA0u;
        // 0x17baa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BAA8u;
}
