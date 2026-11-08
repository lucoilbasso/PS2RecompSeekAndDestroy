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

// Function: DrawFunc__8WcSpriteP8WcEntity
// Address: 0x18ab68 - 0x18b2c0
void DrawFunc__8WcSpriteP8WcEntity_0x18ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__8WcSpriteP8WcEntity_0x18ab68");
#endif

    switch (ctx->pc) {
        case 0x18abf8u: goto label_18abf8;
        case 0x18ac00u: goto label_18ac00;
        case 0x18ac24u: goto label_18ac24;
        case 0x18ad9cu: goto label_18ad9c;
        case 0x18ada8u: goto label_18ada8;
        case 0x18af44u: goto label_18af44;
        case 0x18af58u: goto label_18af58;
        case 0x18b060u: goto label_18b060;
        case 0x18b084u: goto label_18b084;
        case 0x18b200u: goto label_18b200;
        case 0x18b208u: goto label_18b208;
        case 0x18b228u: goto label_18b228;
        case 0x18b230u: goto label_18b230;
        case 0x18b258u: goto label_18b258;
        default: break;
    }

    ctx->pc = 0x18ab68u;

    // 0x18ab68: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x18ab68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x18ab6c: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x18ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x18ab70: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x18ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x18ab74: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x18ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x18ab78: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x18ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x18ab7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18ab7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab80: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x18ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x18ab84: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18ab88: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x18ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x18ab8c: 0x249ed650  addiu       $fp, $a0, -0x29B0
    ctx->pc = 0x18ab8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x18ab90: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x18ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x18ab94: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x18ab94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab98: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x18ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x18ab9c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x18ab9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aba0: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x18aba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x18aba4: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x18aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x18aba8: 0x8ca6015c  lw          $a2, 0x15C($a1)
    ctx->pc = 0x18aba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x18abac: 0x96a20150  lhu         $v0, 0x150($s5)
    ctx->pc = 0x18abacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 336)));
    // 0x18abb0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x18abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18abb4: 0x8fc50094  lw          $a1, 0x94($fp)
    ctx->pc = 0x18abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x18abb8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18abb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18abbc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18abbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x18abc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18abc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18abc4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x18abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x18abc8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18ABC8u;
    {
        const bool branch_taken_0x18abc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABC8u;
        // 0x18abcc: 0x2c730001  sltiu       $s3, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abc8) {
            ctx->pc = 0x18ABF0u;
            goto label_18abf0;
        }
    }
    ctx->pc = 0x18ABD0u;
    // 0x18abd0: 0x8fc20098  lw          $v0, 0x98($fp)
    ctx->pc = 0x18abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 152)));
    // 0x18abd4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x18abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18abd8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18abdc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18abdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18abe0: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x18abe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x18abe4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18ABE4u;
    {
        const bool branch_taken_0x18abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABE4u;
        // 0x18abe8: 0xafc30098  sw          $v1, 0x98($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abe4) {
            ctx->pc = 0x18AC24u;
            goto label_18ac24;
        }
    }
    ctx->pc = 0x18ABECu;
    // 0x18abec: 0x0  nop
    ctx->pc = 0x18abecu;
    // NOP
label_18abf0:
    // 0x18abf0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18ABF0u;
    SET_GPR_U32(ctx, 31, 0x18ABF8u);
    ctx->pc = 0x18ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABF0u;
    // 0x18abf4: 0x8fc40084  lw          $a0, 0x84($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18ABF0u, 0x18ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABF8u;
label_18abf8:
    // 0x18abf8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18ABF8u;
    SET_GPR_U32(ctx, 31, 0x18AC00u);
    ctx->pc = 0x18ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABF8u;
    // 0x18abfc: 0x8fc40088  lw          $a0, 0x88($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18ABF8u, 0x18AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC00u;
label_18ac00:
    // 0x18ac00: 0x8fd0008c  lw          $s0, 0x8C($fp)
    ctx->pc = 0x18ac00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
    // 0x18ac04: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x18ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x18ac08: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x18ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18ac0c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x18ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18ac10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18ac14: 0x8fc40088  lw          $a0, 0x88($fp)
    ctx->pc = 0x18ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    // 0x18ac18: 0xafc5008c  sw          $a1, 0x8C($fp)
    ctx->pc = 0x18ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 5));
    // 0x18ac1c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18AC1Cu;
    SET_GPR_U32(ctx, 31, 0x18AC24u);
    ctx->pc = 0x18AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC1Cu;
    // 0x18ac20: 0xafc20080  sw          $v0, 0x80($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18AC1Cu, 0x18AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC24u;
label_18ac24:
    // 0x18ac24: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x18ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x18ac28: 0x26a80150  addiu       $t0, $s5, 0x150
    ctx->pc = 0x18ac28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x18ac2c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x18ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x18ac30: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x18ac30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18ac34: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x18ac34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ac38: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x18ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18ac3c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18ac40: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x18ac40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x18ac44: 0x24f40020  addiu       $s4, $a3, 0x20
    ctx->pc = 0x18ac44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x18ac48: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18AC48u;
    {
        const bool branch_taken_0x18ac48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC48u;
        // 0x18ac4c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac48) {
            ctx->pc = 0x18AC90u;
            goto label_18ac90;
        }
    }
    ctx->pc = 0x18AC50u;
    // 0x18ac50: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x18ac50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x18ac54: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x18ac54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18ac58: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x18ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18ac5c: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x18ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x18ac60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18ac64: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x18ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x18ac68: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18ac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18ac6c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x18ac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18ac70: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x18ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x18ac74: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x18ac74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x18ac78: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x18ac78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x18ac7c: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x18ac7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x18ac80: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x18ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x18ac84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18ac88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18AC88u;
    {
        const bool branch_taken_0x18ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC88u;
        // 0x18ac8c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac88) {
            ctx->pc = 0x18ACC0u;
            goto label_18acc0;
        }
    }
    ctx->pc = 0x18AC90u;
label_18ac90:
    // 0x18ac90: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x18ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x18ac94: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x18ac94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x18ac98: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x18ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18ac9c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18ac9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18aca0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x18aca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x18aca4: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x18aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18aca8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x18aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x18acac: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18acb0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x18acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x18acb4: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x18acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x18acb8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x18acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x18acbc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_18acc0:
    // 0x18acc0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x18ACC0u;
    {
        const bool branch_taken_0x18acc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACC0u;
        // 0x18acc4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acc0) {
            ctx->pc = 0x18ACF0u;
            goto label_18acf0;
        }
    }
    ctx->pc = 0x18ACC8u;
    // 0x18acc8: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x18acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x18accc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18ACCCu;
    {
        const bool branch_taken_0x18accc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACCCu;
        // 0x18acd0: 0xdf848c90  ld          $a0, -0x7370($gp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18accc) {
            ctx->pc = 0x18ACF4u;
            goto label_18acf4;
        }
    }
    ctx->pc = 0x18ACD4u;
    // 0x18acd4: 0xdf838c80  ld          $v1, -0x7380($gp)
    ctx->pc = 0x18acd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x18acd8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18acdc: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x18acdcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x18ace0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18ace0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18ace4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18ACE4u;
    {
        const bool branch_taken_0x18ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACE4u;
        // 0x18ace8: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ace4) {
            ctx->pc = 0x18AD08u;
            goto label_18ad08;
        }
    }
    ctx->pc = 0x18ACECu;
    // 0x18acec: 0x0  nop
    ctx->pc = 0x18acecu;
    // NOP
label_18acf0:
    // 0x18acf0: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x18acf0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
label_18acf4:
    // 0x18acf4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x18acf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acf8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18acfc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18acfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18ad00: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x18ad00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x18ad04: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x18ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_18ad08:
    // 0x18ad08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad0c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18ad0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18ad10: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x18ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x18ad14: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x18ad14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
    // 0x18ad18: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x18ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18ad1c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x18ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x18ad20: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18ad24: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x18ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x18ad28: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18ad2c: 0x26a60150  addiu       $a2, $s5, 0x150
    ctx->pc = 0x18ad2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x18ad30: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x18ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18ad34: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x18ad34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18ad38: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x18ad38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18ad3c: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x18ad3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x18ad40: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x18ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x18ad44: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18ad48: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x18ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x18ad4c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x18ad4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18ad50: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x18ad50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x18ad54: 0x26b00020  addiu       $s0, $s5, 0x20
    ctx->pc = 0x18ad54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x18ad58: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x18ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x18ad5c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x18ad5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x18ad60: 0x2891823  subu        $v1, $s4, $t1
    ctx->pc = 0x18ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x18ad64: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18ad68: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x18ad68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x18ad6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ad70: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x18ad70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x18ad74: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x18ad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x18ad78: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x18ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x18ad7c: 0xfd240008  sd          $a0, 0x8($t1)
    ctx->pc = 0x18ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x18ad80: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x18ad80u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18ad84: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x18ad84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18ad88: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x18ad8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AD8Cu;
    {
        const bool branch_taken_0x18ad8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD8Cu;
        // 0x18ad90: 0x3a0b82d  daddu       $s7, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad8c) {
            ctx->pc = 0x18AD9Cu;
            goto label_18ad9c;
        }
    }
    ctx->pc = 0x18AD94u;
    // 0x18ad94: 0xc061920  jal         func_186480
    ctx->pc = 0x18AD94u;
    SET_GPR_U32(ctx, 31, 0x18AD9Cu);
    ctx->pc = 0x18AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD94u;
    // 0x18ad98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18AD94u, 0x18AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD9Cu;
label_18ad9c:
    // 0x18ad9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ada0: 0xc061422  jal         func_185088
    ctx->pc = 0x18ADA0u;
    SET_GPR_U32(ctx, 31, 0x18ADA8u);
    ctx->pc = 0x18ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADA0u;
    // 0x18ada4: 0x24160010  addiu       $s6, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x18ADA0u, 0x18ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ADA8u;
label_18ada8:
    // 0x18ada8: 0x26a300e0  addiu       $v1, $s5, 0xE0
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x18adac: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x18adb0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x18adb4: 0x12600040  beqz        $s3, . + 4 + (0x40 << 2)
    ctx->pc = 0x18ADB4u;
    {
        const bool branch_taken_0x18adb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADB4u;
        // 0x18adb8: 0x44b00b  movn        $s6, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adb4) {
            ctx->pc = 0x18AEB8u;
            goto label_18aeb8;
        }
    }
    ctx->pc = 0x18ADBCu;
    // 0x18adbc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x18adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18adc0: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x18adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x18adc4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18adc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18adc8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x18adc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18adcc: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x18adccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18add0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x18add0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18add4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18add4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18add8: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x18add8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18addc: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x18addcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x18ade0: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x18ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18ade4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x18ade4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x18ade8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18ade8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18adec: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x18adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18adf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18adf4: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x18adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18adf8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18adf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18adfc: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x18adfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x18ae00: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18ae00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18ae04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x18ae04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18ae08: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x18ae08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x18ae0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18ae0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18ae10: 0xc78385a8  lwc1        $f3, -0x7A58($gp)
    ctx->pc = 0x18ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ae14: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x18ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x18ae18: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x18ae18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x18ae1c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x18ae1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x18ae20: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x18ae20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18ae24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18AE24u;
    {
        const bool branch_taken_0x18ae24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE24u;
        // 0x18ae28: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae24) {
            ctx->pc = 0x18AE30u;
            goto label_18ae30;
        }
    }
    ctx->pc = 0x18AE2Cu;
    // 0x18ae2c: 0xc6220218  lwc1        $f2, 0x218($s1)
    ctx->pc = 0x18ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18ae30:
    // 0x18ae30: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18ae34: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x18ae34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x18ae38: 0x2442e750  addiu       $v0, $v0, -0x18B0
    ctx->pc = 0x18ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
    // 0x18ae3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18ae3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21E750u));
    // 0x18ae40: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x18ae40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21E760u));
    // 0x18ae44: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x18ae44u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21E770u));
    // 0x18ae48: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x18ae48u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21E780u));
    // 0x18ae4c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x18ae4cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ae50: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x18ae50u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18ae54: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x18ae54u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18ae58: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x18ae58u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x18ae5c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18ae5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae60: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18ae60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae64: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18ae64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae68: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18ae68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18ae6c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x18ae6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae70: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x18ae70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae74: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x18ae74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae78: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x18ae78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18ae7c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x18ae7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae80: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x18ae80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae84: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x18ae84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae88: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x18ae88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x18ae8c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x18ae8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae90: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x18ae90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae94: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x18ae94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18ae98: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x18ae98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x18ae9c: 0xfaec0000  sqc2        $vf12, 0x0($s7)
    ctx->pc = 0x18ae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18aea0: 0xfaed0010  sqc2        $vf13, 0x10($s7)
    ctx->pc = 0x18aea0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x18aea4: 0xfaee0020  sqc2        $vf14, 0x20($s7)
    ctx->pc = 0x18aea4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x18aea8: 0xfaef0030  sqc2        $vf15, 0x30($s7)
    ctx->pc = 0x18aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x18aeac: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18AEACu;
    {
        const bool branch_taken_0x18aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEACu;
        // 0x18aeb0: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aeac) {
            ctx->pc = 0x18AF34u;
            goto label_18af34;
        }
    }
    ctx->pc = 0x18AEB4u;
    // 0x18aeb4: 0x0  nop
    ctx->pc = 0x18aeb4u;
    // NOP
label_18aeb8:
    // 0x18aeb8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18aebc: 0x2442e750  addiu       $v0, $v0, -0x18B0
    ctx->pc = 0x18aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
    // 0x18aec0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18aec0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21E750u));
    // 0x18aec4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x18aec4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21E760u));
    // 0x18aec8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x18aec8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21E770u));
    // 0x18aecc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x18aeccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21E780u));
    // 0x18aed0: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x18aed0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18aed4: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x18aed4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18aed8: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x18aed8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18aedc: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x18aedcu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x18aee0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18aee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aee4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18aee4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aee8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18aee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aeec: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18aeecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18aef0: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x18aef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aef4: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x18aef4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aef8: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x18aef8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18aefc: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x18aefcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18af00: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x18af00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18af04: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x18af04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18af08: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x18af08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18af0c: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x18af0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x18af10: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x18af10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18af14: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x18af14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18af18: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x18af18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18af1c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x18af1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x18af20: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x18af20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18af24: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x18af24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x18af28: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x18af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x18af2c: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x18af2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x18af30: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x18af30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18af34:
    // 0x18af34: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18af34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af3c: 0xc062dd4  jal         func_18B750
    ctx->pc = 0x18AF3Cu;
    SET_GPR_U32(ctx, 31, 0x18AF44u);
    ctx->pc = 0x18AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF3Cu;
    // 0x18af40: 0x26a60180  addiu       $a2, $s5, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B750u, 0x18AF3Cu, 0x18AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF44u;
label_18af44:
    // 0x18af44: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18af44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af48: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x18af48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18af4c: 0x26a60190  addiu       $a2, $s5, 0x190
    ctx->pc = 0x18af4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x18af50: 0xc062dd4  jal         func_18B750
    ctx->pc = 0x18AF50u;
    SET_GPR_U32(ctx, 31, 0x18AF58u);
    ctx->pc = 0x18AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF50u;
    // 0x18af54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B750u, 0x18AF50u, 0x18AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF58u;
label_18af58:
    // 0x18af58: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x18af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x18af5c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x18af5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x18af60: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x18AF60u;
    {
        const bool branch_taken_0x18af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af60) {
            ctx->pc = 0x18AF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AF60u;
            // 0x18af64: 0x27b100a0  addiu       $s1, $sp, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B038u;
            goto label_18b038;
        }
    }
    ctx->pc = 0x18AF68u;
    // 0x18af68: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x18af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x18af6c: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x18AF6Cu;
    {
        const bool branch_taken_0x18af6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af6c) {
            ctx->pc = 0x18AF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AF6Cu;
            // 0x18af70: 0x27b100a0  addiu       $s1, $sp, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B038u;
            goto label_18b038;
        }
    }
    ctx->pc = 0x18AF74u;
    // 0x18af74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18af78: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x18af78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x18af7c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x18af7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18af80: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x18af80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x18af84: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x18af84u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x18af88: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x18af88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18af8c: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x18af8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x18af90: 0x1613fc  dsll32      $v0, $s6, 15
    ctx->pc = 0x18af90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 15));
    // 0x18af94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18af94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af98: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18af98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18af9c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x18af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x18afa0: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x18afa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x18afa4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18afa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18afa8: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x18afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x18afac: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x18afacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x18afb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18afb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18afb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18afb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18afb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18afbc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18afbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18afc0: 0x8ea50154  lw          $a1, 0x154($s5)
    ctx->pc = 0x18afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
    // 0x18afc4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x18afc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afc8: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x18afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x18afcc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18afd0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x18afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x18afd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afd8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x18afd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18afdc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18afdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18afe0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18afe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afe4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18afe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18afe8: 0xc6a001b0  lwc1        $f0, 0x1B0($s5)
    ctx->pc = 0x18afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18afec: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x18afecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aff0: 0xc6a101b4  lwc1        $f1, 0x1B4($s5)
    ctx->pc = 0x18aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aff4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18aff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18aff8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18aff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18affc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18affcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b000: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18b000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18b004: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b008: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x18b008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x18b00c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x18b00cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b010: 0xc6a101bc  lwc1        $f1, 0x1BC($s5)
    ctx->pc = 0x18b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b014: 0xc6a001b8  lwc1        $f0, 0x1B8($s5)
    ctx->pc = 0x18b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b018: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18b018u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18b01c: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x18b01cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18b020: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18b020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18b024: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x18b024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18b028: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x18b028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b02c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x18B02Cu;
    {
        const bool branch_taken_0x18b02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B02Cu;
        // 0x18b030: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b02c) {
            ctx->pc = 0x18B1A4u;
            goto label_18b1a4;
        }
    }
    ctx->pc = 0x18B034u;
    // 0x18b034: 0x0  nop
    ctx->pc = 0x18b034u;
    // NOP
label_18b038:
    // 0x18b038: 0x26b00190  addiu       $s0, $s5, 0x190
    ctx->pc = 0x18b038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x18b03c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x18b03cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b040: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x18b040u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x18b044: 0xc6a00184  lwc1        $f0, 0x184($s5)
    ctx->pc = 0x18b044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b048: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x18b048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18b04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b050: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18b050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b054: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18b054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b058: 0xc062dd4  jal         func_18B750
    ctx->pc = 0x18B058u;
    SET_GPR_U32(ctx, 31, 0x18B060u);
    ctx->pc = 0x18B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B058u;
    // 0x18b05c: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B750u, 0x18B058u, 0x18B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B060u;
label_18b060:
    // 0x18b060: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x18b060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b064: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x18b064u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x18b068: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x18b068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18b06c: 0xc6a00180  lwc1        $f0, 0x180($s5)
    ctx->pc = 0x18b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b070: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18b070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18b074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18b078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b07c: 0xc062dd4  jal         func_18B750
    ctx->pc = 0x18B07Cu;
    SET_GPR_U32(ctx, 31, 0x18B084u);
    ctx->pc = 0x18B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B07Cu;
    // 0x18b080: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B750u, 0x18B07Cu, 0x18B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B084u;
label_18b084:
    // 0x18b084: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b088: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x18b088u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x18b08c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b090: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18b090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18b094: 0x34422424  ori         $v0, $v0, 0x2424
    ctx->pc = 0x18b094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9252);
    // 0x18b098: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18b098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18b09c: 0x3442242e  ori         $v0, $v0, 0x242E
    ctx->pc = 0x18b09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9262);
    // 0x18b0a0: 0x3c049000  lui         $a0, 0x9000
    ctx->pc = 0x18b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36864 << 16));
    // 0x18b0a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18b0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18b0a8: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x18b0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x18b0ac: 0x161bfc  dsll32      $v1, $s6, 15
    ctx->pc = 0x18b0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 15));
    // 0x18b0b0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x18b0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18b0b4: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x18b0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x18b0b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18b0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18b0bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18b0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0c0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b0c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b0c4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x18b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x18b0c8: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x18b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x18b0cc: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x18b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x18b0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b0d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b0d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18b0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b0dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x18b0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0e0: 0x8ea50154  lw          $a1, 0x154($s5)
    ctx->pc = 0x18b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
    // 0x18b0e4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b0e8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x18b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x18b0ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18b0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0f0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x18b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x18b0f4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b0f8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x18b0f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18b0fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18b0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b100: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b100u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b104: 0xc6a001b0  lwc1        $f0, 0x1B0($s5)
    ctx->pc = 0x18b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b108: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18b108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b10c: 0xc6a101b4  lwc1        $f1, 0x1B4($s5)
    ctx->pc = 0x18b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b110: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b114: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18b114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18b118: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18b118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b11c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18b11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18b120: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b124: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x18b124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x18b128: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x18b128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b12c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b12cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b130: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x18b130u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b134: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x18b134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b138: 0xc6a001b8  lwc1        $f0, 0x1B8($s5)
    ctx->pc = 0x18b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b13c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b13cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b140: 0xc6a101b4  lwc1        $f1, 0x1B4($s5)
    ctx->pc = 0x18b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b144: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18b144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b148: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18b148u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18b14c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b14cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b150: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x18b150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x18b154: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18b154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b158: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x18b158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x18b15c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b15cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b160: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x18b160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x18b164: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x18b164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b168: 0xc6a001b0  lwc1        $f0, 0x1B0($s5)
    ctx->pc = 0x18b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b16c: 0xc6a101bc  lwc1        $f1, 0x1BC($s5)
    ctx->pc = 0x18b16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b170: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x18b170u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x18b174: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18b174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18b178: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x18b178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18b17c: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x18b17cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18b180: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x18b180u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b184: 0xc6a101bc  lwc1        $f1, 0x1BC($s5)
    ctx->pc = 0x18b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b188: 0xc6a001b8  lwc1        $f0, 0x1B8($s5)
    ctx->pc = 0x18b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b18c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x18b190: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x18b190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x18b194: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18b194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18b198: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18b198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18b19c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x18b19cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b1a0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_18b1a4:
    // 0x18b1a4: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x18b1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18b1a8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x18b1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x18b1ac: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x18b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x18b1b0: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x18b1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x18b1b4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x18b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18b1b8: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x18b1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x18b1bc: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x18b1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1c0: 0x2851823  subu        $v1, $s4, $a1
    ctx->pc = 0x18b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x18b1c4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18b1c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b1cc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x18b1d0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x18b1d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b1d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x18b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x18b1d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18b1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18b1dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18b1e0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18b1e4: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x18b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x18b1e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b1ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18b1f0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x18b1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x18b1f4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x18b1f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18B1F8u;
    SET_GPR_U32(ctx, 31, 0x18B200u);
    ctx->pc = 0x18B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1F8u;
    // 0x18b1fc: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18B1F8u, 0x18B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B200u;
label_18b200:
    // 0x18b200: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18b200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18b204: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x18b204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_18b208:
    // 0x18b208: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b20c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18b20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18b210: 0x0  nop
    ctx->pc = 0x18b210u;
    // NOP
    // 0x18b214: 0x0  nop
    ctx->pc = 0x18b214u;
    // NOP
    // 0x18b218: 0x0  nop
    ctx->pc = 0x18b218u;
    // NOP
    // 0x18b21c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18B21Cu;
    {
        const bool branch_taken_0x18b21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b21c) {
            ctx->pc = 0x18B208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B224u;
    // 0x18b224: 0x0  nop
    ctx->pc = 0x18b224u;
    // NOP
label_18b228:
    // 0x18b228: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x18B228u;
    SET_GPR_U32(ctx, 31, 0x18B230u);
    ctx->pc = 0x18B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B228u;
    // 0x18b22c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x18B228u, 0x18B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B230u;
label_18b230:
    // 0x18b230: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x18b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x18b234: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18B234u;
    {
        const bool branch_taken_0x18b234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B234u;
        // 0x18b238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b234) {
            ctx->pc = 0x18B228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b228;
        }
    }
    ctx->pc = 0x18B23Cu;
    // 0x18b23c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x18b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x18b240: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18b240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18b244: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B244u;
    {
        const bool branch_taken_0x18b244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B244u;
        // 0x18b248: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b244) {
            ctx->pc = 0x18B258u;
            goto label_18b258;
        }
    }
    ctx->pc = 0x18B24Cu;
    // 0x18b24c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x18b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x18b250: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18B250u;
    SET_GPR_U32(ctx, 31, 0x18B258u);
    ctx->pc = 0x18B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B250u;
    // 0x18b254: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18B250u, 0x18B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B258u;
label_18b258:
    // 0x18b258: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x18b258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x18b25c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x18b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x18b260: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18b264: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18b264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18b268: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18b268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b26c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18b26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18b270: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x18b274: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x18b274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18b278: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x18b278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x18b27c: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x18b27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x18b280: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x18b280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x18b284: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x18b284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x18b288: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x18b288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x18b28c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18b28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18b290: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x18b290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x18b294: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x18b294u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x18b298: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x18b298u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18b29c: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x18b29cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x18b2a0: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x18b2a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x18b2a4: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x18b2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x18b2a8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x18b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x18b2ac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x18b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x18b2b0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x18b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x18b2b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18b2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x18B2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2B8u;
        // 0x18b2bc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B2C0u;
}
