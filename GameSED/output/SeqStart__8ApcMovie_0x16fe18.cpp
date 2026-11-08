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

// Function: SeqStart__8ApcMovie
// Address: 0x16fe18 - 0x16ff90
void SeqStart__8ApcMovie_0x16fe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqStart__8ApcMovie_0x16fe18");
#endif

    switch (ctx->pc) {
        case 0x16fe4cu: goto label_16fe4c;
        case 0x16fe54u: goto label_16fe54;
        case 0x16fe60u: goto label_16fe60;
        case 0x16fe6cu: goto label_16fe6c;
        case 0x16fe74u: goto label_16fe74;
        case 0x16fea4u: goto label_16fea4;
        case 0x16feb8u: goto label_16feb8;
        case 0x16fee4u: goto label_16fee4;
        case 0x16ff04u: goto label_16ff04;
        case 0x16ff18u: goto label_16ff18;
        case 0x16ff24u: goto label_16ff24;
        case 0x16ff2cu: goto label_16ff2c;
        case 0x16ff38u: goto label_16ff38;
        case 0x16ff40u: goto label_16ff40;
        case 0x16ff4cu: goto label_16ff4c;
        case 0x16ff58u: goto label_16ff58;
        case 0x16ff60u: goto label_16ff60;
        case 0x16ff6cu: goto label_16ff6c;
        case 0x16ff74u: goto label_16ff74;
        default: break;
    }

    ctx->pc = 0x16fe18u;

    // 0x16fe18: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x16fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x16fe1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe20: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x16fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x16fe24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fe24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe28: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x16fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x16fe2c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x16fe2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe30: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x16fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x16fe34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe38: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x16fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x16fe3c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x16fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x16fe40: 0x8f938d10  lw          $s3, -0x72F0($gp)
    ctx->pc = 0x16fe40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16fe44: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16FE44u;
    SET_GPR_U32(ctx, 31, 0x16FE4Cu);
    ctx->pc = 0x16FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE44u;
    // 0x16fe48: 0x8e72001c  lw          $s2, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16FE44u, 0x16FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE4Cu;
label_16fe4c:
    // 0x16fe4c: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16FE4Cu;
    SET_GPR_U32(ctx, 31, 0x16FE54u);
    ctx->pc = 0x16FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE4Cu;
    // 0x16fe50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16FE4Cu, 0x16FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE54u;
label_16fe54:
    // 0x16fe54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe58: 0xc05d9ee  jal         func_1767B8
    ctx->pc = 0x16FE58u;
    SET_GPR_U32(ctx, 31, 0x16FE60u);
    ctx->pc = 0x16FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE58u;
    // 0x16fe5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1767B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1767B8u, 0x16FE58u, 0x16FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE60u;
label_16fe60:
    // 0x16fe60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe64: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16FE64u;
    SET_GPR_U32(ctx, 31, 0x16FE6Cu);
    ctx->pc = 0x16FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE64u;
    // 0x16fe68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16FE64u, 0x16FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE6Cu;
label_16fe6c:
    // 0x16fe6c: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16FE6Cu;
    SET_GPR_U32(ctx, 31, 0x16FE74u);
    ctx->pc = 0x16FE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE6Cu;
    // 0x16fe70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16FE6Cu, 0x16FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE74u;
label_16fe74:
    // 0x16fe74: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x16fe74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x16fe78: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x16fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16fe7c: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x16fe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x16fe80: 0x24c67638  addiu       $a2, $a2, 0x7638
    ctx->pc = 0x16fe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30264));
    // 0x16fe84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16fe88: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16fe8c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x16fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16fe90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16FE90u;
    {
        const bool branch_taken_0x16fe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE90u;
        // 0x16fe94: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe90) {
            ctx->pc = 0x16FEB0u;
            goto label_16feb0;
        }
    }
    ctx->pc = 0x16FE98u;
    // 0x16fe98: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x16fe98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x16fe9c: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x16FE9Cu;
    SET_GPR_U32(ctx, 31, 0x16FEA4u);
    ctx->pc = 0x16FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE9Cu;
    // 0x16fea0: 0x24c6d440  addiu       $a2, $a2, -0x2BC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x16FE9Cu, 0x16FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEA4u;
label_16fea4:
    // 0x16fea4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16FEA4u;
    {
        const bool branch_taken_0x16fea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEA4u;
        // 0x16fea8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fea4) {
            ctx->pc = 0x16FEBCu;
            goto label_16febc;
        }
    }
    ctx->pc = 0x16FEACu;
    // 0x16feac: 0x0  nop
    ctx->pc = 0x16feacu;
    // NOP
label_16feb0:
    // 0x16feb0: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x16FEB0u;
    SET_GPR_U32(ctx, 31, 0x16FEB8u);
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x16FEB0u, 0x16FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEB8u;
label_16feb8:
    // 0x16feb8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x16feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16febc:
    // 0x16febc: 0x3c0500b6  lui         $a1, 0xB6
    ctx->pc = 0x16febcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)182 << 16));
    // 0x16fec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16fec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fec8: 0x34a5c700  ori         $a1, $a1, 0xC700
    ctx->pc = 0x16fec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50944);
    // 0x16fecc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x16feccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16fed0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16FED0u;
    {
        const bool branch_taken_0x16fed0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FED0u;
        // 0x16fed4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fed0) {
            ctx->pc = 0x16FEDCu;
            goto label_16fedc;
        }
    }
    ctx->pc = 0x16FED8u;
    // 0x16fed8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16fedc:
    // 0x16fedc: 0xc0680c8  jal         func_1A0320
    ctx->pc = 0x16FEDCu;
    SET_GPR_U32(ctx, 31, 0x16FEE4u);
    ctx->pc = 0x1A0320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0320u, 0x16FEDCu, 0x16FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEE4u;
label_16fee4:
    // 0x16fee4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16fee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16fee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16feec: 0x24a57648  addiu       $a1, $a1, 0x7648
    ctx->pc = 0x16feecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30280));
    // 0x16fef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fef4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FEF4u;
    {
        const bool branch_taken_0x16fef4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEF4u;
        // 0x16fef8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fef4) {
            ctx->pc = 0x16FF04u;
            goto label_16ff04;
        }
    }
    ctx->pc = 0x16FEFCu;
    // 0x16fefc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16FEFCu;
    SET_GPR_U32(ctx, 31, 0x16FF04u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16FEFCu, 0x16FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF04u;
label_16ff04:
    // 0x16ff04: 0x8e270180  lw          $a3, 0x180($s1)
    ctx->pc = 0x16ff04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x16ff08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16ff08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16ff0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff10: 0xc05bfe4  jal         func_16FF90
    ctx->pc = 0x16FF10u;
    SET_GPR_U32(ctx, 31, 0x16FF18u);
    ctx->pc = 0x16FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF10u;
    // 0x16ff14: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FF90u, 0x16FF10u, 0x16FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF18u;
label_16ff18:
    // 0x16ff18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff1c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x16FF1Cu;
    SET_GPR_U32(ctx, 31, 0x16FF24u);
    ctx->pc = 0x16FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF1Cu;
    // 0x16ff20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x16FF1Cu, 0x16FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF24u;
label_16ff24:
    // 0x16ff24: 0xc05d7f8  jal         func_175FE0
    ctx->pc = 0x16FF24u;
    SET_GPR_U32(ctx, 31, 0x16FF2Cu);
    ctx->pc = 0x16FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF24u;
    // 0x16ff28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175FE0u, 0x16FF24u, 0x16FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF2Cu;
label_16ff2c:
    // 0x16ff2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff30: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16FF30u;
    SET_GPR_U32(ctx, 31, 0x16FF38u);
    ctx->pc = 0x16FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF30u;
    // 0x16ff34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16FF30u, 0x16FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF38u;
label_16ff38:
    // 0x16ff38: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16FF38u;
    SET_GPR_U32(ctx, 31, 0x16FF40u);
    ctx->pc = 0x16FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF38u;
    // 0x16ff3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16FF38u, 0x16FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF40u;
label_16ff40:
    // 0x16ff40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ff40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff44: 0xc05d9ee  jal         func_1767B8
    ctx->pc = 0x16FF44u;
    SET_GPR_U32(ctx, 31, 0x16FF4Cu);
    ctx->pc = 0x16FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF44u;
    // 0x16ff48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1767B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1767B8u, 0x16FF44u, 0x16FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF4Cu;
label_16ff4c:
    // 0x16ff4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff50: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16FF50u;
    SET_GPR_U32(ctx, 31, 0x16FF58u);
    ctx->pc = 0x16FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF50u;
    // 0x16ff54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16FF50u, 0x16FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF58u;
label_16ff58:
    // 0x16ff58: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16FF58u;
    SET_GPR_U32(ctx, 31, 0x16FF60u);
    ctx->pc = 0x16FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF58u;
    // 0x16ff5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16FF58u, 0x16FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF60u;
label_16ff60:
    // 0x16ff60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff64: 0xc05d934  jal         func_1764D0
    ctx->pc = 0x16FF64u;
    SET_GPR_U32(ctx, 31, 0x16FF6Cu);
    ctx->pc = 0x16FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF64u;
    // 0x16ff68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1764D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1764D0u, 0x16FF64u, 0x16FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF6Cu;
label_16ff6c:
    // 0x16ff6c: 0xc05e8ec  jal         func_17A3B0
    ctx->pc = 0x16FF6Cu;
    SET_GPR_U32(ctx, 31, 0x16FF74u);
    ctx->pc = 0x16FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF6Cu;
    // 0x16ff70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3B0u, 0x16FF6Cu, 0x16FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF74u;
label_16ff74:
    // 0x16ff74: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x16ff74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16ff78: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x16ff78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16ff7c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x16ff7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16ff80: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x16ff80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x16ff84: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x16ff84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16ff88: 0x3e00008  jr          $ra
    ctx->pc = 0x16FF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF88u;
        // 0x16ff8c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF90u;
}
