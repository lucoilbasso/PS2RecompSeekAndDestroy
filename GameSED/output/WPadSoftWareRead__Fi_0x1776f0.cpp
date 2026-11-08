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

// Function: WPadSoftWareRead__Fi
// Address: 0x1776f0 - 0x1778b0
void WPadSoftWareRead__Fi_0x1776f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadSoftWareRead__Fi_0x1776f0");
#endif

    switch (ctx->pc) {
        case 0x1777b0u: goto label_1777b0;
        case 0x177800u: goto label_177800;
        default: break;
    }

    ctx->pc = 0x1776f0u;

    // 0x1776f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1776f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1776f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1776f8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1776f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1776fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1776fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177700: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177704: 0x8f878d10  lw          $a3, -0x72F0($gp)
    ctx->pc = 0x177704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x177708: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x177708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x17770c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17770cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x177710: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x177710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177714: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x177714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x177718: 0x2463e820  addiu       $v1, $v1, -0x17E0
    ctx->pc = 0x177718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961184));
    // 0x17771c: 0x8ce60020  lw          $a2, 0x20($a3)
    ctx->pc = 0x17771cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x177720: 0x2463ffa4  addiu       $v1, $v1, -0x5C
    ctx->pc = 0x177720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967204));
    // 0x177724: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x177724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x177728: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x177728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17772c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17772cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x177730: 0x90e30030  lbu         $v1, 0x30($a3)
    ctx->pc = 0x177730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x177734: 0x24c80018  addiu       $t0, $a2, 0x18
    ctx->pc = 0x177734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x177738: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x177738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17773c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x17773cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x177740: 0x90e20034  lbu         $v0, 0x34($a3)
    ctx->pc = 0x177740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x177744: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177744u;
    {
        const bool branch_taken_0x177744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x177744) {
            ctx->pc = 0x177748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177744u;
            // 0x177748: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177758u;
            goto label_177758;
        }
    }
    ctx->pc = 0x17774Cu;
    // 0x17774c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17774cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177750: 0x805dfa6  j           func_177E98
    ctx->pc = 0x177750u;
    ctx->pc = 0x177754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177750u;
    // 0x177754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E98u;
    WPadSoftWareInit__Fi_0x177e98(rdram, ctx, runtime); return;
    ctx->pc = 0x177758u;
label_177758:
    // 0x177758: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x177758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17775c: 0x95040008  lhu         $a0, 0x8($t0)
    ctx->pc = 0x17775cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x177760: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x177760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x177764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x177764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177768: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x177768u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17776c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x17776cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x177770: 0xa504001a  sh          $a0, 0x1A($t0)
    ctx->pc = 0x177770u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x177774: 0x90e20036  lbu         $v0, 0x36($a3)
    ctx->pc = 0x177774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 54)));
    // 0x177778: 0x90e30037  lbu         $v1, 0x37($a3)
    ctx->pc = 0x177778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 55)));
    // 0x17777c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x17777cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x177780: 0x621827  nor         $v1, $v1, $v0
    ctx->pc = 0x177780u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 2)));
    // 0x177784: 0x14a60042  bne         $a1, $a2, . + 4 + (0x42 << 2)
    ctx->pc = 0x177784u;
    {
        const bool branch_taken_0x177784 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x177788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177784u;
        // 0x177788: 0xa5030008  sh          $v1, 0x8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177784) {
            ctx->pc = 0x177890u;
            goto label_177890;
        }
    }
    ctx->pc = 0x17778Cu;
    // 0x17778c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x17778cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x177790: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x177790u;
    {
        const bool branch_taken_0x177790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177790u;
        // 0x177794: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177790) {
            ctx->pc = 0x17786Cu;
            goto label_17786c;
        }
    }
    ctx->pc = 0x177798u;
    // 0x177798: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177798u;
    {
        const bool branch_taken_0x177798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177798u;
        // 0x17779c: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177798) {
            ctx->pc = 0x1777E8u;
            goto label_1777e8;
        }
    }
    ctx->pc = 0x1777A0u;
    // 0x1777a0: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1777a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1777a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1777a8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1777ac: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1777acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1777b0:
    // 0x1777b0: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x1777b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1777b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1777b8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1777b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1777bc: 0x0  nop
    ctx->pc = 0x1777bcu;
    // NOP
    // 0x1777c0: 0x0  nop
    ctx->pc = 0x1777c0u;
    // NOP
    // 0x1777c4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1777C4u;
    {
        const bool branch_taken_0x1777c4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1777C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777C4u;
        // 0x1777c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777c4) {
            ctx->pc = 0x1777B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1777b0;
        }
    }
    ctx->pc = 0x1777CCu;
    // 0x1777cc: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1777ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1777d0: 0xa0e20038  sb          $v0, 0x38($a3)
    ctx->pc = 0x1777d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1777d4: 0xa0e2003b  sb          $v0, 0x3B($a3)
    ctx->pc = 0x1777d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 59), (uint8_t)GPR_U32(ctx, 2));
    // 0x1777d8: 0xa0e2003a  sb          $v0, 0x3A($a3)
    ctx->pc = 0x1777d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1777dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1777DCu;
    {
        const bool branch_taken_0x1777dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777DCu;
        // 0x1777e0: 0xa0e20039  sb          $v0, 0x39($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 57), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777dc) {
            ctx->pc = 0x17786Cu;
            goto label_17786c;
        }
    }
    ctx->pc = 0x1777E4u;
    // 0x1777e4: 0x0  nop
    ctx->pc = 0x1777e4u;
    // NOP
label_1777e8:
    // 0x1777e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1777e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1777ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1777ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777f0: 0x244ae810  addiu       $t2, $v0, -0x17F0
    ctx->pc = 0x1777f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961168));
    // 0x1777f4: 0x24eb0004  addiu       $t3, $a3, 0x4
    ctx->pc = 0x1777f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1777f8: 0x240dff80  addiu       $t5, $zero, -0x80
    ctx->pc = 0x1777f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1777fc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1777fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177800:
    // 0x177800: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x177800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x177804: 0x1261007  srav        $v0, $a2, $t1
    ctx->pc = 0x177804u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 9) & 0x1F));
    // 0x177808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x177808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17780c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x17780Cu;
    {
        const bool branch_taken_0x17780c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17780c) {
            ctx->pc = 0x177810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17780Cu;
            // 0x177810: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177860u;
            goto label_177860;
        }
    }
    ctx->pc = 0x177814u;
    // 0x177814: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x177814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x177818: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x177818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x17781c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x17781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x177820: 0x1632821  addu        $a1, $t3, $v1
    ctx->pc = 0x177820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x177824: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x177824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x177828: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x177828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17782c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17782cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177830: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x177830u;
    {
        const bool branch_taken_0x177830 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x177830) {
            ctx->pc = 0x177834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177830u;
            // 0x177834: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177838u;
            goto label_177838;
        }
    }
    ctx->pc = 0x177838u;
label_177838:
    // 0x177838: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x177838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x17783c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17783Cu;
    {
        const bool branch_taken_0x17783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17783Cu;
        // 0x177840: 0x12c1004  sllv        $v0, $t4, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17783c) {
            ctx->pc = 0x177850u;
            goto label_177850;
        }
    }
    ctx->pc = 0x177844u;
    // 0x177844: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177844u;
    {
        const bool branch_taken_0x177844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177844u;
        // 0x177848: 0xa0ad0000  sb          $t5, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177844) {
            ctx->pc = 0x17785Cu;
            goto label_17785c;
        }
    }
    ctx->pc = 0x17784Cu;
    // 0x17784c: 0x0  nop
    ctx->pc = 0x17784cu;
    // NOP
label_177850:
    // 0x177850: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x177850u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x177854: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x177854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x177858: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x177858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_17785c:
    // 0x17785c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17785cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_177860:
    // 0x177860: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x177860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x177864: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x177864u;
    {
        const bool branch_taken_0x177864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177864u;
        // 0x177868: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177864) {
            ctx->pc = 0x177800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177800;
        }
    }
    ctx->pc = 0x17786Cu;
label_17786c:
    // 0x17786c: 0x90e20038  lbu         $v0, 0x38($a3)
    ctx->pc = 0x17786cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x177870: 0xa1020010  sb          $v0, 0x10($t0)
    ctx->pc = 0x177870u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x177874: 0x90e30039  lbu         $v1, 0x39($a3)
    ctx->pc = 0x177874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 57)));
    // 0x177878: 0xa1030011  sb          $v1, 0x11($t0)
    ctx->pc = 0x177878u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x17787c: 0x90e2003a  lbu         $v0, 0x3A($a3)
    ctx->pc = 0x17787cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 58)));
    // 0x177880: 0xa1020012  sb          $v0, 0x12($t0)
    ctx->pc = 0x177880u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x177884: 0x90e3003b  lbu         $v1, 0x3B($a3)
    ctx->pc = 0x177884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 59)));
    // 0x177888: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x177888u;
    {
        const bool branch_taken_0x177888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177888u;
        // 0x17788c: 0xa1030013  sb          $v1, 0x13($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177888) {
            ctx->pc = 0x1778A4u;
            goto label_1778a4;
        }
    }
    ctx->pc = 0x177890u;
label_177890:
    // 0x177890: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x177894: 0xa1020010  sb          $v0, 0x10($t0)
    ctx->pc = 0x177894u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x177898: 0xa1020013  sb          $v0, 0x13($t0)
    ctx->pc = 0x177898u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x17789c: 0xa1020012  sb          $v0, 0x12($t0)
    ctx->pc = 0x17789cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x1778a0: 0xa1020011  sb          $v0, 0x11($t0)
    ctx->pc = 0x1778a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 17), (uint8_t)GPR_U32(ctx, 2));
label_1778a4:
    // 0x1778a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1778a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1778a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1778A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1778ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778A8u;
        // 0x1778ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1778A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1778B0u;
}
