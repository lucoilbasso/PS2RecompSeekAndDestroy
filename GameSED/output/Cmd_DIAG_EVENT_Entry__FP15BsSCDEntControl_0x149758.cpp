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

// Function: Cmd_DIAG_EVENT_Entry__FP15BsSCDEntControl
// Address: 0x149758 - 0x149820
void Cmd_DIAG_EVENT_Entry__FP15BsSCDEntControl_0x149758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIAG_EVENT_Entry__FP15BsSCDEntControl_0x149758");
#endif

    switch (ctx->pc) {
        case 0x149794u: goto label_149794;
        case 0x1497d0u: goto label_1497d0;
        case 0x1497fcu: goto label_1497fc;
        case 0x14980cu: goto label_14980c;
        default: break;
    }

    ctx->pc = 0x149758u;

    // 0x149758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14975c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x149760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x149760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x149764: 0x245043d0  addiu       $s0, $v0, 0x43D0
    ctx->pc = 0x149764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x149768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x149768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14976c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14976cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149774: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x149774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x149778: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2043D0u));
    // 0x14977c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14977Cu;
    {
        const bool branch_taken_0x14977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14977Cu;
        // 0x149780: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14977c) {
            ctx->pc = 0x149798u;
            goto label_149798;
        }
    }
    ctx->pc = 0x149784u;
    // 0x149784: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x149784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x149788: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x149788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x14978c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14978Cu;
    SET_GPR_U32(ctx, 31, 0x149794u);
    ctx->pc = 0x149790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14978Cu;
    // 0x149790: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14978Cu, 0x149794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149794u;
label_149794:
    // 0x149794: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_149798:
    // 0x149798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14979c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14979cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1497a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1497a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1497a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1497a8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1497a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1497ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1497acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1497b0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x1497b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1497b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1497b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1497b8: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1497b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1497bc: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x1497bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1497c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1497c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1497c4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1497c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497c8: 0xc05250a  jal         func_149428
    ctx->pc = 0x1497C8u;
    SET_GPR_U32(ctx, 31, 0x1497D0u);
    ctx->pc = 0x1497CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1497C8u;
    // 0x1497cc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x1497C8u, 0x1497D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497D0u;
label_1497d0:
    // 0x1497d0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1497d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1497D4u;
    {
        const bool branch_taken_0x1497d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1497D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497D4u;
        // 0x1497d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497d4) {
            ctx->pc = 0x1497F4u;
            goto label_1497f4;
        }
    }
    ctx->pc = 0x1497DCu;
    // 0x1497dc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1497dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1497e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1497E0u;
    {
        const bool branch_taken_0x1497e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1497e0) {
            ctx->pc = 0x1497F4u;
            goto label_1497f4;
        }
    }
    ctx->pc = 0x1497E8u;
    // 0x1497e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1497e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1497ec: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1497ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1497f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1497f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1497f4:
    // 0x1497f4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1497F4u;
    SET_GPR_U32(ctx, 31, 0x1497FCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1497F4u, 0x1497FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497FCu;
label_1497fc:
    // 0x1497fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1497fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149800: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x149800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x149804: 0xc05254a  jal         func_149528
    ctx->pc = 0x149804u;
    SET_GPR_U32(ctx, 31, 0x14980Cu);
    ctx->pc = 0x149808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149804u;
    // 0x149808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149528u, 0x149804u, 0x14980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14980Cu;
label_14980c:
    // 0x14980c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14980cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x149810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149818: 0x3e00008  jr          $ra
    ctx->pc = 0x149818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149818u;
        // 0x14981c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149820u;
}
