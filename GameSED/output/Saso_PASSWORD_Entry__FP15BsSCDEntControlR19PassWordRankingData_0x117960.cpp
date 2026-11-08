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

// Function: Saso_PASSWORD_Entry__FP15BsSCDEntControlR19PassWordRankingData
// Address: 0x117960 - 0x117bc0
void Saso_PASSWORD_Entry__FP15BsSCDEntControlR19PassWordRankingData_0x117960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Saso_PASSWORD_Entry__FP15BsSCDEntControlR19PassWordRankingData_0x117960");
#endif

    switch (ctx->pc) {
        case 0x1179a0u: goto label_1179a0;
        case 0x1179d8u: goto label_1179d8;
        case 0x117b18u: goto label_117b18;
        default: break;
    }

    ctx->pc = 0x117960u;

    // 0x117960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x117964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117968: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x117968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x11796c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11796cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117970: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x117970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x117974: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x117974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117978: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11797c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x11797cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117980: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x117980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x117984: 0x2623000b  addiu       $v1, $s1, 0xB
    ctx->pc = 0x117984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x117988: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x117988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x11798c: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x11798cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x117990: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x117990u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x117994: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x117994u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x117998: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x117998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x11799c: 0x0  nop
    ctx->pc = 0x11799cu;
    // NOP
label_1179a0:
    // 0x1179a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1179a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1179a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1179a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1179a8: 0x0  nop
    ctx->pc = 0x1179a8u;
    // NOP
    // 0x1179ac: 0x0  nop
    ctx->pc = 0x1179acu;
    // NOP
    // 0x1179b0: 0x0  nop
    ctx->pc = 0x1179b0u;
    // NOP
    // 0x1179b4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1179B4u;
    {
        const bool branch_taken_0x1179b4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1179B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179B4u;
        // 0x1179b8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179b4) {
            ctx->pc = 0x1179A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1179a0;
        }
    }
    ctx->pc = 0x1179BCu;
    // 0x1179bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1179bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1179c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1179c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179c4: 0xa0e20005  sb          $v0, 0x5($a3)
    ctx->pc = 0x1179c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1179c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1179c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179cc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1179ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1179d0: 0xc045e0e  jal         func_117838
    ctx->pc = 0x1179D0u;
    SET_GPR_U32(ctx, 31, 0x1179D8u);
    ctx->pc = 0x1179D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179D0u;
    // 0x1179d4: 0x90500161  lbu         $s0, 0x161($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 353)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117838u, 0x1179D0u, 0x1179D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179D8u;
label_1179d8:
    // 0x1179d8: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x1179d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1179dc: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1179dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1179e0: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x1179e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x1179e4: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1179e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1179e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1179e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1179ec: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1179ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1179f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1179f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1179f4: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1179f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1179f8: 0xa2230005  sb          $v1, 0x5($s1)
    ctx->pc = 0x1179f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1179fc: 0x24c6c140  addiu       $a2, $a2, -0x3EC0
    ctx->pc = 0x1179fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951232));
    // 0x117a00: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x117a00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x117a04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x117a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x117a08: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x117a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x117a0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x117a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x117a10: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x117a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x117a14: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x117a14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x117a18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x117a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x117a1c: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x117a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x117a20: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x117a20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x117a24: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x117a24u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x117a28: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x117a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x117a2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x117a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a30: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x117a30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x117a34: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x117a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x117a38: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x117a38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x117a3c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x117a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x117a40: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x117a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x117a44: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x117a44u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x117a48: 0xe35006  srlv        $t2, $v1, $a3
    ctx->pc = 0x117a48u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x117a4c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x117a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x117a50: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x117a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x117a54: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x117a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x117a58: 0x4a2004  sllv        $a0, $t2, $v0
    ctx->pc = 0x117a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x117a5c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x117a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x117a60: 0x445006  srlv        $t2, $a0, $v0
    ctx->pc = 0x117a60u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x117a64: 0x83a20012  lb          $v0, 0x12($sp)
    ctx->pc = 0x117a64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x117a68: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x117a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x117a6c: 0x93a90008  lbu         $t1, 0x8($sp)
    ctx->pc = 0x117a6cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117a70: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x117a74: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x117a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x117a78: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x117a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x117a7c: 0xa1202  srl         $v0, $t2, 8
    ctx->pc = 0x117a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x117a80: 0xa3402  srl         $a2, $t2, 16
    ctx->pc = 0x117a80u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x117a84: 0xa3e02  srl         $a3, $t2, 24
    ctx->pc = 0x117a84u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x117a88: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x117a88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x117a8c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x117a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x117a90: 0xa2260001  sb          $a2, 0x1($s1)
    ctx->pc = 0x117a90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x117a94: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x117a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117a98: 0xa2290002  sb          $t1, 0x2($s1)
    ctx->pc = 0x117a98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x117a9c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x117a9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x117aa0: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x117aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x117aa4: 0x2484c100  addiu       $a0, $a0, -0x3F00
    ctx->pc = 0x117aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    // 0x117aa8: 0xa2270000  sb          $a3, 0x0($s1)
    ctx->pc = 0x117aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x117aac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x117aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x117ab0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x117ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x117ab4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x117ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x117ab8: 0xa22a0006  sb          $t2, 0x6($s1)
    ctx->pc = 0x117ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 10));
    // 0x117abc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x117abcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117ac0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x117ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x117ac4: 0x262b0007  addiu       $t3, $s1, 0x7
    ctx->pc = 0x117ac4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x117ac8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x117ac8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117acc: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x117accu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x117ad0: 0x93a2000c  lbu         $v0, 0xC($sp)
    ctx->pc = 0x117ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x117ad4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x117ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x117ad8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x117ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x117adc: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x117adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x117ae0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x117ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x117ae4: 0x27ac0014  addiu       $t4, $sp, 0x14
    ctx->pc = 0x117ae4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x117ae8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117aec: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x117aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x117af0: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x117af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x117af4: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x117af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x117af8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117afc: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x117afcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x117b00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x117b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x117b04: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x117b04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x117b08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x117b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x117b0c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x117b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117b10: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x117b10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x117b14: 0x2522fffe  addiu       $v0, $t1, -0x2
    ctx->pc = 0x117b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
label_117b18:
    // 0x117b18: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x117b18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x117b1c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x117b1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x117b20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117b24: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x117b24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x117b28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117b2c: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x117b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x117b30: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x117b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x117b34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x117b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x117b38: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x117b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x117b3c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x117b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x117b40: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x117b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x117b44: 0x31260001  andi        $a2, $t1, 0x1
    ctx->pc = 0x117b44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x117b48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x117b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x117b4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x117b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x117b50: 0x2d28000c  sltiu       $t0, $t1, 0xC
    ctx->pc = 0x117b50u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x117b54: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x117b54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x117b58: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x117B58u;
    {
        const bool branch_taken_0x117b58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B58u;
        // 0x117b5c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b58) {
            ctx->pc = 0x117B98u;
            goto label_117b98;
        }
    }
    ctx->pc = 0x117B60u;
    // 0x117b60: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x117b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117b64: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x117b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x117b68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117b6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117b70: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x117b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x117b74: 0x1421004  sllv        $v0, $v0, $t2
    ctx->pc = 0x117b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x117b78: 0x1431804  sllv        $v1, $v1, $t2
    ctx->pc = 0x117b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 10) & 0x1F));
    // 0x117b7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x117b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117b80: 0x1421007  srav        $v0, $v0, $t2
    ctx->pc = 0x117b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x117b84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x117b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x117b88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x117b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x117b8c: 0x1431807  srav        $v1, $v1, $t2
    ctx->pc = 0x117b8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 10) & 0x1F));
    // 0x117b90: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x117b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117b94: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x117b94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_117b98:
    // 0x117b98: 0x1500ffdf  bnez        $t0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x117B98u;
    {
        const bool branch_taken_0x117b98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B98u;
        // 0x117b9c: 0x2522fffe  addiu       $v0, $t1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b98) {
            ctx->pc = 0x117B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117b18;
        }
    }
    ctx->pc = 0x117BA0u;
    // 0x117ba0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x117ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117ba4: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x117ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x117ba8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x117ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x117bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117bb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117bb4: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x117bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x117bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x117BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BB8u;
        // 0x117bbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117BC0u;
}
