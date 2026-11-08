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

// Function: MidiCommandSetUp__9WcMidiStdPvUi
// Address: 0x17c0e8 - 0x17c1b4
void MidiCommandSetUp__9WcMidiStdPvUi_0x17c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MidiCommandSetUp__9WcMidiStdPvUi_0x17c0e8");
#endif

    switch (ctx->pc) {
        case 0x17c118u: goto label_17c118;
        case 0x17c130u: goto label_17c130;
        case 0x17c170u: goto label_17c170;
        case 0x17c184u: goto label_17c184;
        default: break;
    }

    ctx->pc = 0x17c0e8u;

    // 0x17c0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c0ec: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x17c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17c0f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c0f4: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17c0f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17c0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c100: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17c100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c104: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17c104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17c108: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17c108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c10c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x17c10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c114: 0x0  nop
    ctx->pc = 0x17c114u;
    // NOP
label_17c118:
    // 0x17c118: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c11c: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C11Cu;
    {
        const bool branch_taken_0x17c11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x17C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C11Cu;
        // 0x17c120: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c11c) {
            ctx->pc = 0x17C138u;
            goto label_17c138;
        }
    }
    ctx->pc = 0x17C124u;
    // 0x17c124: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x17c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x17c128: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C128u;
    SET_GPR_U32(ctx, 31, 0x17C130u);
    ctx->pc = 0x17C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C128u;
    // 0x17c12c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C128u, 0x17C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C130u;
label_17c130:
    // 0x17c130: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C130u;
    {
        const bool branch_taken_0x17c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C130u;
        // 0x17c134: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c130) {
            ctx->pc = 0x17C150u;
            goto label_17c150;
        }
    }
    ctx->pc = 0x17C138u;
label_17c138:
    // 0x17c138: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c13c: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x17c13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c140: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17C140u;
    {
        const bool branch_taken_0x17c140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C140u;
        // 0x17c144: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c140) {
            ctx->pc = 0x17C118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c118;
        }
    }
    ctx->pc = 0x17C148u;
    // 0x17c148: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17c148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c14c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_17c150:
    // 0x17c150: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c154: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x17c154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x17c158: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x17c158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x17c15c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x17c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x17c160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c164: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17c164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17c168: 0xc05e9ee  jal         func_17A7B8
    ctx->pc = 0x17C168u;
    SET_GPR_U32(ctx, 31, 0x17C170u);
    ctx->pc = 0x17C16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C168u;
    // 0x17c16c: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7B8u, 0x17C168u, 0x17C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C170u;
label_17c170:
    // 0x17c170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c174: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17c174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c178: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x17c178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17c17c: 0xc05ea18  jal         func_17A860
    ctx->pc = 0x17C17Cu;
    SET_GPR_U32(ctx, 31, 0x17C184u);
    ctx->pc = 0x17C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C17Cu;
    // 0x17c180: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x17C17Cu, 0x17C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C184u;
label_17c184:
    // 0x17c184: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c18c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c190: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x17c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17c194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c198: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17c198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c19c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17c19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c1a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17c1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17c1a4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x17c1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x17c1a8: 0xac24c05c  sw          $a0, -0x3FA4($at)
    ctx->pc = 0x17c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294951004), GPR_U32(ctx, 4));
    // 0x17c1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17C1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1ACu;
        // 0x17c1b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C1B4u;
}
