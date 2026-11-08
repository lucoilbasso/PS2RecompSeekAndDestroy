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

// Function: entry_0015932c
// Address: 0x15932c - 0x159430
void entry_0015932c_0x15932c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015932c_0x15932c");
#endif

    ctx->pc = 0x15932cu;

    // 0x15932c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x159330: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x159330u;
    {
        const bool branch_taken_0x159330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159330) {
            ctx->pc = 0x159334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159330u;
            // 0x159334: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159434u;
            return;
        }
    }
    ctx->pc = 0x159338u;
    // 0x159338: 0xc52203e8  lwc1        $f2, 0x3E8($t1)
    ctx->pc = 0x159338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15933c: 0xc52603e4  lwc1        $f6, 0x3E4($t1)
    ctx->pc = 0x15933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x159340: 0xc5070008  lwc1        $f7, 0x8($t0)
    ctx->pc = 0x159340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x159344: 0xc52103f4  lwc1        $f1, 0x3F4($t1)
    ctx->pc = 0x159344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159348: 0x460238c1  sub.s       $f3, $f7, $f2
    ctx->pc = 0x159348u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x15934c: 0xc52c03f8  lwc1        $f12, 0x3F8($t1)
    ctx->pc = 0x15934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159350: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x159350u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x159354: 0xc52503e0  lwc1        $f5, 0x3E0($t1)
    ctx->pc = 0x159354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x159358: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x159358u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x15935c: 0xc52003f0  lwc1        $f0, 0x3F0($t1)
    ctx->pc = 0x15935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159360: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x159360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159364: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x159364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x159368: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x159368u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15936c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15936cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x159370: 0x0  nop
    ctx->pc = 0x159370u;
    // NOP
    // 0x159374: 0x0  nop
    ctx->pc = 0x159374u;
    // NOP
    // 0x159378: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x159378u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x15937c: 0x0  nop
    ctx->pc = 0x15937cu;
    // NOP
    // 0x159380: 0x0  nop
    ctx->pc = 0x159380u;
    // NOP
    // 0x159384: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x159384u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x159388: 0x46060980  add.s       $f6, $f1, $f6
    ctx->pc = 0x159388u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x15938c: 0x46062036  c.le.s      $f4, $f6
    ctx->pc = 0x15938cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159390: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x159390u;
    {
        const bool branch_taken_0x159390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159390u;
        // 0x159394: 0x46050100  add.s       $f4, $f0, $f5 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159390) {
            ctx->pc = 0x159430u;
            return;
        }
    }
    ctx->pc = 0x159398u;
    // 0x159398: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x159398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15939c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x15939cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593a0: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x1593A0u;
    {
        const bool branch_taken_0x1593a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1593a0) {
            ctx->pc = 0x1593A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1593A0u;
            // 0x1593a4: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159434u;
            return;
        }
    }
    ctx->pc = 0x1593A8u;
    // 0x1593a8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1593a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593ac: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1593acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593b0: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x1593B0u;
    {
        const bool branch_taken_0x1593b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1593b0) {
            ctx->pc = 0x1593B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1593B0u;
            // 0x1593b4: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159434u;
            return;
        }
    }
    ctx->pc = 0x1593B8u;
    // 0x1593b8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x1593b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593bc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1593bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593c0: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x1593C0u;
    {
        const bool branch_taken_0x1593c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1593c0) {
            ctx->pc = 0x1593C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1593C0u;
            // 0x1593c4: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159434u;
            return;
        }
    }
    ctx->pc = 0x1593C8u;
    // 0x1593c8: 0x460c3b01  sub.s       $f12, $f7, $f12
    ctx->pc = 0x1593c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x1593cc: 0x25260410  addiu       $a2, $t1, 0x410
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1040));
    // 0x1593d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1593d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1593d4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1593d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1593d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1593d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1593dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1593dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1593e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1593e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1593e4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1593e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1593e8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1593e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1593ec: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1593ecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1593f0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1593f0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1593f4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1593f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1593f8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1593f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1593fc: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x1593fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159400: 0x25260420  addiu       $a2, $t1, 0x420
    ctx->pc = 0x159400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1056));
    // 0x159404: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x159404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159408: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x159408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15940c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15940cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x159410: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x159410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159414: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159414u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159418: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159418u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15941c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15941cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x159420: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x159420u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159424: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x159424u;
    {
        const bool branch_taken_0x159424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159424u;
        // 0x159428: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159424) {
            ctx->pc = 0x159534u;
            return;
        }
    }
    ctx->pc = 0x15942Cu;
    // 0x15942c: 0x0  nop
    ctx->pc = 0x15942cu;
    // NOP
    ctx->pc = 0x159430u;
}
