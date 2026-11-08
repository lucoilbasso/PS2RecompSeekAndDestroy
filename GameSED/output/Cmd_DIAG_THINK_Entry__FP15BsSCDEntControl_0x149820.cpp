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

// Function: Cmd_DIAG_THINK_Entry__FP15BsSCDEntControl
// Address: 0x149820 - 0x1498e8
void Cmd_DIAG_THINK_Entry__FP15BsSCDEntControl_0x149820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIAG_THINK_Entry__FP15BsSCDEntControl_0x149820");
#endif

    switch (ctx->pc) {
        case 0x14985cu: goto label_14985c;
        case 0x149898u: goto label_149898;
        case 0x1498c4u: goto label_1498c4;
        case 0x1498d4u: goto label_1498d4;
        default: break;
    }

    ctx->pc = 0x149820u;

    // 0x149820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149824: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x149824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x149828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x149828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14982c: 0x245043d0  addiu       $s0, $v0, 0x43D0
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x149830: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x149830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x149834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14983c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x14983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x149840: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2043D0u));
    // 0x149844: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149844u;
    {
        const bool branch_taken_0x149844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149844u;
        // 0x149848: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149844) {
            ctx->pc = 0x149860u;
            goto label_149860;
        }
    }
    ctx->pc = 0x14984Cu;
    // 0x14984c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14984cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x149850: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x149850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x149854: 0xc068186  jal         func_1A0618
    ctx->pc = 0x149854u;
    SET_GPR_U32(ctx, 31, 0x14985Cu);
    ctx->pc = 0x149858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149854u;
    // 0x149858: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x149854u, 0x14985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14985Cu;
label_14985c:
    // 0x14985c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_149860:
    // 0x149860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149864: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x149864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149868: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14986c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149870: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x149874: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149878: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x149878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x14987c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x14987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x149880: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x149884: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x149884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x149888: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14988c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x14988cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149890: 0xc05250a  jal         func_149428
    ctx->pc = 0x149890u;
    SET_GPR_U32(ctx, 31, 0x149898u);
    ctx->pc = 0x149894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149890u;
    // 0x149894: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149890u, 0x149898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149898u;
label_149898:
    // 0x149898: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x149898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14989c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14989Cu;
    {
        const bool branch_taken_0x14989c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1498A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14989Cu;
        // 0x1498a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14989c) {
            ctx->pc = 0x1498BCu;
            goto label_1498bc;
        }
    }
    ctx->pc = 0x1498A4u;
    // 0x1498a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1498a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1498a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1498A8u;
    {
        const bool branch_taken_0x1498a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1498a8) {
            ctx->pc = 0x1498BCu;
            goto label_1498bc;
        }
    }
    ctx->pc = 0x1498B0u;
    // 0x1498b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1498b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1498b4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1498b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1498b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1498b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1498bc:
    // 0x1498bc: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1498BCu;
    SET_GPR_U32(ctx, 31, 0x1498C4u);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1498BCu, 0x1498C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1498C4u;
label_1498c4:
    // 0x1498c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1498c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1498c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1498cc: 0xc05254a  jal         func_149528
    ctx->pc = 0x1498CCu;
    SET_GPR_U32(ctx, 31, 0x1498D4u);
    ctx->pc = 0x1498D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1498CCu;
    // 0x1498d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149528u, 0x1498CCu, 0x1498D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1498D4u;
label_1498d4:
    // 0x1498d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1498d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1498d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1498d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1498dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1498dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1498e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1498E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1498E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498E0u;
        // 0x1498e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1498E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1498E8u;
}
