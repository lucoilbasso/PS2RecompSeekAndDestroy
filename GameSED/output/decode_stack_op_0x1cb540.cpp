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

// Function: decode_stack_op
// Address: 0x1cb540 - 0x1cb660
void decode_stack_op_0x1cb540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decode_stack_op_0x1cb540");
#endif

    switch (ctx->pc) {
        case 0x1cb5c8u: goto label_1cb5c8;
        case 0x1cb5f0u: goto label_1cb5f0;
        case 0x1cb608u: goto label_1cb608;
        case 0x1cb630u: goto label_1cb630;
        case 0x1cb648u: goto label_1cb648;
        default: break;
    }

    ctx->pc = 0x1cb540u;

    // 0x1cb540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb544: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cb544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cb548: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb54c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cb54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cb550: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cb554: 0x90900000  lbu         $s0, 0x0($a0)
    ctx->pc = 0x1cb554u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb558: 0x2e020070  sltiu       $v0, $s0, 0x70
    ctx->pc = 0x1cb558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x1cb55c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB55Cu;
    {
        const bool branch_taken_0x1cb55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB55Cu;
        // 0x1cb560: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb55c) {
            ctx->pc = 0x1CB588u;
            goto label_1cb588;
        }
    }
    ctx->pc = 0x1CB564u;
    // 0x1cb564: 0x2e020050  sltiu       $v0, $s0, 0x50
    ctx->pc = 0x1cb564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1cb568: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB568u;
    {
        const bool branch_taken_0x1cb568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB568u;
        // 0x1cb56c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb568) {
            ctx->pc = 0x1CB5B0u;
            goto label_1cb5b0;
        }
    }
    ctx->pc = 0x1CB570u;
    // 0x1cb570: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CB570u;
    {
        const bool branch_taken_0x1cb570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB570u;
        // 0x1cb574: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb570) {
            ctx->pc = 0x1CB618u;
            goto label_1cb618;
        }
    }
    ctx->pc = 0x1CB578u;
    // 0x1cb578: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CB578u;
    {
        const bool branch_taken_0x1cb578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb578) {
            ctx->pc = 0x1CB628u;
            goto label_1cb628;
        }
    }
    ctx->pc = 0x1CB580u;
    // 0x1cb580: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1CB580u;
    {
        const bool branch_taken_0x1cb580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb580) {
            ctx->pc = 0x1CB640u;
            goto label_1cb640;
        }
    }
    ctx->pc = 0x1CB588u;
label_1cb588:
    // 0x1cb588: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1cb58c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB58Cu;
    {
        const bool branch_taken_0x1cb58c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB58Cu;
        // 0x1cb590: 0x2e020090  sltiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb58c) {
            ctx->pc = 0x1CB5C0u;
            goto label_1cb5c0;
        }
    }
    ctx->pc = 0x1CB594u;
    // 0x1cb594: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CB594u;
    {
        const bool branch_taken_0x1cb594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB594u;
        // 0x1cb598: 0x24020092  addiu       $v0, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb594) {
            ctx->pc = 0x1CB5D4u;
            goto label_1cb5d4;
        }
    }
    ctx->pc = 0x1CB59Cu;
    // 0x1cb59c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB59Cu;
    {
        const bool branch_taken_0x1cb59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb59c) {
            ctx->pc = 0x1CB5E8u;
            goto label_1cb5e8;
        }
    }
    ctx->pc = 0x1CB5A4u;
    // 0x1cb5a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1CB5A4u;
    {
        const bool branch_taken_0x1cb5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5a4) {
            ctx->pc = 0x1CB640u;
            goto label_1cb640;
        }
    }
    ctx->pc = 0x1CB5ACu;
    // 0x1cb5ac: 0x0  nop
    ctx->pc = 0x1cb5acu;
    // NOP
label_1cb5b0:
    // 0x1cb5b0: 0x3402ffb0  ori         $v0, $zero, 0xFFB0
    ctx->pc = 0x1cb5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65456);
    // 0x1cb5b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cb5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cb5b8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1CB5B8u;
    {
        const bool branch_taken_0x1cb5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5B8u;
        // 0x1cb5bc: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5b8) {
            ctx->pc = 0x1CB648u;
            goto label_1cb648;
        }
    }
    ctx->pc = 0x1CB5C0u;
label_1cb5c0:
    // 0x1cb5c0: 0xc0729c8  jal         func_1CA720
    ctx->pc = 0x1CB5C0u;
    SET_GPR_U32(ctx, 31, 0x1CB5C8u);
    ctx->pc = 0x1CB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5C0u;
    // 0x1cb5c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA720u, 0x1CB5C0u, 0x1CB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5C8u;
label_1cb5c8:
    // 0x1cb5c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5cc: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x1cb5ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb5d0: 0xa62203f8  sh          $v0, 0x3F8($s1)
    ctx->pc = 0x1cb5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
label_1cb5d4:
    // 0x1cb5d4: 0x3402ff90  ori         $v0, $zero, 0xFF90
    ctx->pc = 0x1cb5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65424);
    // 0x1cb5d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cb5dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB5E0u;
    {
        const bool branch_taken_0x1cb5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5E0u;
        // 0x1cb5e4: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5e0) {
            ctx->pc = 0x1CB600u;
            goto label_1cb600;
        }
    }
    ctx->pc = 0x1CB5E8u;
label_1cb5e8:
    // 0x1cb5e8: 0xc0729c8  jal         func_1CA720
    ctx->pc = 0x1CB5E8u;
    SET_GPR_U32(ctx, 31, 0x1CB5F0u);
    ctx->pc = 0x1CB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5E8u;
    // 0x1cb5ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA720u, 0x1CB5E8u, 0x1CB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5F0u;
label_1cb5f0:
    // 0x1cb5f0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x1cb5f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb5f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5fc: 0xa62303f8  sh          $v1, 0x3F8($s1)
    ctx->pc = 0x1cb5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 3));
label_1cb600:
    // 0x1cb600: 0xc0729c8  jal         func_1CA720
    ctx->pc = 0x1CB600u;
    SET_GPR_U32(ctx, 31, 0x1CB608u);
    ctx->pc = 0x1CA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA720u, 0x1CB600u, 0x1CB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB608u;
label_1cb608:
    // 0x1cb608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb60c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb610: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CB610u;
    {
        const bool branch_taken_0x1cb610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB610u;
        // 0x1cb614: 0xfe220010  sd          $v0, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb610) {
            ctx->pc = 0x1CB648u;
            goto label_1cb648;
        }
    }
    ctx->pc = 0x1CB618u;
label_1cb618:
    // 0x1cb618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb61c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CB61Cu;
    {
        const bool branch_taken_0x1cb61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB61Cu;
        // 0x1cb620: 0xa2220477  sb          $v0, 0x477($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1143), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb61c) {
            ctx->pc = 0x1CB648u;
            goto label_1cb648;
        }
    }
    ctx->pc = 0x1CB624u;
    // 0x1cb624: 0x0  nop
    ctx->pc = 0x1cb624u;
    // NOP
label_1cb628:
    // 0x1cb628: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB628u;
    SET_GPR_U32(ctx, 31, 0x1CB630u);
    ctx->pc = 0x1CB62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB628u;
    // 0x1cb62c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB628u, 0x1CB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB630u;
label_1cb630:
    // 0x1cb630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb634: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB638u;
    {
        const bool branch_taken_0x1cb638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB638u;
        // 0x1cb63c: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb638) {
            ctx->pc = 0x1CB648u;
            goto label_1cb648;
        }
    }
    ctx->pc = 0x1CB640u;
label_1cb640:
    // 0x1cb640: 0xc073d1a  jal         func_1CF468
    ctx->pc = 0x1CB640u;
    SET_GPR_U32(ctx, 31, 0x1CB648u);
    ctx->pc = 0x1CF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF468u, 0x1CB640u, 0x1CB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB648u;
label_1cb648:
    // 0x1cb648: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cb648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb64c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1cb64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb650: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cb650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb654: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb658: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB658u;
        // 0x1cb65c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB660u;
}
