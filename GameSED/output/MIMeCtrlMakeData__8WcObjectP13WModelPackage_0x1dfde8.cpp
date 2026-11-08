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

// Function: MIMeCtrlMakeData__8WcObjectP13WModelPackage
// Address: 0x1dfde8 - 0x1dfef8
void MIMeCtrlMakeData__8WcObjectP13WModelPackage_0x1dfde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MIMeCtrlMakeData__8WcObjectP13WModelPackage_0x1dfde8");
#endif

    switch (ctx->pc) {
        case 0x1dfe38u: goto label_1dfe38;
        case 0x1dfe80u: goto label_1dfe80;
        case 0x1dfea8u: goto label_1dfea8;
        case 0x1dfec8u: goto label_1dfec8;
        default: break;
    }

    ctx->pc = 0x1dfde8u;

    // 0x1dfde8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dfde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dfdec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dfdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dfdf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dfdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfdf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dfdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dfdf8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1dfdf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfdfc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dfdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dfe00: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1dfe00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1dfe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1dfe08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfe0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dfe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dfe10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dfe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dfe14: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x1dfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x1dfe18: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DFE18u;
    {
        const bool branch_taken_0x1dfe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE18u;
        // 0x1dfe1c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe18) {
            ctx->pc = 0x1DFE84u;
            goto label_1dfe84;
        }
    }
    ctx->pc = 0x1DFE20u;
    // 0x1dfe20: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1dfe20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe24: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFE24u;
    {
        const bool branch_taken_0x1dfe24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE24u;
        // 0x1dfe28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe24) {
            ctx->pc = 0x1DFE30u;
            goto label_1dfe30;
        }
    }
    ctx->pc = 0x1DFE2Cu;
    // 0x1dfe2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1dfe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dfe30:
    // 0x1dfe30: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DFE30u;
    SET_GPR_U32(ctx, 31, 0x1DFE38u);
    ctx->pc = 0x1DFE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE30u;
    // 0x1dfe34: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DFE30u, 0x1DFE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE38u;
label_1dfe38:
    // 0x1dfe38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dfe38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe3c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DFE3Cu;
    {
        const bool branch_taken_0x1dfe3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe3c) {
            ctx->pc = 0x1DFE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFE3Cu;
            // 0x1dfe40: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFE70u;
            goto label_1dfe70;
        }
    }
    ctx->pc = 0x1DFE44u;
    // 0x1dfe44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfe44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfe48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfe48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfe4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dfe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1dfe50: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1dfe50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1dfe54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dfe54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dfe58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1dfe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1dfe5c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1dfe5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1dfe60: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1dfe60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1dfe64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFE64u;
    {
        const bool branch_taken_0x1dfe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE64u;
        // 0x1dfe68: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe64) {
            ctx->pc = 0x1DFE80u;
            goto label_1dfe80;
        }
    }
    ctx->pc = 0x1DFE6Cu;
    // 0x1dfe6c: 0x0  nop
    ctx->pc = 0x1dfe6cu;
    // NOP
label_1dfe70:
    // 0x1dfe70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dfe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe74: 0x24a582c0  addiu       $a1, $a1, -0x7D40
    ctx->pc = 0x1dfe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935232));
    // 0x1dfe78: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DFE78u;
    SET_GPR_U32(ctx, 31, 0x1DFE80u);
    ctx->pc = 0x1DFE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE78u;
    // 0x1dfe7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DFE78u, 0x1DFE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE80u;
label_1dfe80:
    // 0x1dfe80: 0xae7001a4  sw          $s0, 0x1A4($s3)
    ctx->pc = 0x1dfe80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 420), GPR_U32(ctx, 16));
label_1dfe84:
    // 0x1dfe84: 0x8e6401a4  lw          $a0, 0x1A4($s3)
    ctx->pc = 0x1dfe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 420)));
    // 0x1dfe88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dfe8c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DFE8Cu;
    {
        const bool branch_taken_0x1dfe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE8Cu;
        // 0x1dfe90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe8c) {
            ctx->pc = 0x1DFED8u;
            goto label_1dfed8;
        }
    }
    ctx->pc = 0x1DFE94u;
    // 0x1dfe94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dfe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe98: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1dfe98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe9c: 0x8ca60194  lw          $a2, 0x194($a1)
    ctx->pc = 0x1dfe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    // 0x1dfea0: 0xc064f00  jal         func_193C00
    ctx->pc = 0x1DFEA0u;
    SET_GPR_U32(ctx, 31, 0x1DFEA8u);
    ctx->pc = 0x1DFEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEA0u;
    // 0x1dfea4: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x1DFEA0u, 0x1DFEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEA8u;
label_1dfea8:
    // 0x1dfea8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1dfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1dfeac: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1dfeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1dfeb0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFEB0u;
    {
        const bool branch_taken_0x1dfeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfeb0) {
            ctx->pc = 0x1DFEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFEB0u;
            // 0x1dfeb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFED8u;
            goto label_1dfed8;
        }
    }
    ctx->pc = 0x1DFEB8u;
    // 0x1dfeb8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1dfeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1dfebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dfebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfec0: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DFEC0u;
    SET_GPR_U32(ctx, 31, 0x1DFEC8u);
    ctx->pc = 0x1DFEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEC0u;
    // 0x1dfec4: 0x2484de50  addiu       $a0, $a0, -0x21B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DFEC0u, 0x1DFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEC8u;
label_1dfec8:
    // 0x1dfec8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1dfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1dfecc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1dfeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x1dfed0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1dfed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1dfed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfed8:
    // 0x1dfed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfedc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dfedcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dfee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfee4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dfee4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfee8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1dfee8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dfeec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dfeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEF0u;
        // 0x1dfef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFEF8u;
}
