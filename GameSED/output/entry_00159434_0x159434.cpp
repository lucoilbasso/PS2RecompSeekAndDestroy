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

// Function: entry_00159434
// Address: 0x159434 - 0x159534
void entry_00159434_0x159434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159434_0x159434");
#endif

    ctx->pc = 0x159434u;

    // 0x159434: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x159434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x159438: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x159438u;
    {
        const bool branch_taken_0x159438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159438) {
            ctx->pc = 0x15943Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159438u;
            // 0x15943c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15954Cu;
            return;
        }
    }
    ctx->pc = 0x159440u;
    // 0x159440: 0xc52603e4  lwc1        $f6, 0x3E4($t1)
    ctx->pc = 0x159440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x159444: 0xc5230408  lwc1        $f3, 0x408($t1)
    ctx->pc = 0x159444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159448: 0xc5470008  lwc1        $f7, 0x8($t2)
    ctx->pc = 0x159448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15944c: 0xc52103f4  lwc1        $f1, 0x3F4($t1)
    ctx->pc = 0x15944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159450: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x159450u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x159454: 0xc52203e8  lwc1        $f2, 0x3E8($t1)
    ctx->pc = 0x159454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159458: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x159458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x15945c: 0xc52c03f8  lwc1        $f12, 0x3F8($t1)
    ctx->pc = 0x15945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159460: 0xc52503e0  lwc1        $f5, 0x3E0($t1)
    ctx->pc = 0x159460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x159464: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x159464u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x159468: 0xc52003f0  lwc1        $f0, 0x3F0($t1)
    ctx->pc = 0x159468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15946c: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x15946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159470: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x159470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x159474: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x159474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x159478: 0x0  nop
    ctx->pc = 0x159478u;
    // NOP
    // 0x15947c: 0x0  nop
    ctx->pc = 0x15947cu;
    // NOP
    // 0x159480: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x159480u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x159484: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x159484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x159488: 0x0  nop
    ctx->pc = 0x159488u;
    // NOP
    // 0x15948c: 0x0  nop
    ctx->pc = 0x15948cu;
    // NOP
    // 0x159490: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x159490u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x159494: 0x46060980  add.s       $f6, $f1, $f6
    ctx->pc = 0x159494u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x159498: 0x46062036  c.le.s      $f4, $f6
    ctx->pc = 0x159498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15949c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x15949Cu;
    {
        const bool branch_taken_0x15949c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1594A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15949Cu;
        // 0x1594a0: 0x460500c0  add.s       $f3, $f0, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15949c) {
            ctx->pc = 0x159548u;
            return;
        }
    }
    ctx->pc = 0x1594A4u;
    // 0x1594a4: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x1594a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594a8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1594a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1594ac: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x1594ACu;
    {
        const bool branch_taken_0x1594ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1594B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594ACu;
        // 0x1594b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594ac) {
            ctx->pc = 0x15954Cu;
            return;
        }
    }
    ctx->pc = 0x1594B4u;
    // 0x1594b4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1594b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594b8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1594b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1594bc: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x1594BCu;
    {
        const bool branch_taken_0x1594bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1594bc) {
            ctx->pc = 0x1594C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1594BCu;
            // 0x1594c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159550u;
            return;
        }
    }
    ctx->pc = 0x1594C4u;
    // 0x1594c4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x1594c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594c8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1594c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1594cc: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x1594CCu;
    {
        const bool branch_taken_0x1594cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1594cc) {
            ctx->pc = 0x1594D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1594CCu;
            // 0x1594d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159550u;
            return;
        }
    }
    ctx->pc = 0x1594D4u;
    // 0x1594d4: 0x46076301  sub.s       $f12, $f12, $f7
    ctx->pc = 0x1594d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x1594d8: 0x25260410  addiu       $a2, $t1, 0x410
    ctx->pc = 0x1594d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1040));
    // 0x1594dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1594dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1594e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1594e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1594e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1594e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1594e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1594e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1594ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1594ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1594f0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1594f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1594f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1594f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1594f8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1594f8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1594fc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1594fcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159500: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159500u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x159504: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x159504u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159508: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x159508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15950c: 0x25260420  addiu       $a2, $t1, 0x420
    ctx->pc = 0x15950cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1056));
    // 0x159510: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x159510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159514: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x159514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x159518: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x159518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15951c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15951cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159520: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159520u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159524: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159524u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159528: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159528u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15952c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15952cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159530: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x159530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x159534u;
}
