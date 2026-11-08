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

// Function: Cmd_KEY_GROUP_ADD_Entry__FP15BsSCDEntControl
// Address: 0x114530 - 0x1145c8
void Cmd_KEY_GROUP_ADD_Entry__FP15BsSCDEntControl_0x114530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_KEY_GROUP_ADD_Entry__FP15BsSCDEntControl_0x114530");
#endif

    switch (ctx->pc) {
        case 0x114550u: goto label_114550;
        case 0x114580u: goto label_114580;
        case 0x114588u: goto label_114588;
        default: break;
    }

    ctx->pc = 0x114530u;

    // 0x114530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114534: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11453c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x114540: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x114540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x114544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114548: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114548u;
    SET_GPR_U32(ctx, 31, 0x114550u);
    ctx->pc = 0x11454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114548u;
    // 0x11454c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114548u, 0x114550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114550u;
label_114550:
    // 0x114550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114554: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x114554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x114558: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x114558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11455c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114560: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x114560u;
    {
        const bool branch_taken_0x114560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x114564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114560u;
        // 0x114564: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114560) {
            ctx->pc = 0x1145B0u;
            goto label_1145b0;
        }
    }
    ctx->pc = 0x114568u;
    // 0x114568: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x114568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11456c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x11456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x114570: 0x2452c058  addiu       $s2, $v0, -0x3FA8
    ctx->pc = 0x114570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951000));
    // 0x114574: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x114574u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x114578: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x114578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11457c: 0x0  nop
    ctx->pc = 0x11457cu;
    // NOP
label_114580:
    // 0x114580: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114580u;
    SET_GPR_U32(ctx, 31, 0x114588u);
    ctx->pc = 0x114584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114580u;
    // 0x114584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114580u, 0x114588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114588u;
label_114588:
    // 0x114588: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x114588u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11458c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11458cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x114590: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x114590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x114594: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x114594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x114598: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x114598u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11459c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1145a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1145a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1145a4: 0x1453fff6  bne         $v0, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1145A4u;
    {
        const bool branch_taken_0x1145a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1145A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145A4u;
        // 0x1145a8: 0xa6040000  sh          $a0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145a4) {
            ctx->pc = 0x114580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114580;
        }
    }
    ctx->pc = 0x1145ACu;
    // 0x1145ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1145acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1145b0:
    // 0x1145b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1145b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1145b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1145b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1145b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1145b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1145bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1145bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1145c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1145C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1145C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145C0u;
        // 0x1145c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1145C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1145C8u;
}
