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

// Function: WSettingMakeSendPacket__FP9WcSettingP10Q_WORDDATA
// Address: 0x195d90 - 0x195ffc
void WSettingMakeSendPacket__FP9WcSettingP10Q_WORDDATA_0x195d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSettingMakeSendPacket__FP9WcSettingP10Q_WORDDATA_0x195d90");
#endif

    switch (ctx->pc) {
        case 0x195e0cu: goto label_195e0c;
        case 0x195e88u: goto label_195e88;
        case 0x195f7cu: goto label_195f7c;
        case 0x195f88u: goto label_195f88;
        default: break;
    }

    ctx->pc = 0x195d90u;

    // 0x195d90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x195d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x195d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d98: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x195d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x195d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195da0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x195da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x195da4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195da8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x195da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x195dac: 0x26120150  addiu       $s2, $s0, 0x150
    ctx->pc = 0x195dacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x195db0: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x195db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x195db4: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x195db4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x195db8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x195db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x195dbc: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x195dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x195dc0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x195dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x195dc4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x195dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x195dc8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x195dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x195dcc: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x195dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x195dd0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x195dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x195dd4: 0x8e03019c  lw          $v1, 0x19C($s0)
    ctx->pc = 0x195dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x195dd8: 0x8c55001c  lw          $s5, 0x1C($v0)
    ctx->pc = 0x195dd8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x195ddc: 0x94560010  lhu         $s6, 0x10($v0)
    ctx->pc = 0x195ddcu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x195de0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x195de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x195de4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195DE4u;
    {
        const bool branch_taken_0x195de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DE4u;
        // 0x195de8: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195de4) {
            ctx->pc = 0x195DFCu;
            goto label_195dfc;
        }
    }
    ctx->pc = 0x195DECu;
    // 0x195dec: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x195decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x195df0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x195df4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x195df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x195df8: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x195df8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_195dfc:
    // 0x195dfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e04: 0xc066426  jal         func_199098
    ctx->pc = 0x195E04u;
    SET_GPR_U32(ctx, 31, 0x195E0Cu);
    ctx->pc = 0x195E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195E04u;
    // 0x195e08: 0xafa60068  sw          $a2, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199098u, 0x195E04u, 0x195E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E0Cu;
label_195e0c:
    // 0x195e0c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x195e0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x195e10: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x195e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x195e14: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x195e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x195e18: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x195e18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e1c: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x195e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x195e20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195E20u;
    {
        const bool branch_taken_0x195e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E20u;
        // 0x195e24: 0x241e004d  addiu       $fp, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e20) {
            ctx->pc = 0x195E38u;
            goto label_195e38;
        }
    }
    ctx->pc = 0x195E28u;
    // 0x195e28: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x195e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x195e2c: 0x241e006d  addiu       $fp, $zero, 0x6D
    ctx->pc = 0x195e2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x195e30: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x195e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x195e34: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x195e34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_195e38:
    // 0x195e38: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x195e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x195e3c: 0x30840200  andi        $a0, $a0, 0x200
    ctx->pc = 0x195e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x195e40: 0x36820040  ori         $v0, $s4, 0x40
    ctx->pc = 0x195e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)64);
    // 0x195e44: 0x8e100160  lw          $s0, 0x160($s0)
    ctx->pc = 0x195e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x195e48: 0x43a00b  movn        $s4, $v0, $v1
    ctx->pc = 0x195e48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x195e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x195e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e50: 0x36820200  ori         $v0, $s4, 0x200
    ctx->pc = 0x195e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)512);
    // 0x195e54: 0x12c00058  beqz        $s6, . + 4 + (0x58 << 2)
    ctx->pc = 0x195E54u;
    {
        const bool branch_taken_0x195e54 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E54u;
        // 0x195e58: 0x44a00b  movn        $s4, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e54) {
            ctx->pc = 0x195FB8u;
            goto label_195fb8;
        }
    }
    ctx->pc = 0x195E5Cu;
    // 0x195e5c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x195e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x195e60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x195e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195e64: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x195e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x195e68: 0x1e13fc  dsll32      $v0, $fp, 15
    ctx->pc = 0x195e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 15));
    // 0x195e6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195e70: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x195e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195e74: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x195e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x195e78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x195e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x195e7c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x195e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e80: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x195e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x195e84: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x195e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195e88:
    // 0x195e88: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x195e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x195e8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x195e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195e90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x195e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x195e94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x195e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e98: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x195e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195e9c: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x195e9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x195ea0: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x195EA0u;
    {
        const bool branch_taken_0x195ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x195EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EA0u;
        // 0x195ea4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ea0) {
            ctx->pc = 0x195EE0u;
            goto label_195ee0;
        }
    }
    ctx->pc = 0x195EA8u;
    // 0x195ea8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x195ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x195eac: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x195eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x195eb0: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x195eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x195eb4: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x195eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x195eb8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x195eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x195ebc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x195ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x195ec0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x195ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195ec4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x195ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x195ec8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195ecc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x195eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195ed0: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x195ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x195ed4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195ed8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x195ED8u;
    {
        const bool branch_taken_0x195ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ED8u;
        // 0x195edc: 0x34e70001  ori         $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ed8) {
            ctx->pc = 0x195EECu;
            goto label_195eec;
        }
    }
    ctx->pc = 0x195EE0u;
label_195ee0:
    // 0x195ee0: 0xdfa20070  ld          $v0, 0x70($sp)
    ctx->pc = 0x195ee0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x195ee4: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x195ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x195ee8: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x195ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
label_195eec:
    // 0x195eec: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x195eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x195ef0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x195ef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195ef4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x195ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x195ef8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x195EF8u;
    {
        const bool branch_taken_0x195ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x195EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EF8u;
        // 0x195efc: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ef8) {
            ctx->pc = 0x195F30u;
            goto label_195f30;
        }
    }
    ctx->pc = 0x195F00u;
    // 0x195f00: 0x1077000b  beq         $v1, $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x195F00u;
    {
        const bool branch_taken_0x195f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x195F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F00u;
        // 0x195f04: 0x26a60030  addiu       $a2, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f00) {
            ctx->pc = 0x195F30u;
            goto label_195f30;
        }
    }
    ctx->pc = 0x195F08u;
    // 0x195f08: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x195f08u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x195f0c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x195f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195f10: 0x171140  sll         $v0, $s7, 5
    ctx->pc = 0x195f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x195f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195f18: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x195f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x195f1c: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x195f1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x195f20: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x195f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x195f24: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x195f24u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x195f28: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x195f28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x195f2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x195f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_195f30:
    // 0x195f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195F30u;
    {
        const bool branch_taken_0x195f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F30u;
        // 0x195f34: 0x34e30080  ori         $v1, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f30) {
            ctx->pc = 0x195F44u;
            goto label_195f44;
        }
    }
    ctx->pc = 0x195F38u;
    // 0x195f38: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x195f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x195f3c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x195f40: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x195f40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_195f44:
    // 0x195f44: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x195f44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x195f48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x195f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f4c: 0x34e30040  ori         $v1, $a3, 0x40
    ctx->pc = 0x195f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x195f50: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x195f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x195f54: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x195f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x195f58: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x195f58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x195f5c: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x195f5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x195f60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x195f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f64: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x195f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x195f68: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x195f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x195f6c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x195f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x195f70: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x195f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x195f74: 0xc066442  jal         func_199108
    ctx->pc = 0x195F74u;
    SET_GPR_U32(ctx, 31, 0x195F7Cu);
    ctx->pc = 0x195F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F74u;
    // 0x195f78: 0x9607000a  lhu         $a3, 0xA($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199108u, 0x195F74u, 0x195F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F7Cu;
label_195f7c:
    // 0x195f7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x195f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x195f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_195f88:
    // 0x195f88: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x195f88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195f8c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x195f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x195f90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x195f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x195f94: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x195f94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x195f98: 0x0  nop
    ctx->pc = 0x195f98u;
    // NOP
    // 0x195f9c: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195F9Cu;
    {
        const bool branch_taken_0x195f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x195FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F9Cu;
        // 0x195fa0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f9c) {
            ctx->pc = 0x195F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195f88;
        }
    }
    ctx->pc = 0x195FA4u;
    // 0x195fa4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x195fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x195fa8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x195fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x195fac: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x195facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x195fb0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x195FB0u;
    {
        const bool branch_taken_0x195fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FB0u;
        // 0x195fb4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fb0) {
            ctx->pc = 0x195E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195e88;
        }
    }
    ctx->pc = 0x195FB8u;
label_195fb8:
    // 0x195fb8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x195fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x195fbc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x195fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x195fc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x195fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x195fc4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x195fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x195fc8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x195fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x195fcc: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x195fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195fd0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x195fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195fd4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x195fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195fd8: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x195fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x195fdc: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x195fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x195fe0: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x195fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x195fe4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x195fe4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x195fe8: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x195fe8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x195fec: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x195fecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x195ff0: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x195ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x195ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x195FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FF4u;
        // 0x195ff8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195FFCu;
}
