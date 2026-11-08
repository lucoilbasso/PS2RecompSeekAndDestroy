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

// Function: ApBackPanelCreate__Fi
// Address: 0x1465b0 - 0x146804
void ApBackPanelCreate__Fi_0x1465b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBackPanelCreate__Fi_0x1465b0");
#endif

    switch (ctx->pc) {
        case 0x1465ccu: goto label_1465cc;
        default: break;
    }

    ctx->pc = 0x1465b0u;

    // 0x1465b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1465b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1465b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1465b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1465b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1465b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1465bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1465c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1465c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1465c4: 0xc06256e  jal         func_1895B8
    ctx->pc = 0x1465C4u;
    SET_GPR_U32(ctx, 31, 0x1465CCu);
    ctx->pc = 0x1465C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465C4u;
    // 0x1465c8: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1895B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1895B8u, 0x1465C4u, 0x1465CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465CCu;
label_1465cc:
    // 0x1465cc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1465ccu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1465d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1465d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1465d4: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x1465d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x1465d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1465d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1465dc: 0x261026c0  addiu       $s0, $s0, 0x26C0
    ctx->pc = 0x1465dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9920));
    // 0x1465e0: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1465e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465e4: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x1465e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1465e8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1465e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1465ec: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x1465ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
    // 0x1465f0: 0x260701b0  addiu       $a3, $s0, 0x1B0
    ctx->pc = 0x1465f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1465f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1465f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1465f8: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x1465f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x1465fc: 0x3c01c3c8  lui         $at, 0xC3C8
    ctx->pc = 0x1465fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50120 << 16));
    // 0x146600: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x146600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x146604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146608: 0xe4c10044  swc1        $f1, 0x44($a2)
    ctx->pc = 0x146608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x14660c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x14660cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x146610: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x146610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x146614: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x146614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x146618: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x146618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14661c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14661cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x146620: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x146620u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x146624: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x146624u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x146628: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x146628u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x14662c: 0x260601c0  addiu       $a2, $s0, 0x1C0
    ctx->pc = 0x14662cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x146630: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x146630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x146634: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146638: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x146638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14663c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x14663cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x146640: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x146640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x146644: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x146644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x146648: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x146648u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14664c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14664cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x146650: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x146650u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x146654: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x146654u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x146658: 0xc781818c  lwc1        $f1, -0x7E74($gp)
    ctx->pc = 0x146658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14665c: 0x260601d0  addiu       $a2, $s0, 0x1D0
    ctx->pc = 0x14665cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x146660: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x146660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x146664: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x146664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x146668: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x146668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14666c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14666cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x146670: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x146670u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x146674: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x146674u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x146678: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x146678u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14667c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14667cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x146680: 0x260701e0  addiu       $a3, $s0, 0x1E0
    ctx->pc = 0x146680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x146684: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x146684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x146688: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x146688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14668c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14668cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x146690: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x146690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x146694: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x146694u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x146698: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x146698u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14669c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14669cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1466a0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1466a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1466a4: 0x260801f0  addiu       $t0, $s0, 0x1F0
    ctx->pc = 0x1466a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1466a8: 0xc7818190  lwc1        $f1, -0x7E70($gp)
    ctx->pc = 0x1466a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1466ac: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x1466acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1466b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1466b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1466b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1466b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1466b8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1466b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1466bc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1466bcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1466c0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1466c0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1466c4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1466c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1466c8: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1466c8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1466cc: 0x26060200  addiu       $a2, $s0, 0x200
    ctx->pc = 0x1466ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x1466d0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1466d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1466d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1466d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1466d8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1466d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1466dc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1466dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1466e0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1466e0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1466e4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1466e4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1466e8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1466e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1466ec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1466ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1466f0: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x1466f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1466f4: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x1466f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1466f8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1466f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1466fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1466fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x146700: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x146700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x146704: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x146704u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x146708: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x146708u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14670c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14670cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x146710: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x146710u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x146714: 0x26060220  addiu       $a2, $s0, 0x220
    ctx->pc = 0x146714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x146718: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x146718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14671c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x14671cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x146720: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x146720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x146724: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x146724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x146728: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x146728u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14672c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14672cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x146730: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x146730u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x146734: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x146734u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x146738: 0x3c0c0014  lui         $t4, 0x14
    ctx->pc = 0x146738u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20 << 16));
    // 0x14673c: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x14673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x146740: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x146740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x146744: 0x26050234  addiu       $a1, $s0, 0x234
    ctx->pc = 0x146744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    // 0x146748: 0x26060238  addiu       $a2, $s0, 0x238
    ctx->pc = 0x146748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    // 0x14674c: 0x2607023c  addiu       $a3, $s0, 0x23C
    ctx->pc = 0x14674cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x146750: 0x26080240  addiu       $t0, $s0, 0x240
    ctx->pc = 0x146750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x146754: 0x26090244  addiu       $t1, $s0, 0x244
    ctx->pc = 0x146754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 580));
    // 0x146758: 0x260a0248  addiu       $t2, $s0, 0x248
    ctx->pc = 0x146758u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
    // 0x14675c: 0x260b024c  addiu       $t3, $s0, 0x24C
    ctx->pc = 0x14675cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 588));
    // 0x146760: 0x258c6ed0  addiu       $t4, $t4, 0x6ED0
    ctx->pc = 0x146760u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 28368));
    // 0x146764: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x146764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x146768: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x146768u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14676c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x14676cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146770: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x146770u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146774: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x146774u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146778: 0xa1030003  sb          $v1, 0x3($t0)
    ctx->pc = 0x146778u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x14677c: 0xa1230003  sb          $v1, 0x3($t1)
    ctx->pc = 0x14677cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146780: 0xa1400003  sb          $zero, 0x3($t2)
    ctx->pc = 0x146780u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x146784: 0xa1630002  sb          $v1, 0x2($t3)
    ctx->pc = 0x146784u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x146788: 0xa1600003  sb          $zero, 0x3($t3)
    ctx->pc = 0x146788u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14678c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x14678cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x146790: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x146790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x146794: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x146798: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x146798u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14679c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x14679cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467a0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1467a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467a4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1467a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467a8: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x1467a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467ac: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1467acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467b0: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1467b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467b4: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x1467b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467b8: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x1467b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467bc: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x1467bcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467c0: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x1467c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467c4: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x1467c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467c8: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x1467c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467cc: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x1467ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467d0: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x1467d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467d4: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x1467d4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467d8: 0xa1430001  sb          $v1, 0x1($t2)
    ctx->pc = 0x1467d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467dc: 0xa1430002  sb          $v1, 0x2($t2)
    ctx->pc = 0x1467dcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467e0: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x1467e0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467e4: 0xa1630001  sb          $v1, 0x1($t3)
    ctx->pc = 0x1467e4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467e8: 0xadac0158  sw          $t4, 0x158($t5)
    ctx->pc = 0x1467e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 344), GPR_U32(ctx, 12));
    // 0x1467ec: 0xadb0015c  sw          $s0, 0x15C($t5)
    ctx->pc = 0x1467ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 348), GPR_U32(ctx, 16));
    // 0x1467f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1467f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1467f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1467f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1467f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1467f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1467fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1467FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1467FCu;
        // 0x146800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1467FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146804u;
}
