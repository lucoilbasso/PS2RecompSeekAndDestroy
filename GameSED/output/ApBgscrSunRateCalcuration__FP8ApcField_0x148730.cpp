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

// Function: ApBgscrSunRateCalcuration__FP8ApcField
// Address: 0x148730 - 0x1488dc
void ApBgscrSunRateCalcuration__FP8ApcField_0x148730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBgscrSunRateCalcuration__FP8ApcField_0x148730");
#endif

    switch (ctx->pc) {
        case 0x148818u: goto label_148818;
        case 0x148820u: goto label_148820;
        case 0x148830u: goto label_148830;
        case 0x148840u: goto label_148840;
        case 0x14884cu: goto label_14884c;
        case 0x148864u: goto label_148864;
        case 0x148870u: goto label_148870;
        case 0x148878u: goto label_148878;
        default: break;
    }

    ctx->pc = 0x148730u;

    // 0x148730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x148730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x148734: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x148734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x148738: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x148738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x14873c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x14873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x148740: 0x246626c0  addiu       $a2, $v1, 0x26C0
    ctx->pc = 0x148740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
    // 0x148744: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x148744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x148748: 0x8cc204f0  lw          $v0, 0x4F0($a2)
    ctx->pc = 0x148748u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x262BB0u));
    // 0x14874c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x14874Cu;
    {
        const bool branch_taken_0x14874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14874Cu;
        // 0x148750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14874c) {
            ctx->pc = 0x1488C8u;
            goto label_1488c8;
        }
    }
    ctx->pc = 0x148754u;
    // 0x148754: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x148754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x148758: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x148758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14875c: 0x8c420210  lw          $v0, 0x210($v0)
    ctx->pc = 0x14875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x148760: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x148760u;
    {
        const bool branch_taken_0x148760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148760u;
        // 0x148764: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148760) {
            ctx->pc = 0x1488C8u;
            goto label_1488c8;
        }
    }
    ctx->pc = 0x148768u;
    // 0x148768: 0x8e030164  lw          $v1, 0x164($s0)
    ctx->pc = 0x148768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x14876c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14876cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x148770: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x148770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x148774: 0x24513110  addiu       $s1, $v0, 0x3110
    ctx->pc = 0x148774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x148778: 0xc46001bc  lwc1        $f0, 0x1BC($v1)
    ctx->pc = 0x148778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14877c: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x14877cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x148780: 0xc46101b8  lwc1        $f1, 0x1B8($v1)
    ctx->pc = 0x148780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148784: 0x24031c00  addiu       $v1, $zero, 0x1C00
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x148788: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x148788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14878c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x14878cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x148790: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x148790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x148794: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x148794u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x148798: 0xc4c204dc  lwc1        $f2, 0x4DC($a2)
    ctx->pc = 0x148798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14879c: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x14879cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x1487a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1487a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1487a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1487a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1487a8: 0xc4c304d8  lwc1        $f3, 0x4D8($a2)
    ctx->pc = 0x1487a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1487ac: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1487acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1487b0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1487b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1487b4: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x1487b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1487b8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1487b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1487bc: 0xa7a80004  sh          $t0, 0x4($sp)
    ctx->pc = 0x1487bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x1487c0: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x1487c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1487c4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1487c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1487c8: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1487c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1487cc: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x1487ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1487d0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1487d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1487d4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1487d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1487d8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1487d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1487dc: 0x87ab001c  lh          $t3, 0x1C($sp)
    ctx->pc = 0x1487dcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1487e0: 0x87aa0018  lh          $t2, 0x18($sp)
    ctx->pc = 0x1487e0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1487e4: 0x24051c00  addiu       $a1, $zero, 0x1C00
    ctx->pc = 0x1487e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x1487e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1487e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1487ec: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1487ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1487f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1487f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1487f4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1487f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1487f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1487f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1487fc: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1487fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x148800: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x148800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x148804: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x148804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x148808: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x148808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x14880c: 0x87a90014  lh          $t1, 0x14($sp)
    ctx->pc = 0x14880cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x148810: 0xc06acf0  jal         func_1AB3C0
    ctx->pc = 0x148810u;
    SET_GPR_U32(ctx, 31, 0x148818u);
    ctx->pc = 0x148814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148810u;
    // 0x148814: 0x87a80010  lh          $t0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3C0u, 0x148810u, 0x148818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148818u;
label_148818:
    // 0x148818: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x148818u;
    SET_GPR_U32(ctx, 31, 0x148820u);
    ctx->pc = 0x14881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148818u;
    // 0x14881c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x148818u, 0x148820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148820u;
label_148820:
    // 0x148820: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x148820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x148824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148828: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x148828u;
    SET_GPR_U32(ctx, 31, 0x148830u);
    ctx->pc = 0x14882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148828u;
    // 0x14882c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x148828u, 0x148830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148830u;
label_148830:
    // 0x148830: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x148830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x148834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148838: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x148838u;
    SET_GPR_U32(ctx, 31, 0x148840u);
    ctx->pc = 0x14883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148838u;
    // 0x14883c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x148838u, 0x148840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148840u;
label_148840:
    // 0x148840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148844: 0xc052238  jal         func_1488E0
    ctx->pc = 0x148844u;
    SET_GPR_U32(ctx, 31, 0x14884Cu);
    ctx->pc = 0x148848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148844u;
    // 0x148848: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1488E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1488E0u, 0x148844u, 0x14884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14884Cu;
label_14884c:
    // 0x14884c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14884Cu;
    {
        const bool branch_taken_0x14884c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14884Cu;
        // 0x148850: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14884c) {
            ctx->pc = 0x148864u;
            goto label_148864;
        }
    }
    ctx->pc = 0x148854u;
    // 0x148854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148858: 0x24a56b38  addiu       $a1, $a1, 0x6B38
    ctx->pc = 0x148858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27448));
    // 0x14885c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14885Cu;
    SET_GPR_U32(ctx, 31, 0x148864u);
    ctx->pc = 0x148860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14885Cu;
    // 0x148860: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14885Cu, 0x148864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148864u;
label_148864:
    // 0x148864: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x148864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x148868: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x148868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14886c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14886cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_148870:
    // 0x148870: 0x24860084  addiu       $a2, $a0, 0x84
    ctx->pc = 0x148870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x148874: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x148874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_148878:
    // 0x148878: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x148878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14887c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x14887cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x148880: 0x25030800  addiu       $v1, $t0, 0x800
    ctx->pc = 0x148880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2048));
    // 0x148884: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x148884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x148888: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x148888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x14888c: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14888Cu;
    {
        const bool branch_taken_0x14888c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x148890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14888Cu;
        // 0x148890: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14888c) {
            ctx->pc = 0x148878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148878;
        }
    }
    ctx->pc = 0x148894u;
    // 0x148894: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x148894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x148898: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x148898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14889c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14889Cu;
    {
        const bool branch_taken_0x14889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1488A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14889Cu;
        // 0x1488a0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14889c) {
            ctx->pc = 0x148870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148870;
        }
    }
    ctx->pc = 0x1488A4u;
    // 0x1488a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1488a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1488a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1488a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1488ac: 0x8c420210  lw          $v0, 0x210($v0)
    ctx->pc = 0x1488acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x1488b0: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1488b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1488b4: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x1488b4u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1488b8: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x1488b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x1488bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1488bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1488c0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1488c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1488c4: 0xac220210  sw          $v0, 0x210($at)
    ctx->pc = 0x1488c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 528), GPR_U32(ctx, 2));
label_1488c8:
    // 0x1488c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1488c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1488cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1488ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1488d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1488d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1488d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1488D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1488D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488D4u;
        // 0x1488d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1488D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1488DCu;
}
