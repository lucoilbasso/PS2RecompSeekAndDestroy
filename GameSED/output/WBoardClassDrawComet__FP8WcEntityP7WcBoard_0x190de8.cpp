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

// Function: WBoardClassDrawComet__FP8WcEntityP7WcBoard
// Address: 0x190de8 - 0x191230
void WBoardClassDrawComet__FP8WcEntityP7WcBoard_0x190de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WBoardClassDrawComet__FP8WcEntityP7WcBoard_0x190de8");
#endif

    switch (ctx->pc) {
        case 0x190e50u: goto label_190e50;
        case 0x190e58u: goto label_190e58;
        case 0x190e7cu: goto label_190e7c;
        case 0x190fd0u: goto label_190fd0;
        case 0x191178u: goto label_191178;
        case 0x191180u: goto label_191180;
        case 0x1911a0u: goto label_1911a0;
        case 0x1911a8u: goto label_1911a8;
        case 0x1911d0u: goto label_1911d0;
        default: break;
    }

    ctx->pc = 0x190de8u;

    // 0x190de8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x190de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x190dec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x190decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x190df0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x190df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x190df4: 0x2453d650  addiu       $s3, $v0, -0x29B0
    ctx->pc = 0x190df4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x190df8: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x190df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x190dfc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x190dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x190e00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x190e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e04: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x190e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x190e08: 0x26510150  addiu       $s1, $s2, 0x150
    ctx->pc = 0x190e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x190e0c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x190e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x190e10: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x190e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e14: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x190e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x190e18: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x190e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x190e1c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x190e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x190e20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190E20u;
    {
        const bool branch_taken_0x190e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E20u;
        // 0x190e24: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e20) {
            ctx->pc = 0x190E48u;
            goto label_190e48;
        }
    }
    ctx->pc = 0x190E28u;
    // 0x190e28: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x190e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x190e2c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x190e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190e30: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x190e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x190e34: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x190e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x190e38: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x190e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x190e3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x190E3Cu;
    {
        const bool branch_taken_0x190e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E3Cu;
        // 0x190e40: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e3c) {
            ctx->pc = 0x190E7Cu;
            goto label_190e7c;
        }
    }
    ctx->pc = 0x190E44u;
    // 0x190e44: 0x0  nop
    ctx->pc = 0x190e44u;
    // NOP
label_190e48:
    // 0x190e48: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190E48u;
    SET_GPR_U32(ctx, 31, 0x190E50u);
    ctx->pc = 0x190E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E48u;
    // 0x190e4c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190E48u, 0x190E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E50u;
label_190e50:
    // 0x190e50: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190E50u;
    SET_GPR_U32(ctx, 31, 0x190E58u);
    ctx->pc = 0x190E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E50u;
    // 0x190e54: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190E50u, 0x190E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E58u;
label_190e58:
    // 0x190e58: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x190e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x190e5c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x190e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x190e60: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x190e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x190e64: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x190e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x190e68: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x190e6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x190e70: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x190e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x190e74: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x190E74u;
    SET_GPR_U32(ctx, 31, 0x190E7Cu);
    ctx->pc = 0x190E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E74u;
    // 0x190e78: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x190E74u, 0x190E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E7Cu;
label_190e7c:
    // 0x190e7c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x190e7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e80: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190e84: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x190e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x190e88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x190e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x190e8c: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x190e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x190e90: 0xaea70008  sw          $a3, 0x8($s5)
    ctx->pc = 0x190e90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 7));
    // 0x190e94: 0x24ea0010  addiu       $t2, $a3, 0x10
    ctx->pc = 0x190e94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x190e98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x190E98u;
    {
        const bool branch_taken_0x190e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E98u;
        // 0x190e9c: 0x24f80020  addiu       $t8, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e98) {
            ctx->pc = 0x190EE0u;
            goto label_190ee0;
        }
    }
    ctx->pc = 0x190EA0u;
    // 0x190ea0: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x190ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x190ea4: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x190ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x190ea8: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x190ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x190eac: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x190eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x190eb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x190eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x190eb4: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x190eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x190eb8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x190eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x190ebc: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x190ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x190ec0: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x190ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x190ec4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x190ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x190ec8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x190ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x190ecc: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x190eccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x190ed0: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x190ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x190ed4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x190ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x190ed8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x190ED8u;
    {
        const bool branch_taken_0x190ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ED8u;
        // 0x190edc: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ed8) {
            ctx->pc = 0x190F10u;
            goto label_190f10;
        }
    }
    ctx->pc = 0x190EE0u;
label_190ee0:
    // 0x190ee0: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x190ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x190ee4: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x190ee8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x190ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x190eec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x190eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x190ef0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x190ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x190ef4: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x190ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x190ef8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x190ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x190efc: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x190efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x190f00: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x190f00u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x190f04: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x190f04u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x190f08: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x190f08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x190f0c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x190f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_190f10:
    // 0x190f10: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x190f10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x190f14: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x190f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x190f18: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x190f18u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x190f1c: 0x24f80010  addiu       $t8, $a3, 0x10
    ctx->pc = 0x190f1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x190f20: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x190f20u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x190f24: 0x27070020  addiu       $a3, $t8, 0x20
    ctx->pc = 0x190f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
    // 0x190f28: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x190f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x190f2c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x190f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x190f30: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190f30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190f34: 0x27090010  addiu       $t1, $t8, 0x10
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x190f38: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x190f38u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x190f3c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x190f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x190f40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x190f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x190f44: 0x34638007  ori         $v1, $v1, 0x8007
    ctx->pc = 0x190f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32775);
    // 0x190f48: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x190f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x190f4c: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x190f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x190f50: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x190f50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x190f54: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x190f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x190f58: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x190f58u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x190f5c: 0xe0c02d  daddu       $t8, $a3, $zero
    ctx->pc = 0x190f5cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f60: 0x30a1023  subu        $v0, $t8, $t2
    ctx->pc = 0x190f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 10)));
    // 0x190f64: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x190f64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x190f68: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x190f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x190f6c: 0xde280018  ld          $t0, 0x18($s1)
    ctx->pc = 0x190f6cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x190f70: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x190f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x190f74: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x190f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x190f78: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x190f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x190f7c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x190f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x190f80: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x190f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x190f84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190f88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x190f8c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x190f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x190f90: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x190f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x190f94: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x190f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x190f98: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x190f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x190f9c: 0x34c624e2  ori         $a2, $a2, 0x24E2
    ctx->pc = 0x190f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9442);
    // 0x190fa0: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x190fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x190fa4: 0xfd280000  sd          $t0, 0x0($t1)
    ctx->pc = 0x190fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x190fa8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x190fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190fac: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x190facu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x190fb0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190fb4: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x190fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x190fb8: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x190fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x190fbc: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x190fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x190fc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190fc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190fc8: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x190fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x190fcc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x190fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_190fd0:
    // 0x190fd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x190fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x190fd4: 0x197180  sll         $t6, $t9, 6
    ctx->pc = 0x190fd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 6));
    // 0x190fd8: 0x8e4d0278  lw          $t5, 0x278($s2)
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x190fdc: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x190fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190fe0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x190fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x190fe4: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x190fe4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x190fe8: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x190fe8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x190fec: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x190fecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x190ff0: 0x25aa0010  addiu       $t2, $t5, 0x10
    ctx->pc = 0x190ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x190ff4: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x190ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x190ff8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x190ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x190ffc: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x190ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191000: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x191000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191004: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x191004u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x191008: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x191008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19100c: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x19100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191010: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x191010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191014: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x191014u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x191018: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x191018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19101c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x19101cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x191020: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x191024: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x191024u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191028: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x191028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x19102c: 0x2f230007  sltiu       $v1, $t9, 0x7
    ctx->pc = 0x19102cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x191030: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x191030u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x191034: 0x3c80a  movz        $t9, $zero, $v1
    ctx->pc = 0x191034u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
    // 0x191038: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x191038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x19103c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19103cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x191040: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x191040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x191044: 0x2e900007  sltiu       $s0, $s4, 0x7
    ctx->pc = 0x191044u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x191048: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x191048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x19104c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x19104cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x191050: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191054: 0xfc960008  sd          $s6, 0x8($a0)
    ctx->pc = 0x191054u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 22));
    // 0x191058: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x191058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x19105c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x19105cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x191060: 0x79a20030  lq          $v0, 0x30($t5)
    ctx->pc = 0x191060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x191064: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x191064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191068: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x191068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19106c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x19106cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x191070: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x191070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x191074: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x191074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x191078: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x191078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x19107c: 0x8d4b0010  lw          $t3, 0x10($t2)
    ctx->pc = 0x19107cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x191080: 0x8d4c0014  lw          $t4, 0x14($t2)
    ctx->pc = 0x191080u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x191084: 0x8d470020  lw          $a3, 0x20($t2)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x191088: 0x8d480030  lw          $t0, 0x30($t2)
    ctx->pc = 0x191088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x19108c: 0x8d490034  lw          $t1, 0x34($t2)
    ctx->pc = 0x19108cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 52)));
    // 0x191090: 0xeb3823  subu        $a3, $a3, $t3
    ctx->pc = 0x191090u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x191094: 0x8d460024  lw          $a2, 0x24($t2)
    ctx->pc = 0x191094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x191098: 0x1684023  subu        $t0, $t3, $t0
    ctx->pc = 0x191098u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x19109c: 0x12c4823  subu        $t1, $t1, $t4
    ctx->pc = 0x19109cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1910a0: 0x72140  sll         $a0, $a3, 5
    ctx->pc = 0x1910a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1910a4: 0x1863023  subu        $a2, $t4, $a2
    ctx->pc = 0x1910a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x1910a8: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x1910a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1910ac: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x1910acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x1910b0: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1910b4: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1910b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1910b8: 0x79a70040  lq          $a3, 0x40($t5)
    ctx->pc = 0x1910b8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 13), 64)));
    // 0x1910bc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1910bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1910c0: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1910c4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1910c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1910c8: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1910c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1910cc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1910ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1910d0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1910d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1910d4: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1910d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1910d8: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x1910d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1910dc: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1910dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1910e0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1910e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1910e4: 0x1852823  subu        $a1, $t4, $a1
    ctx->pc = 0x1910e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1910e8: 0xad440020  sw          $a0, 0x20($t2)
    ctx->pc = 0x1910e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 4));
    // 0x1910ec: 0xad420030  sw          $v0, 0x30($t2)
    ctx->pc = 0x1910ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 2));
    // 0x1910f0: 0xad430034  sw          $v1, 0x34($t2)
    ctx->pc = 0x1910f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 3));
    // 0x1910f4: 0x7de70000  sq          $a3, 0x0($t7)
    ctx->pc = 0x1910f4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 7));
    // 0x1910f8: 0xad450024  sw          $a1, 0x24($t2)
    ctx->pc = 0x1910f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 5));
    // 0x1910fc: 0x8e440278  lw          $a0, 0x278($s2)
    ctx->pc = 0x1910fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x191100: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x191100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x191104: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191108: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x191108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x19110c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x19110cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x191110: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x191110u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x191114: 0x1600ffae  bnez        $s0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x191114u;
    {
        const bool branch_taken_0x191114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x191118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191114u;
        // 0x191118: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191114) {
            ctx->pc = 0x190FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190fd0;
        }
    }
    ctx->pc = 0x19111Cu;
    // 0x19111c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x19111cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191120: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x191124: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x191124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191128: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x191128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x19112c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x19112cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x191130: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x191130u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x191134: 0x3051823  subu        $v1, $t8, $a1
    ctx->pc = 0x191134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x191138: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x191138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19113c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19113cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x191140: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x191140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x191144: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x191144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x191148: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x191148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19114c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19114cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x191150: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x191150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x191154: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x191154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x191158: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x191158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19115c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x19115cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x191160: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x191160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x191164: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x191164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191168: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x191168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x19116c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x19116cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x191170: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191170u;
    SET_GPR_U32(ctx, 31, 0x191178u);
    ctx->pc = 0x191174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191170u;
    // 0x191174: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191170u, 0x191178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191178u;
label_191178:
    // 0x191178: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x191178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19117c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_191180:
    // 0x191180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191184: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x191184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x191188: 0x0  nop
    ctx->pc = 0x191188u;
    // NOP
    // 0x19118c: 0x0  nop
    ctx->pc = 0x19118cu;
    // NOP
    // 0x191190: 0x0  nop
    ctx->pc = 0x191190u;
    // NOP
    // 0x191194: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x191194u;
    {
        const bool branch_taken_0x191194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191194) {
            ctx->pc = 0x191180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191180;
        }
    }
    ctx->pc = 0x19119Cu;
    // 0x19119c: 0x0  nop
    ctx->pc = 0x19119cu;
    // NOP
label_1911a0:
    // 0x1911a0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1911A0u;
    SET_GPR_U32(ctx, 31, 0x1911A8u);
    ctx->pc = 0x1911A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911A0u;
    // 0x1911a4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1911A0u, 0x1911A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911A8u;
label_1911a8:
    // 0x1911a8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x1911a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x1911ac: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1911ACu;
    {
        const bool branch_taken_0x1911ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1911B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911ACu;
        // 0x1911b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911ac) {
            ctx->pc = 0x1911A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1911a0;
        }
    }
    ctx->pc = 0x1911B4u;
    // 0x1911b4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1911b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1911b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1911b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1911bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1911BCu;
    {
        const bool branch_taken_0x1911bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1911C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911BCu;
        // 0x1911c0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911bc) {
            ctx->pc = 0x1911D0u;
            goto label_1911d0;
        }
    }
    ctx->pc = 0x1911C4u;
    // 0x1911c4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1911c8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1911C8u;
    SET_GPR_U32(ctx, 31, 0x1911D0u);
    ctx->pc = 0x1911CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911C8u;
    // 0x1911cc: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1911C8u, 0x1911D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911D0u;
label_1911d0:
    // 0x1911d0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1911d4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1911d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1911d8: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1911d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1911dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1911dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1911e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1911e4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1911e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1911e8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1911e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1911ec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1911ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1911f0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1911f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1911f4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1911f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1911f8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1911f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1911fc: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1911fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x191200: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x191200u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x191204: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x191204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x191208: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x191208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19120c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x19120cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x191210: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x191210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191214: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x191214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x191218: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x191218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x19121c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x19121cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x191220: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x191220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x191224: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x191224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x191228: 0x3e00008  jr          $ra
    ctx->pc = 0x191228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191228u;
        // 0x19122c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191230u;
}
