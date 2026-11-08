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

// Function: MidiCommandMute__9WcMidiStdb
// Address: 0x17c308 - 0x17c3a8
void MidiCommandMute__9WcMidiStdb_0x17c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MidiCommandMute__9WcMidiStdb_0x17c308");
#endif

    switch (ctx->pc) {
        case 0x17c330u: goto label_17c330;
        case 0x17c344u: goto label_17c344;
        default: break;
    }

    ctx->pc = 0x17c308u;

    // 0x17c308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c30c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c30cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c318: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17c318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17c31c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c320: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17c320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c324: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17c328: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x17c328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x17c32c: 0x0  nop
    ctx->pc = 0x17c32cu;
    // NOP
label_17c330:
    // 0x17c330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c334: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C334u;
    {
        const bool branch_taken_0x17c334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C334u;
        // 0x17c338: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c334) {
            ctx->pc = 0x17C350u;
            goto label_17c350;
        }
    }
    ctx->pc = 0x17C33Cu;
    // 0x17c33c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C33Cu;
    SET_GPR_U32(ctx, 31, 0x17C344u);
    ctx->pc = 0x17C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C33Cu;
    // 0x17c340: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C33Cu, 0x17C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C344u;
label_17c344:
    // 0x17c344: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C344u;
    {
        const bool branch_taken_0x17c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C344u;
        // 0x17c348: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c344) {
            ctx->pc = 0x17C364u;
            goto label_17c364;
        }
    }
    ctx->pc = 0x17C34Cu;
    // 0x17c34c: 0x0  nop
    ctx->pc = 0x17c34cu;
    // NOP
label_17c350:
    // 0x17c350: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17c354: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17c354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c358: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17C358u;
    {
        const bool branch_taken_0x17c358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C358u;
        // 0x17c35c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c358) {
            ctx->pc = 0x17C330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c330;
        }
    }
    ctx->pc = 0x17C360u;
    // 0x17c360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c364:
    // 0x17c364: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x17c364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c368: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x17c368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c36c: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x17c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x17c370: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x17c370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x17c374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c378: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x17c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x17c37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c380: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17c380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17c384: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x17c384u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x17c388: 0xac31c050  sw          $s1, -0x3FB0($at)
    ctx->pc = 0x17c388u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950992), GPR_U32(ctx, 17));
    // 0x17c38c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c38cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c390: 0xacc3004c  sw          $v1, 0x4C($a2)
    ctx->pc = 0x17c390u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 3));
    // 0x17c394: 0xacc50040  sw          $a1, 0x40($a2)
    ctx->pc = 0x17c394u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 5));
    // 0x17c398: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x17c398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    // 0x17c39c: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x17c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x17c3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3A0u;
        // 0x17c3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C3A8u;
}
