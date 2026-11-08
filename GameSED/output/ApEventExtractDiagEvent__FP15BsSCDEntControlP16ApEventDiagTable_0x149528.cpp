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

// Function: ApEventExtractDiagEvent__FP15BsSCDEntControlP16ApEventDiagTable
// Address: 0x149528 - 0x149640
void ApEventExtractDiagEvent__FP15BsSCDEntControlP16ApEventDiagTable_0x149528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventExtractDiagEvent__FP15BsSCDEntControlP16ApEventDiagTable_0x149528");
#endif

    switch (ctx->pc) {
        case 0x14954cu: goto label_14954c;
        case 0x1495c0u: goto label_1495c0;
        case 0x1495e0u: goto label_1495e0;
        default: break;
    }

    ctx->pc = 0x149528u;

    // 0x149528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14952c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x149530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x149530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x149534: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x149534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x149538: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x149538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x14953c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14953Cu;
    {
        const bool branch_taken_0x14953c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14953Cu;
        // 0x149540: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14953c) {
            ctx->pc = 0x149558u;
            goto label_149558;
        }
    }
    ctx->pc = 0x149544u;
    // 0x149544: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x149544u;
    SET_GPR_U32(ctx, 31, 0x14954Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x149544u, 0x14954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14954Cu;
label_14954c:
    // 0x14954c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14954Cu;
    {
        const bool branch_taken_0x14954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14954Cu;
        // 0x149550: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14954c) {
            ctx->pc = 0x14955Cu;
            goto label_14955c;
        }
    }
    ctx->pc = 0x149554u;
    // 0x149554: 0x0  nop
    ctx->pc = 0x149554u;
    // NOP
label_149558:
    // 0x149558: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x149558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14955c:
    // 0x14955c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14955Cu;
    {
        const bool branch_taken_0x14955c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14955Cu;
        // 0x149560: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14955c) {
            ctx->pc = 0x149578u;
            goto label_149578;
        }
    }
    ctx->pc = 0x149564u;
    // 0x149564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149568: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149568u;
    {
        const bool branch_taken_0x149568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149568u;
        // 0x14956c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149568) {
            ctx->pc = 0x149588u;
            goto label_149588;
        }
    }
    ctx->pc = 0x149570u;
    // 0x149570: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x149570u;
    {
        const bool branch_taken_0x149570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149570u;
        // 0x149574: 0x34420030  ori         $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149570) {
            ctx->pc = 0x14958Cu;
            goto label_14958c;
        }
    }
    ctx->pc = 0x149578u;
label_149578:
    // 0x149578: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14957c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14957Cu;
    {
        const bool branch_taken_0x14957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14957Cu;
        // 0x149580: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14957c) {
            ctx->pc = 0x14958Cu;
            goto label_14958c;
        }
    }
    ctx->pc = 0x149584u;
    // 0x149584: 0x0  nop
    ctx->pc = 0x149584u;
    // NOP
label_149588:
    // 0x149588: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x149588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_14958c:
    // 0x14958c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14958cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x149590: 0x24aa0010  addiu       $t2, $a1, 0x10
    ctx->pc = 0x149590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x149594: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x149594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x149598: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x149598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x14959c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x14959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1495a0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1495a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1495a4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1495A4u;
    {
        const bool branch_taken_0x1495a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1495A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495A4u;
        // 0x1495a8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495a4) {
            ctx->pc = 0x149630u;
            goto label_149630;
        }
    }
    ctx->pc = 0x1495ACu;
    // 0x1495ac: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x1495acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x1495b0: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x1495b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x1495b4: 0x25297820  addiu       $t1, $t1, 0x7820
    ctx->pc = 0x1495b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30752));
    // 0x1495b8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1495b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1495bc: 0x0  nop
    ctx->pc = 0x1495bcu;
    // NOP
label_1495c0:
    // 0x1495c0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1495c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1495c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1495c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1495c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1495c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1495cc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1495CCu;
    {
        const bool branch_taken_0x1495cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1495cc) {
            ctx->pc = 0x1495D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1495CCu;
            // 0x1495d0: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149620u;
            goto label_149620;
        }
    }
    ctx->pc = 0x1495D4u;
    // 0x1495d4: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x1495d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1495d8: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x1495d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1495dc: 0x2c480080  sltiu       $t0, $v0, 0x80
    ctx->pc = 0x1495dcu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_1495e0:
    // 0x1495e0: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1495E0u;
    {
        const bool branch_taken_0x1495e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495E0u;
        // 0x1495e4: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495e0) {
            ctx->pc = 0x149608u;
            goto label_149608;
        }
    }
    ctx->pc = 0x1495E8u;
    // 0x1495e8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1495E8u;
    {
        const bool branch_taken_0x1495e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1495e8) {
            ctx->pc = 0x1495ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1495E8u;
            // 0x1495ec: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14960Cu;
            goto label_14960c;
        }
    }
    ctx->pc = 0x1495F0u;
    // 0x1495f0: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x1495f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1495f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1495F4u;
    {
        const bool branch_taken_0x1495f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1495f4) {
            ctx->pc = 0x1495F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1495F4u;
            // 0x1495f8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14960Cu;
            goto label_14960c;
        }
    }
    ctx->pc = 0x1495FCu;
    // 0x1495fc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1495fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149600: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x149600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x149604: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x149604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_149608:
    // 0x149608: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x149608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_14960c:
    // 0x14960c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14960cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149610: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149614: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x149614u;
    {
        const bool branch_taken_0x149614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149614u;
        // 0x149618: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149614) {
            ctx->pc = 0x1495E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1495e0;
        }
    }
    ctx->pc = 0x14961Cu;
    // 0x14961c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x14961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_149620:
    // 0x149620: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x149620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x149624: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x149624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x149628: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x149628u;
    {
        const bool branch_taken_0x149628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149628u;
        // 0x14962c: 0x25290080  addiu       $t1, $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149628) {
            ctx->pc = 0x1495C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1495c0;
        }
    }
    ctx->pc = 0x149630u;
label_149630:
    // 0x149630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x149634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149638: 0x3e00008  jr          $ra
    ctx->pc = 0x149638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149638u;
        // 0x14963c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149640u;
}
