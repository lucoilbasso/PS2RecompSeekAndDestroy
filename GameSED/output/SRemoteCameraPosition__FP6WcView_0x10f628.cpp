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

// Function: SRemoteCameraPosition__FP6WcView
// Address: 0x10f628 - 0x10f8b4
void SRemoteCameraPosition__FP6WcView_0x10f628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SRemoteCameraPosition__FP6WcView_0x10f628");
#endif

    switch (ctx->pc) {
        case 0x10f654u: goto label_10f654;
        case 0x10f6e8u: goto label_10f6e8;
        case 0x10f704u: goto label_10f704;
        case 0x10f720u: goto label_10f720;
        case 0x10f7e0u: goto label_10f7e0;
        case 0x10f7f4u: goto label_10f7f4;
        case 0x10f810u: goto label_10f810;
        case 0x10f824u: goto label_10f824;
        case 0x10f840u: goto label_10f840;
        case 0x10f854u: goto label_10f854;
        case 0x10f870u: goto label_10f870;
        case 0x10f894u: goto label_10f894;
        default: break;
    }

    ctx->pc = 0x10f628u;

    // 0x10f628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10f628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10f62c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x10f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10f630: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10f630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10f634: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10f634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10f638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10f644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10f648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10f648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10f64c: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x10F64Cu;
    SET_GPR_U32(ctx, 31, 0x10F654u);
    ctx->pc = 0x10F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F64Cu;
    // 0x10f650: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x10F64Cu, 0x10F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F654u;
label_10f654:
    // 0x10f654: 0x8f829118  lw          $v0, -0x6EE8($gp)
    ctx->pc = 0x10f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x10f658: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10F658u;
    {
        const bool branch_taken_0x10f658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f658) {
            ctx->pc = 0x10F65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F658u;
            // 0x10f65c: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F688u;
            goto label_10f688;
        }
    }
    ctx->pc = 0x10F660u;
    // 0x10f660: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f66c: 0x2484d160  addiu       $a0, $a0, -0x2EA0
    ctx->pc = 0x10f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955360));
    // 0x10f670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10f670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f674: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10f674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10f678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f67c: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x10f67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10f680: 0x805bca8  j           func_16F2A0
    ctx->pc = 0x10F680u;
    ctx->pc = 0x10F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F680u;
    // 0x10f684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    ApDebugPrint__FPce_0x16f2a0(rdram, ctx, runtime); return;
    ctx->pc = 0x10F688u;
label_10f688:
    // 0x10f688: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F688u;
    {
        const bool branch_taken_0x10f688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f688) {
            ctx->pc = 0x10F68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F688u;
            // 0x10f68c: 0x266300d0  addiu       $v1, $s3, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F698u;
            goto label_10f698;
        }
    }
    ctx->pc = 0x10F690u;
    // 0x10f690: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x10f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x10f694: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x10f694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_10f698:
    // 0x10f698: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x10f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x10f69c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F69Cu;
    {
        const bool branch_taken_0x10f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F69Cu;
        // 0x10f6a0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f69c) {
            ctx->pc = 0x10F6B0u;
            goto label_10f6b0;
        }
    }
    ctx->pc = 0x10F6A4u;
    // 0x10f6a4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x10f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x10f6a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10F6A8u;
    {
        const bool branch_taken_0x10f6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6A8u;
        // 0x10f6ac: 0x24510030  addiu       $s1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6a8) {
            ctx->pc = 0x10F6B4u;
            goto label_10f6b4;
        }
    }
    ctx->pc = 0x10F6B0u;
label_10f6b0:
    // 0x10f6b0: 0x26710030  addiu       $s1, $s3, 0x30
    ctx->pc = 0x10f6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_10f6b4:
    // 0x10f6b4: 0x8f839118  lw          $v1, -0x6EE8($gp)
    ctx->pc = 0x10f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x10f6b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f6bc: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10F6BCu;
    {
        const bool branch_taken_0x10f6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f6bc) {
            ctx->pc = 0x10F6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F6BCu;
            // 0x10f6c0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F724u;
            goto label_10f724;
        }
    }
    ctx->pc = 0x10F6C4u;
    // 0x10f6c4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x10f6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x10f6c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10f6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10f6cc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10f6d0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10f6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f6d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f6d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f6d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f6d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f6dc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f6dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f6e0: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F6E0u;
    SET_GPR_U32(ctx, 31, 0x10F6E8u);
    ctx->pc = 0x10F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6E0u;
    // 0x10f6e4: 0x24843df8  addiu       $a0, $a0, 0x3DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F6E0u, 0x10F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6E8u;
label_10f6e8:
    // 0x10f6e8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10f6ec: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x10f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f6f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f6f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f6f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f6f8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f6f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f6fc: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F6FCu;
    SET_GPR_U32(ctx, 31, 0x10F704u);
    ctx->pc = 0x10F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6FCu;
    // 0x10f700: 0x24843e08  addiu       $a0, $a0, 0x3E08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F6FCu, 0x10F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F704u;
label_10f704:
    // 0x10f704: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10f704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10f708: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x10f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f70c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f710: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f710u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f714: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f718: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F718u;
    SET_GPR_U32(ctx, 31, 0x10F720u);
    ctx->pc = 0x10F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F718u;
    // 0x10f71c: 0x24843e18  addiu       $a0, $a0, 0x3E18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F718u, 0x10F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F720u;
label_10f720:
    // 0x10f720: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10f724:
    // 0x10f724: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f728: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x10f728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10f72c: 0x2484d168  addiu       $a0, $a0, -0x2E98
    ctx->pc = 0x10f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955368));
    // 0x10f730: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10f730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10f734: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x10f734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x10f738: 0x30a57fff  andi        $a1, $a1, 0x7FFF
    ctx->pc = 0x10f738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x10f73c: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x10f73cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10f740: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x10f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x10f744: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x10f744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x10f748: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x10f748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10f74c: 0x53840  sll         $a3, $a1, 1
    ctx->pc = 0x10f74cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10f750: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x10f750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10f754: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x10f754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x10f758: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x10f758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x10f75c: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x10f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10f760: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x10f760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10f764: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x10f764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x10f768: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x10f768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x10f76c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x10f76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x10f770: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x10f770u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x10f774: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x10f774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x10f778: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10f778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10f77c: 0x24467fff  addiu       $a2, $v0, 0x7FFF
    ctx->pc = 0x10f77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x10f780: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x10f780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f784: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x10f784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x10f788: 0xc2400b  movn        $t0, $a2, $v0
    ctx->pc = 0x10f788u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x10f78c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10f78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f790: 0x24667fff  addiu       $a2, $v1, 0x7FFF
    ctx->pc = 0x10f790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x10f794: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x10f794u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x10f798: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10f798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f79c: 0x24a97fff  addiu       $t1, $a1, 0x7FFF
    ctx->pc = 0x10f79cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x10f7a0: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x10f7a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x10f7a4: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x10f7a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x10f7a8: 0x883c3  sra         $s0, $t0, 15
    ctx->pc = 0x10f7a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 8), 15));
    // 0x10f7ac: 0x125380b  movn        $a3, $t1, $a1
    ctx->pc = 0x10f7acu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x10f7b0: 0x293c3  sra         $s2, $v0, 15
    ctx->pc = 0x10f7b0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 15));
    // 0x10f7b4: 0x2602fe98  addiu       $v0, $s0, -0x168
    ctx->pc = 0x10f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966936));
    // 0x10f7b8: 0x78bc3  sra         $s1, $a3, 15
    ctx->pc = 0x10f7b8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 15));
    // 0x10f7bc: 0x2a0300b4  slti        $v1, $s0, 0xB4
    ctx->pc = 0x10f7bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x10f7c0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x10f7c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x10f7c4: 0x2623fe98  addiu       $v1, $s1, -0x168
    ctx->pc = 0x10f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966936));
    // 0x10f7c8: 0x2a2600b4  slti        $a2, $s1, 0xB4
    ctx->pc = 0x10f7c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x10f7cc: 0x2a4500b4  slti        $a1, $s2, 0xB4
    ctx->pc = 0x10f7ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x10f7d0: 0x2642fe98  addiu       $v0, $s2, -0x168
    ctx->pc = 0x10f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x10f7d4: 0x66880a  movz        $s1, $v1, $a2
    ctx->pc = 0x10f7d4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x10f7d8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F7D8u;
    SET_GPR_U32(ctx, 31, 0x10F7E0u);
    ctx->pc = 0x10F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7D8u;
    // 0x10f7dc: 0x45900a  movz        $s2, $v0, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F7D8u, 0x10F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7E0u;
label_10f7e0:
    // 0x10f7e0: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F7E0u;
    {
        const bool branch_taken_0x10f7e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x10F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7E0u;
        // 0x10f7e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7e0) {
            ctx->pc = 0x10F800u;
            goto label_10f800;
        }
    }
    ctx->pc = 0x10F7E8u;
    // 0x10f7e8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f7ec: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F7ECu;
    SET_GPR_U32(ctx, 31, 0x10F7F4u);
    ctx->pc = 0x10F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7ECu;
    // 0x10f7f0: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F7ECu, 0x10F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7F4u;
label_10f7f4:
    // 0x10f7f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F7F4u;
    {
        const bool branch_taken_0x10f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f7f4) {
            ctx->pc = 0x10F810u;
            goto label_10f810;
        }
    }
    ctx->pc = 0x10F7FCu;
    // 0x10f7fc: 0x0  nop
    ctx->pc = 0x10f7fcu;
    // NOP
label_10f800:
    // 0x10f800: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f804: 0x102823  negu        $a1, $s0
    ctx->pc = 0x10f804u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x10f808: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F808u;
    SET_GPR_U32(ctx, 31, 0x10F810u);
    ctx->pc = 0x10F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F808u;
    // 0x10f80c: 0x2484d178  addiu       $a0, $a0, -0x2E88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F808u, 0x10F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F810u;
label_10f810:
    // 0x10f810: 0x6200007  bltz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F810u;
    {
        const bool branch_taken_0x10f810 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x10F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F810u;
        // 0x10f814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f810) {
            ctx->pc = 0x10F830u;
            goto label_10f830;
        }
    }
    ctx->pc = 0x10F818u;
    // 0x10f818: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f81c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F81Cu;
    SET_GPR_U32(ctx, 31, 0x10F824u);
    ctx->pc = 0x10F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F81Cu;
    // 0x10f820: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F81Cu, 0x10F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F824u;
label_10f824:
    // 0x10f824: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F824u;
    {
        const bool branch_taken_0x10f824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f824) {
            ctx->pc = 0x10F840u;
            goto label_10f840;
        }
    }
    ctx->pc = 0x10F82Cu;
    // 0x10f82c: 0x0  nop
    ctx->pc = 0x10f82cu;
    // NOP
label_10f830:
    // 0x10f830: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f834: 0x112823  negu        $a1, $s1
    ctx->pc = 0x10f834u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x10f838: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F838u;
    SET_GPR_U32(ctx, 31, 0x10F840u);
    ctx->pc = 0x10F83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F838u;
    // 0x10f83c: 0x2484d178  addiu       $a0, $a0, -0x2E88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F838u, 0x10F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F840u;
label_10f840:
    // 0x10f840: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F840u;
    {
        const bool branch_taken_0x10f840 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x10F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F840u;
        // 0x10f844: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f840) {
            ctx->pc = 0x10F860u;
            goto label_10f860;
        }
    }
    ctx->pc = 0x10F848u;
    // 0x10f848: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f84c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F84Cu;
    SET_GPR_U32(ctx, 31, 0x10F854u);
    ctx->pc = 0x10F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F84Cu;
    // 0x10f850: 0x2484d180  addiu       $a0, $a0, -0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F84Cu, 0x10F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F854u;
label_10f854:
    // 0x10f854: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F854u;
    {
        const bool branch_taken_0x10f854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f854) {
            ctx->pc = 0x10F870u;
            goto label_10f870;
        }
    }
    ctx->pc = 0x10F85Cu;
    // 0x10f85c: 0x0  nop
    ctx->pc = 0x10f85cu;
    // NOP
label_10f860:
    // 0x10f860: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f864: 0x122823  negu        $a1, $s2
    ctx->pc = 0x10f864u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x10f868: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F868u;
    SET_GPR_U32(ctx, 31, 0x10F870u);
    ctx->pc = 0x10F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F868u;
    // 0x10f86c: 0x2484d188  addiu       $a0, $a0, -0x2E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F868u, 0x10F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F870u;
label_10f870:
    // 0x10f870: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x10f870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x10f874: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10f878: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10f878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10f87c: 0xc6600154  lwc1        $f0, 0x154($s3)
    ctx->pc = 0x10f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f880: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10f880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10f884: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f888: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f88c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F88Cu;
    SET_GPR_U32(ctx, 31, 0x10F894u);
    ctx->pc = 0x10F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F88Cu;
    // 0x10f890: 0x24843e28  addiu       $a0, $a0, 0x3E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F88Cu, 0x10F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F894u;
label_10f894:
    // 0x10f894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f89c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10f89cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f8a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10f8a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f8a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10f8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f8a8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x10f8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10f8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10F8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8ACu;
        // 0x10f8b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F8B4u;
}
