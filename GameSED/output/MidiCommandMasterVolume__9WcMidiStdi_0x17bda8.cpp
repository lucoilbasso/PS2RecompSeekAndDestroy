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

// Function: MidiCommandMasterVolume__9WcMidiStdi
// Address: 0x17bda8 - 0x17be64
void MidiCommandMasterVolume__9WcMidiStdi_0x17bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MidiCommandMasterVolume__9WcMidiStdi_0x17bda8");
#endif

    switch (ctx->pc) {
        case 0x17bde8u: goto label_17bde8;
        case 0x17be00u: goto label_17be00;
        case 0x17be14u: goto label_17be14;
        default: break;
    }

    ctx->pc = 0x17bda8u;

    // 0x17bda8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bdac: 0x8f878d10  lw          $a3, -0x72F0($gp)
    ctx->pc = 0x17bdacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17bdb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bdb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bdb8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17bdb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bdc0: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x17bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x17bdc4: 0x3401c034  ori         $at, $zero, 0xC034
    ctx->pc = 0x17bdc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17bdc8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x17bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x17bdcc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x17bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17bdd0: 0x1066001f  beq         $v1, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x17BDD0u;
    {
        const bool branch_taken_0x17bdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x17BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDD0u;
        // 0x17bdd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bdd0) {
            ctx->pc = 0x17BE50u;
            goto label_17be50;
        }
    }
    ctx->pc = 0x17BDD8u;
    // 0x17bdd8: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x17bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
    // 0x17bddc: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x17bddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x17bde0: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x17BDE0u;
    SET_GPR_U32(ctx, 31, 0x17BDE8u);
    ctx->pc = 0x17BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDE0u;
    // 0x17bde4: 0x8ce40030  lw          $a0, 0x30($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x17BDE0u, 0x17BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDE8u;
label_17bde8:
    // 0x17bde8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17bde8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17bdecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17bdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdf4: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17bdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17bdf8: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x17bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x17bdfc: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x17bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_17be00:
    // 0x17be00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17be04: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BE04u;
    {
        const bool branch_taken_0x17be04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE04u;
        // 0x17be08: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be04) {
            ctx->pc = 0x17BE20u;
            goto label_17be20;
        }
    }
    ctx->pc = 0x17BE0Cu;
    // 0x17be0c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17BE0Cu;
    SET_GPR_U32(ctx, 31, 0x17BE14u);
    ctx->pc = 0x17BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE0Cu;
    // 0x17be10: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17BE0Cu, 0x17BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE14u;
label_17be14:
    // 0x17be14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BE14u;
    {
        const bool branch_taken_0x17be14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE14u;
        // 0x17be18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be14) {
            ctx->pc = 0x17BE34u;
            goto label_17be34;
        }
    }
    ctx->pc = 0x17BE1Cu;
    // 0x17be1c: 0x0  nop
    ctx->pc = 0x17be1cu;
    // NOP
label_17be20:
    // 0x17be20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17be20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17be24: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17be24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17be28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17BE28u;
    {
        const bool branch_taken_0x17be28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE28u;
        // 0x17be2c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be28) {
            ctx->pc = 0x17BE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17be00;
        }
    }
    ctx->pc = 0x17BE30u;
    // 0x17be30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17be34:
    // 0x17be34: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17be34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17be38: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x17be38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17be3c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x17be40: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x17be40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x17be44: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17be44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x17be48: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17be48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x17be4c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_17be50:
    // 0x17be50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17be50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17be54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17be58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17be58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE5Cu;
        // 0x17be60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BE64u;
}
