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

// Function: StdCommandEffectVolume__8WcSndStdi
// Address: 0x17ab00 - 0x17abb0
void StdCommandEffectVolume__8WcSndStdi_0x17ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StdCommandEffectVolume__8WcSndStdi_0x17ab00");
#endif

    switch (ctx->pc) {
        case 0x17ab38u: goto label_17ab38;
        case 0x17ab50u: goto label_17ab50;
        case 0x17ab98u: goto label_17ab98;
        default: break;
    }

    ctx->pc = 0x17ab00u;

    // 0x17ab00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ab04: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17ab08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ab0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ab0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ab14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ab14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ab1c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x17ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17ab20: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17ab20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17ab24: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17ab28: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x17ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17ab2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17ab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17ab30: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x17ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x17ab34: 0xac31c04c  sw          $s1, -0x3FB4($at)
    ctx->pc = 0x17ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950988), GPR_U32(ctx, 17));
label_17ab38:
    // 0x17ab38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ab3c: 0x14470006  bne         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AB3Cu;
    {
        const bool branch_taken_0x17ab3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x17AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB3Cu;
        // 0x17ab40: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab3c) {
            ctx->pc = 0x17AB58u;
            goto label_17ab58;
        }
    }
    ctx->pc = 0x17AB44u;
    // 0x17ab44: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x17ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x17ab48: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17AB48u;
    SET_GPR_U32(ctx, 31, 0x17AB50u);
    ctx->pc = 0x17AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB48u;
    // 0x17ab4c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17AB48u, 0x17AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB50u;
label_17ab50:
    // 0x17ab50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17AB50u;
    {
        const bool branch_taken_0x17ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB50u;
        // 0x17ab54: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab50) {
            ctx->pc = 0x17AB70u;
            goto label_17ab70;
        }
    }
    ctx->pc = 0x17AB58u;
label_17ab58:
    // 0x17ab58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17ab5c: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x17ab5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17ab60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AB60u;
    {
        const bool branch_taken_0x17ab60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB60u;
        // 0x17ab64: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab60) {
            ctx->pc = 0x17AB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ab38;
        }
    }
    ctx->pc = 0x17AB68u;
    // 0x17ab68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17ab68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab6c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_17ab70:
    // 0x17ab70: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x17ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17ab74: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x17ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17ab78: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x17ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x17ab7c: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x17ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x17ab80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ab80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab84: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17ab88: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x17ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x17ab8c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17ab90: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x17AB90u;
    SET_GPR_U32(ctx, 31, 0x17AB98u);
    ctx->pc = 0x17AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB90u;
    // 0x17ab94: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x17AB90u, 0x17AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB98u;
label_17ab98:
    // 0x17ab98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17ab9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ab9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17aba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17aba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17aba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x17ABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABA8u;
        // 0x17abac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ABA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ABB0u;
}
