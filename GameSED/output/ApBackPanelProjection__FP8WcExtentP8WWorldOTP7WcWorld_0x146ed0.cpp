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

// Function: ApBackPanelProjection__FP8WcExtentP8WWorldOTP7WcWorld
// Address: 0x146ed0 - 0x1473a0
void ApBackPanelProjection__FP8WcExtentP8WWorldOTP7WcWorld_0x146ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBackPanelProjection__FP8WcExtentP8WWorldOTP7WcWorld_0x146ed0");
#endif

    switch (ctx->pc) {
        case 0x146f28u: goto label_146f28;
        case 0x146f98u: goto label_146f98;
        case 0x146facu: goto label_146fac;
        case 0x146fbcu: goto label_146fbc;
        case 0x146fc8u: goto label_146fc8;
        case 0x146fe8u: goto label_146fe8;
        case 0x146ff0u: goto label_146ff0;
        case 0x147030u: goto label_147030;
        case 0x147098u: goto label_147098;
        case 0x1470a0u: goto label_1470a0;
        case 0x1470c4u: goto label_1470c4;
        case 0x147180u: goto label_147180;
        case 0x1471a0u: goto label_1471a0;
        case 0x1471c0u: goto label_1471c0;
        case 0x1471e0u: goto label_1471e0;
        case 0x147200u: goto label_147200;
        case 0x147228u: goto label_147228;
        case 0x147238u: goto label_147238;
        case 0x147294u: goto label_147294;
        case 0x1472e8u: goto label_1472e8;
        case 0x1472f0u: goto label_1472f0;
        case 0x147310u: goto label_147310;
        case 0x147318u: goto label_147318;
        case 0x147340u: goto label_147340;
        default: break;
    }

    ctx->pc = 0x146ed0u;

    // 0x146ed0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x146ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x146ed4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x146ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x146ed8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x146ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x146edc: 0x245626c0  addiu       $s6, $v0, 0x26C0
    ctx->pc = 0x146edcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x146ee0: 0x8ec20514  lw          $v0, 0x514($s6)
    ctx->pc = 0x146ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x262BD4u));
    // 0x146ee4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x146ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x146ee8: 0x26d10540  addiu       $s1, $s6, 0x540
    ctx->pc = 0x146ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1344));
    // 0x146eec: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x146eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x146ef0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x146ef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ef4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x146ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x146ef8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x146ef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146efc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x146efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x146f00: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x146f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x146f04: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x146f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x146f08: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x146F08u;
    {
        const bool branch_taken_0x146f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F08u;
        // 0x146f0c: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f08) {
            ctx->pc = 0x146FA0u;
            goto label_146fa0;
        }
    }
    ctx->pc = 0x146F10u;
    // 0x146f10: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x146f10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x146f14: 0x36100540  ori         $s0, $s0, 0x540
    ctx->pc = 0x146f14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1344);
    // 0x146f18: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x146f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x146f1c: 0x26c50070  addiu       $a1, $s6, 0x70
    ctx->pc = 0x146f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x146f20: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x146F20u;
    SET_GPR_U32(ctx, 31, 0x146F28u);
    ctx->pc = 0x146F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F20u;
    // 0x146f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x146F20u, 0x146F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F28u;
label_146f28:
    // 0x146f28: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x146f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x146f2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x146f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146f34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x146f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f38: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146f3c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x146f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x146f40: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x146f40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x146f44: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x146f44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x146f48: 0x35088001  ori         $t0, $t0, 0x8001
    ctx->pc = 0x146f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32769);
    // 0x146f4c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x146f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x146f50: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x146f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x146f54: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x146f54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x146f58: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x146f58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x146f5c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x146f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x146f60: 0xfce80000  sd          $t0, 0x0($a3)
    ctx->pc = 0x146f60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 8));
    // 0x146f64: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x146f64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x146f68: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x146f68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x146f6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146f70: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x146f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x146f74: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x146f74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x146f78: 0x28420051  slti        $v0, $v0, 0x51
    ctx->pc = 0x146f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x146f7c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x146F7Cu;
    {
        const bool branch_taken_0x146f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146f7c) {
            ctx->pc = 0x146F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146F7Cu;
            // 0x146f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146F9Cu;
            goto label_146f9c;
        }
    }
    ctx->pc = 0x146F84u;
    // 0x146f84: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x146f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x146f88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x146f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f8c: 0x24a56b10  addiu       $a1, $a1, 0x6B10
    ctx->pc = 0x146f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27408));
    // 0x146f90: 0xc068186  jal         func_1A0618
    ctx->pc = 0x146F90u;
    SET_GPR_U32(ctx, 31, 0x146F98u);
    ctx->pc = 0x146F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F90u;
    // 0x146f94: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x146F90u, 0x146F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F98u;
label_146f98:
    // 0x146f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146f9c:
    // 0x146f9c: 0xaec20514  sw          $v0, 0x514($s6)
    ctx->pc = 0x146f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1300), GPR_U32(ctx, 2));
label_146fa0:
    // 0x146fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x146fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fa4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x146FA4u;
    SET_GPR_U32(ctx, 31, 0x146FACu);
    ctx->pc = 0x146FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146FA4u;
    // 0x146fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x146FA4u, 0x146FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FACu;
label_146fac:
    // 0x146fac: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x146facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x146fb0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x146fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fb4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x146FB4u;
    SET_GPR_U32(ctx, 31, 0x146FBCu);
    ctx->pc = 0x146FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146FB4u;
    // 0x146fb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x146FB4u, 0x146FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FBCu;
label_146fbc:
    // 0x146fbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x146fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x146fc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x146fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fc4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x146fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_146fc8:
    // 0x146fc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x146fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146fcc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x146fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x146fd0: 0x0  nop
    ctx->pc = 0x146fd0u;
    // NOP
    // 0x146fd4: 0x0  nop
    ctx->pc = 0x146fd4u;
    // NOP
    // 0x146fd8: 0x0  nop
    ctx->pc = 0x146fd8u;
    // NOP
    // 0x146fdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x146FDCu;
    {
        const bool branch_taken_0x146fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146fdc) {
            ctx->pc = 0x146FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146fc8;
        }
    }
    ctx->pc = 0x146FE4u;
    // 0x146fe4: 0x0  nop
    ctx->pc = 0x146fe4u;
    // NOP
label_146fe8:
    // 0x146fe8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x146FE8u;
    SET_GPR_U32(ctx, 31, 0x146FF0u);
    ctx->pc = 0x146FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146FE8u;
    // 0x146fec: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x146FE8u, 0x146FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FF0u;
label_146ff0:
    // 0x146ff0: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x146ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x146ff4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x146FF4u;
    {
        const bool branch_taken_0x146ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x146FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FF4u;
        // 0x146ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ff4) {
            ctx->pc = 0x146FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146fe8;
        }
    }
    ctx->pc = 0x146FFCu;
    // 0x146ffc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x146ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147000: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x147000u;
    {
        const bool branch_taken_0x147000 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x147004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147000u;
        // 0x147004: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147000) {
            ctx->pc = 0x147020u;
            goto label_147020;
        }
    }
    ctx->pc = 0x147008u;
    // 0x147008: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x147008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x14700c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14700cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x147010: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x147010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x147014: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x147014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x147018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x147018u;
    {
        const bool branch_taken_0x147018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147018u;
        // 0x14701c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147018) {
            ctx->pc = 0x147030u;
            goto label_147030;
        }
    }
    ctx->pc = 0x147020u;
label_147020:
    // 0x147020: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147020u;
    {
        const bool branch_taken_0x147020 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x147020) {
            ctx->pc = 0x147024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147020u;
            // 0x147024: 0x8f848c54  lw          $a0, -0x73AC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147034u;
            goto label_147034;
        }
    }
    ctx->pc = 0x147028u;
    // 0x147028: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x147028u;
    SET_GPR_U32(ctx, 31, 0x147030u);
    ctx->pc = 0x14702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147028u;
    // 0x14702c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x147028u, 0x147030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147030u;
label_147030:
    // 0x147030: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x147030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_147034:
    // 0x147034: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x147034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147038: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x147038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x14703c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x14703cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x147040: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x147040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147044: 0x2473d650  addiu       $s3, $v1, -0x29B0
    ctx->pc = 0x147044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x147048: 0xac900030  sw          $s0, 0x30($a0)
    ctx->pc = 0x147048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 16));
    // 0x14704c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x147050: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x147050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x147054: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x147054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x147058: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x147058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14705c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x147060: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x147060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x147064: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x147064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x147068: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x147068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x14706c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14706Cu;
    {
        const bool branch_taken_0x14706c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14706Cu;
        // 0x147070: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14706c) {
            ctx->pc = 0x147090u;
            goto label_147090;
        }
    }
    ctx->pc = 0x147074u;
    // 0x147074: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x147074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x147078: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x147078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14707c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x147080: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x147080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x147084: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x147088: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x147088u;
    {
        const bool branch_taken_0x147088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147088u;
        // 0x14708c: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147088) {
            ctx->pc = 0x1470C4u;
            goto label_1470c4;
        }
    }
    ctx->pc = 0x147090u;
label_147090:
    // 0x147090: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147090u;
    SET_GPR_U32(ctx, 31, 0x147098u);
    ctx->pc = 0x147094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147090u;
    // 0x147094: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147090u, 0x147098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147098u;
label_147098:
    // 0x147098: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147098u;
    SET_GPR_U32(ctx, 31, 0x1470A0u);
    ctx->pc = 0x14709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147098u;
    // 0x14709c: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147098u, 0x1470A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470A0u;
label_1470a0:
    // 0x1470a0: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x1470a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1470a4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1470a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1470a8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1470a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1470ac: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1470acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1470b0: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x1470b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x1470b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1470b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1470b8: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x1470b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x1470bc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1470BCu;
    SET_GPR_U32(ctx, 31, 0x1470C4u);
    ctx->pc = 0x1470C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470BCu;
    // 0x1470c0: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1470BCu, 0x1470C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470C4u;
label_1470c4:
    // 0x1470c4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1470c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470c8: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1470c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1470cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1470ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1470d0: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x1470d4: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x1470d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x1470d8: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1470d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1470dc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1470dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1470e0: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x1470e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x1470e4: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x1470e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1470e8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1470e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1470ec: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x1470ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1470f0: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1470f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1470f4: 0x2271823  subu        $v1, $s1, $a3
    ctx->pc = 0x1470f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1470f8: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1470f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1470fc: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1470fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x147100: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x147100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x147104: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x147104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x147108: 0x244a0030  addiu       $t2, $v0, 0x30
    ctx->pc = 0x147108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14710c: 0xdf8d8c80  ld          $t5, -0x7380($gp)
    ctx->pc = 0x14710cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x147110: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x147110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x147114: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x147114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x147118: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x147118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14711c: 0x24490040  addiu       $t1, $v0, 0x40
    ctx->pc = 0x14711cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x147120: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x147120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x147124: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x147124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x147128: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x147128u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x14712c: 0x356b8080  ori         $t3, $t3, 0x8080
    ctx->pc = 0x14712cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32896);
    // 0x147130: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x147130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x147134: 0x240c0044  addiu       $t4, $zero, 0x44
    ctx->pc = 0x147134u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x147138: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x147138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x14713c: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x14713cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x147140: 0xfd4d0000  sd          $t5, 0x0($t2)
    ctx->pc = 0x147140u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 13));
    // 0x147144: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x147144u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x147148: 0xfd2b0000  sd          $t3, 0x0($t1)
    ctx->pc = 0x147148u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 11));
    // 0x14714c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x14714cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x147150: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x147150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x147154: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x147154u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x147158: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x147158u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x14715c: 0x8ec300b0  lw          $v1, 0xB0($s6)
    ctx->pc = 0x14715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
    // 0x147160: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x147160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x147164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147168: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x147168u;
    {
        const bool branch_taken_0x147168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147168u;
        // 0x14716c: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147168) {
            ctx->pc = 0x147188u;
            goto label_147188;
        }
    }
    ctx->pc = 0x147170u;
    // 0x147170: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x147170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147174: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x147174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147178: 0xc051a64  jal         func_146990
    ctx->pc = 0x147178u;
    SET_GPR_U32(ctx, 31, 0x147180u);
    ctx->pc = 0x14717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147178u;
    // 0x14717c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146990u, 0x147178u, 0x147180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147180u;
label_147180:
    // 0x147180: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x147180u;
    {
        const bool branch_taken_0x147180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147180u;
        // 0x147184: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147180) {
            ctx->pc = 0x147248u;
            goto label_147248;
        }
    }
    ctx->pc = 0x147188u;
label_147188:
    // 0x147188: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14718c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14718Cu;
    {
        const bool branch_taken_0x14718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14718Cu;
        // 0x147190: 0x26d200b0  addiu       $s2, $s6, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14718c) {
            ctx->pc = 0x147220u;
            goto label_147220;
        }
    }
    ctx->pc = 0x147194u;
    // 0x147194: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x147194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147198: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x147198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14719c: 0x0  nop
    ctx->pc = 0x14719cu;
    // NOP
label_1471a0:
    // 0x1471a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1471a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1471a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1471a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1471a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1471A8u;
    {
        const bool branch_taken_0x1471a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471A8u;
        // 0x1471ac: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471a8) {
            ctx->pc = 0x1471C4u;
            goto label_1471c4;
        }
    }
    ctx->pc = 0x1471B0u;
    // 0x1471b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1471b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1471b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471b8: 0xc051a64  jal         func_146990
    ctx->pc = 0x1471B8u;
    SET_GPR_U32(ctx, 31, 0x1471C0u);
    ctx->pc = 0x1471BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1471B8u;
    // 0x1471bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146990u, 0x1471B8u, 0x1471C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471C0u;
label_1471c0:
    // 0x1471c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1471c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1471c4:
    // 0x1471c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1471c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1471c8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1471c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1471cc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1471CCu;
    {
        const bool branch_taken_0x1471cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1471cc) {
            ctx->pc = 0x1471D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1471CCu;
            // 0x1471d0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1471A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1471a0;
        }
    }
    ctx->pc = 0x1471D4u;
    // 0x1471d4: 0x26d200b0  addiu       $s2, $s6, 0xB0
    ctx->pc = 0x1471d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
    // 0x1471d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1471d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1471dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1471e0:
    // 0x1471e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1471e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1471e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1471e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1471e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1471E8u;
    {
        const bool branch_taken_0x1471e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1471ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471E8u;
        // 0x1471ec: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471e8) {
            ctx->pc = 0x147204u;
            goto label_147204;
        }
    }
    ctx->pc = 0x1471F0u;
    // 0x1471f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1471f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1471f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471f8: 0xc051a64  jal         func_146990
    ctx->pc = 0x1471F8u;
    SET_GPR_U32(ctx, 31, 0x147200u);
    ctx->pc = 0x1471FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1471F8u;
    // 0x1471fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146990u, 0x1471F8u, 0x147200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147200u;
label_147200:
    // 0x147200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_147204:
    // 0x147204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147208: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x147208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14720c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x14720Cu;
    {
        const bool branch_taken_0x14720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14720c) {
            ctx->pc = 0x147210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14720Cu;
            // 0x147210: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1471E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1471e0;
        }
    }
    ctx->pc = 0x147214u;
    // 0x147214: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x147214u;
    {
        const bool branch_taken_0x147214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147214u;
        // 0x147218: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147214) {
            ctx->pc = 0x14724Cu;
            goto label_14724c;
        }
    }
    ctx->pc = 0x14721Cu;
    // 0x14721c: 0x0  nop
    ctx->pc = 0x14721cu;
    // NOP
label_147220:
    // 0x147220: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x147220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147224: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x147224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_147228:
    // 0x147228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14722c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147230: 0xc051a64  jal         func_146990
    ctx->pc = 0x147230u;
    SET_GPR_U32(ctx, 31, 0x147238u);
    ctx->pc = 0x147234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147230u;
    // 0x147234: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146990u, 0x147230u, 0x147238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147238u;
label_147238:
    // 0x147238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14723c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x14723cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x147240: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x147240u;
    {
        const bool branch_taken_0x147240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147240u;
        // 0x147244: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147240) {
            ctx->pc = 0x147228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147228;
        }
    }
    ctx->pc = 0x147248u;
label_147248:
    // 0x147248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14724c:
    // 0x14724c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x14724cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x147250: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x147250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147254: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x147254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x147258: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x147258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x14725c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x14725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x147260: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x147260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x147264: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x147264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x147268: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x147268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x14726c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x147270: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x147270u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x147274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x147274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147278: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x147278u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x14727c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14727cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147280: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x147280u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x147284: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x147284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147288: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x147288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x14728c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x14728Cu;
    SET_GPR_U32(ctx, 31, 0x147294u);
    ctx->pc = 0x147290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14728Cu;
    // 0x147290: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x14728Cu, 0x147294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147294u;
label_147294:
    // 0x147294: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x147294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147298: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x147298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x14729c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x14729cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1472a0: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x1472a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1472a4: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x1472a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x1472a8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1472a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1472ac: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1472acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1472b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1472b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1472b4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1472b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1472b8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1472b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1472bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1472bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1472c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1472c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1472c4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1472c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1472c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1472c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1472cc: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1472ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1472d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1472d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1472d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1472d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1472d8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1472d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1472dc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1472dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1472e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1472E0u;
    SET_GPR_U32(ctx, 31, 0x1472E8u);
    ctx->pc = 0x1472E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472E0u;
    // 0x1472e4: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1472E0u, 0x1472E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472E8u;
label_1472e8:
    // 0x1472e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1472e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1472ec: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1472ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_1472f0:
    // 0x1472f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1472f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1472f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1472f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1472f8: 0x0  nop
    ctx->pc = 0x1472f8u;
    // NOP
    // 0x1472fc: 0x0  nop
    ctx->pc = 0x1472fcu;
    // NOP
    // 0x147300: 0x0  nop
    ctx->pc = 0x147300u;
    // NOP
    // 0x147304: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147304u;
    {
        const bool branch_taken_0x147304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147304) {
            ctx->pc = 0x1472F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1472f0;
        }
    }
    ctx->pc = 0x14730Cu;
    // 0x14730c: 0x0  nop
    ctx->pc = 0x14730cu;
    // NOP
label_147310:
    // 0x147310: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x147310u;
    SET_GPR_U32(ctx, 31, 0x147318u);
    ctx->pc = 0x147314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147310u;
    // 0x147314: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x147310u, 0x147318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147318u;
label_147318:
    // 0x147318: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x14731c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x14731Cu;
    {
        const bool branch_taken_0x14731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x147320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14731Cu;
        // 0x147320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14731c) {
            ctx->pc = 0x147310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147310;
        }
    }
    ctx->pc = 0x147324u;
    // 0x147324: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x147324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x147328: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x147328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14732c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14732Cu;
    {
        const bool branch_taken_0x14732c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14732Cu;
        // 0x147330: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14732c) {
            ctx->pc = 0x147340u;
            goto label_147340;
        }
    }
    ctx->pc = 0x147334u;
    // 0x147334: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x147334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x147338: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x147338u;
    SET_GPR_U32(ctx, 31, 0x147340u);
    ctx->pc = 0x14733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147338u;
    // 0x14733c: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x147338u, 0x147340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147340u;
label_147340:
    // 0x147340: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x147340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x147344: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x147344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x147348: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x147348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x14734c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x147350: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x147350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147354: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x147354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x147358: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x14735c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x14735cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147360: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x147360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x147364: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x147364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147368: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x147368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14736c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x14736cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x147370: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x147370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x147374: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x147374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x147378: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x147378u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14737c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x14737cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x147380: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x147380u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x147384: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x147384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x147388: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x147388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x14738c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14738cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x147390: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x147390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x147394: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x147394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x147398: 0x3e00008  jr          $ra
    ctx->pc = 0x147398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147398u;
        // 0x14739c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1473A0u;
}
