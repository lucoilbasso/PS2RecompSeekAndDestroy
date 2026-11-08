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

// Function: ApEventExtractDiagDrift__FP15BsSCDEntControlP16ApEventDiagTable
// Address: 0x149640 - 0x149758
void ApEventExtractDiagDrift__FP15BsSCDEntControlP16ApEventDiagTable_0x149640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventExtractDiagDrift__FP15BsSCDEntControlP16ApEventDiagTable_0x149640");
#endif

    switch (ctx->pc) {
        case 0x149664u: goto label_149664;
        case 0x1496d8u: goto label_1496d8;
        case 0x1496f8u: goto label_1496f8;
        default: break;
    }

    ctx->pc = 0x149640u;

    // 0x149640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x149644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x149648: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x149648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14964c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x14964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x149650: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x149650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x149654: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149654u;
    {
        const bool branch_taken_0x149654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149654u;
        // 0x149658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149654) {
            ctx->pc = 0x149670u;
            goto label_149670;
        }
    }
    ctx->pc = 0x14965Cu;
    // 0x14965c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14965Cu;
    SET_GPR_U32(ctx, 31, 0x149664u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14965Cu, 0x149664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149664u;
label_149664:
    // 0x149664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149664u;
    {
        const bool branch_taken_0x149664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149664u;
        // 0x149668: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149664) {
            ctx->pc = 0x149674u;
            goto label_149674;
        }
    }
    ctx->pc = 0x14966Cu;
    // 0x14966c: 0x0  nop
    ctx->pc = 0x14966cu;
    // NOP
label_149670:
    // 0x149670: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x149670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_149674:
    // 0x149674: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149674u;
    {
        const bool branch_taken_0x149674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149674u;
        // 0x149678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149674) {
            ctx->pc = 0x149690u;
            goto label_149690;
        }
    }
    ctx->pc = 0x14967Cu;
    // 0x14967c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149680: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149680u;
    {
        const bool branch_taken_0x149680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x149684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149680u;
        // 0x149684: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149680) {
            ctx->pc = 0x1496A0u;
            goto label_1496a0;
        }
    }
    ctx->pc = 0x149688u;
    // 0x149688: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x149688u;
    {
        const bool branch_taken_0x149688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149688u;
        // 0x14968c: 0x34420030  ori         $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149688) {
            ctx->pc = 0x1496A4u;
            goto label_1496a4;
        }
    }
    ctx->pc = 0x149690u;
label_149690:
    // 0x149690: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149694u;
    {
        const bool branch_taken_0x149694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149694u;
        // 0x149698: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149694) {
            ctx->pc = 0x1496A4u;
            goto label_1496a4;
        }
    }
    ctx->pc = 0x14969Cu;
    // 0x14969c: 0x0  nop
    ctx->pc = 0x14969cu;
    // NOP
label_1496a0:
    // 0x1496a0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1496a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1496a4:
    // 0x1496a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1496a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1496a8: 0x24aa0010  addiu       $t2, $a1, 0x10
    ctx->pc = 0x1496a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1496ac: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x1496acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1496b0: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x1496b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1496b4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1496b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1496b8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1496b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1496bc: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1496BCu;
    {
        const bool branch_taken_0x1496bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1496C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496BCu;
        // 0x1496c0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496bc) {
            ctx->pc = 0x149748u;
            goto label_149748;
        }
    }
    ctx->pc = 0x1496C4u;
    // 0x1496c4: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x1496c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x1496c8: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x1496c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x1496cc: 0x25297820  addiu       $t1, $t1, 0x7820
    ctx->pc = 0x1496ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30752));
    // 0x1496d0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1496d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1496d4: 0x0  nop
    ctx->pc = 0x1496d4u;
    // NOP
label_1496d8:
    // 0x1496d8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1496d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1496dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1496dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1496e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1496e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1496e4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1496E4u;
    {
        const bool branch_taken_0x1496e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1496e4) {
            ctx->pc = 0x1496E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1496E4u;
            // 0x1496e8: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149738u;
            goto label_149738;
        }
    }
    ctx->pc = 0x1496ECu;
    // 0x1496ec: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x1496ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1496f0: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x1496f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1496f4: 0x2c480080  sltiu       $t0, $v0, 0x80
    ctx->pc = 0x1496f4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_1496f8:
    // 0x1496f8: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1496F8u;
    {
        const bool branch_taken_0x1496f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496F8u;
        // 0x1496fc: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496f8) {
            ctx->pc = 0x149720u;
            goto label_149720;
        }
    }
    ctx->pc = 0x149700u;
    // 0x149700: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x149700u;
    {
        const bool branch_taken_0x149700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149700) {
            ctx->pc = 0x149704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149700u;
            // 0x149704: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x149708u;
    // 0x149708: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x149708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14970c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14970Cu;
    {
        const bool branch_taken_0x14970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14970c) {
            ctx->pc = 0x149710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14970Cu;
            // 0x149710: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x149714u;
    // 0x149714: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x149714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149718: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x149718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14971c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x14971cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_149720:
    // 0x149720: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x149720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_149724:
    // 0x149724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149728: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14972c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14972Cu;
    {
        const bool branch_taken_0x14972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14972Cu;
        // 0x149730: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14972c) {
            ctx->pc = 0x1496F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1496f8;
        }
    }
    ctx->pc = 0x149734u;
    // 0x149734: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x149734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_149738:
    // 0x149738: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x149738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14973c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x14973cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x149740: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x149740u;
    {
        const bool branch_taken_0x149740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149740u;
        // 0x149744: 0x25290080  addiu       $t1, $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149740) {
            ctx->pc = 0x1496D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1496d8;
        }
    }
    ctx->pc = 0x149748u;
label_149748:
    // 0x149748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14974c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149750: 0x3e00008  jr          $ra
    ctx->pc = 0x149750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149750u;
        // 0x149754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149758u;
}
