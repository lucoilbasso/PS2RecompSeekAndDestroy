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

// Function: S_Point2Box_Length__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i
// Address: 0x158c50 - 0x1590d0
void S_Point2Box_Length__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x158c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_Point2Box_Length__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x158c50");
#endif

    switch (ctx->pc) {
        case 0x1590b0u: goto label_1590b0;
        default: break;
    }

    ctx->pc = 0x158c50u;

    // 0x158c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158c54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x158c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158c58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158c5c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x158c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x158c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x158c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c68: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158C68u;
    {
        const bool branch_taken_0x158c68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x158C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C68u;
        // 0x158c6c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c68) {
            ctx->pc = 0x158C80u;
            goto label_158c80;
        }
    }
    ctx->pc = 0x158C70u;
    // 0x158c70: 0x25040400  addiu       $a0, $t0, 0x400
    ctx->pc = 0x158c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1024));
    // 0x158c74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158C74u;
    {
        const bool branch_taken_0x158c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C74u;
        // 0x158c78: 0x250303f0  addiu       $v1, $t0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c74) {
            ctx->pc = 0x158C88u;
            goto label_158c88;
        }
    }
    ctx->pc = 0x158C7Cu;
    // 0x158c7c: 0x0  nop
    ctx->pc = 0x158c7cu;
    // NOP
label_158c80:
    // 0x158c80: 0x25040400  addiu       $a0, $t0, 0x400
    ctx->pc = 0x158c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1024));
    // 0x158c84: 0x250303e0  addiu       $v1, $t0, 0x3E0
    ctx->pc = 0x158c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 992));
label_158c88:
    // 0x158c88: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x158c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158c8c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x158c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x158c90: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x158c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158c94: 0xc5000400  lwc1        $f0, 0x400($t0)
    ctx->pc = 0x158c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158c98: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x158c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158c9c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x158c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158ca0: 0x8d04047c  lw          $a0, 0x47C($t0)
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158ca4: 0x244a0110  addiu       $t2, $v0, 0x110
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x158ca8: 0x24490120  addiu       $t1, $v0, 0x120
    ctx->pc = 0x158ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x158cac: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x158cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158cb0: 0x41203  sra         $v0, $a0, 8
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
    // 0x158cb4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x158cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x158cb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158cbc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x158CBCu;
    {
        const bool branch_taken_0x158cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CBCu;
        // 0x158cc0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cbc) {
            ctx->pc = 0x158CD4u;
            goto label_158cd4;
        }
    }
    ctx->pc = 0x158CC4u;
    // 0x158cc4: 0x546000fc  bnel        $v1, $zero, . + 4 + (0xFC << 2)
    ctx->pc = 0x158CC4u;
    {
        const bool branch_taken_0x158cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158cc4) {
            ctx->pc = 0x158CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158CC4u;
            // 0x158cc8: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x158CCCu;
    // 0x158ccc: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x158cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x158cd0: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
label_158cd4:
    // 0x158cd4: 0xc5000404  lwc1        $f0, 0x404($t0)
    ctx->pc = 0x158cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158cd8: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x158cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158cdc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x158cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158ce0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158ce4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x158CE4u;
    {
        const bool branch_taken_0x158ce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158ce4) {
            ctx->pc = 0x158CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158CE4u;
            // 0x158ce8: 0xc5000408  lwc1        $f0, 0x408($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158D04u;
            goto label_158d04;
        }
    }
    ctx->pc = 0x158CECu;
    // 0x158cec: 0x546000f2  bnel        $v1, $zero, . + 4 + (0xF2 << 2)
    ctx->pc = 0x158CECu;
    {
        const bool branch_taken_0x158cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158cec) {
            ctx->pc = 0x158CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158CECu;
            // 0x158cf0: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x158CF4u;
    // 0x158cf4: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158cf8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x158cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x158cfc: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    // 0x158d00: 0xc5000408  lwc1        $f0, 0x408($t0)
    ctx->pc = 0x158d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158d04:
    // 0x158d04: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x158d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x158d08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158d0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d10: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x158D10u;
    {
        const bool branch_taken_0x158d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158d10) {
            ctx->pc = 0x158D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D10u;
            // 0x158d14: 0xc5000400  lwc1        $f0, 0x400($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158D30u;
            goto label_158d30;
        }
    }
    ctx->pc = 0x158D18u;
    // 0x158d18: 0x546000e7  bnel        $v1, $zero, . + 4 + (0xE7 << 2)
    ctx->pc = 0x158D18u;
    {
        const bool branch_taken_0x158d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d18) {
            ctx->pc = 0x158D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D18u;
            // 0x158d1c: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x158D20u;
    // 0x158d20: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158d24: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x158d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x158d28: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158d28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    // 0x158d2c: 0xc5000400  lwc1        $f0, 0x400($t0)
    ctx->pc = 0x158d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158d30:
    // 0x158d30: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x158d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d34: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x158d34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x158d38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158d38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d3c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x158D3Cu;
    {
        const bool branch_taken_0x158d3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158d3c) {
            ctx->pc = 0x158D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D3Cu;
            // 0x158d40: 0xc5000404  lwc1        $f0, 0x404($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158D5Cu;
            goto label_158d5c;
        }
    }
    ctx->pc = 0x158D44u;
    // 0x158d44: 0x546000dc  bnel        $v1, $zero, . + 4 + (0xDC << 2)
    ctx->pc = 0x158D44u;
    {
        const bool branch_taken_0x158d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d44) {
            ctx->pc = 0x158D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D44u;
            // 0x158d48: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x158D4Cu;
    // 0x158d4c: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158d50: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x158d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x158d54: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158d54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    // 0x158d58: 0xc5000404  lwc1        $f0, 0x404($t0)
    ctx->pc = 0x158d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158d5c:
    // 0x158d5c: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x158d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d60: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x158d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x158d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d68: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x158D68u;
    {
        const bool branch_taken_0x158d68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158d68) {
            ctx->pc = 0x158D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D68u;
            // 0x158d6c: 0xc5000408  lwc1        $f0, 0x408($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158D88u;
            goto label_158d88;
        }
    }
    ctx->pc = 0x158D70u;
    // 0x158d70: 0x546000d1  bnel        $v1, $zero, . + 4 + (0xD1 << 2)
    ctx->pc = 0x158D70u;
    {
        const bool branch_taken_0x158d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d70) {
            ctx->pc = 0x158D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D70u;
            // 0x158d74: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x158D78u;
    // 0x158d78: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158d7c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x158d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x158d80: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158d80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    // 0x158d84: 0xc5000408  lwc1        $f0, 0x408($t0)
    ctx->pc = 0x158d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158d88:
    // 0x158d88: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x158d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d8c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x158d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x158d90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158d90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x158D94u;
    {
        const bool branch_taken_0x158d94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158d94) {
            ctx->pc = 0x158DB0u;
            goto label_158db0;
        }
    }
    ctx->pc = 0x158D9Cu;
    // 0x158d9c: 0x546000c6  bnel        $v1, $zero, . + 4 + (0xC6 << 2)
    ctx->pc = 0x158D9Cu;
    {
        const bool branch_taken_0x158d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d9c) {
            ctx->pc = 0x158DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D9Cu;
            // 0x158da0: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x158DA4u;
    // 0x158da4: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158da8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x158da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x158dac: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158dacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
label_158db0:
    // 0x158db0: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x158DB0u;
    {
        const bool branch_taken_0x158db0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x158db0) {
            ctx->pc = 0x158DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158DB0u;
            // 0x158db4: 0xc50c0400  lwc1        $f12, 0x400($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158DC8u;
            goto label_158dc8;
        }
    }
    ctx->pc = 0x158DB8u;
    // 0x158db8: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158dbc: 0x544000be  bnel        $v0, $zero, . + 4 + (0xBE << 2)
    ctx->pc = 0x158DBCu;
    {
        const bool branch_taken_0x158dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158dbc) {
            ctx->pc = 0x158DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158DBCu;
            // 0x158dc0: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x158DC4u;
    // 0x158dc4: 0xc50c0400  lwc1        $f12, 0x400($t0)
    ctx->pc = 0x158dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_158dc8:
    // 0x158dc8: 0xc5460000  lwc1        $f6, 0x0($t2)
    ctx->pc = 0x158dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x158dcc: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x158dccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x158dd0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x158dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158dd4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158DD4u;
    {
        const bool branch_taken_0x158dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158dd4) {
            ctx->pc = 0x158DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158DD4u;
            // 0x158dd8: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158DDCu;
            goto label_158ddc;
        }
    }
    ctx->pc = 0x158DDCu;
label_158ddc:
    // 0x158ddc: 0xc5040404  lwc1        $f4, 0x404($t0)
    ctx->pc = 0x158ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x158de0: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x158de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158de4: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x158de4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x158de8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158dec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158DECu;
    {
        const bool branch_taken_0x158dec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158dec) {
            ctx->pc = 0x158DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158DECu;
            // 0x158df0: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158DF4u;
            goto label_158df4;
        }
    }
    ctx->pc = 0x158DF4u;
label_158df4:
    // 0x158df4: 0xc5030408  lwc1        $f3, 0x408($t0)
    ctx->pc = 0x158df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x158df8: 0xc5450008  lwc1        $f5, 0x8($t2)
    ctx->pc = 0x158df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x158dfc: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x158dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x158e00: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x158e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158E04u;
    {
        const bool branch_taken_0x158e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e04) {
            ctx->pc = 0x158E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E04u;
            // 0x158e08: 0x34a50004  ori         $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E0Cu;
            goto label_158e0c;
        }
    }
    ctx->pc = 0x158E0Cu;
label_158e0c:
    // 0x158e0c: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x158e0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x158e10: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x158e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158E18u;
    {
        const bool branch_taken_0x158e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e18) {
            ctx->pc = 0x158E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E18u;
            // 0x158e1c: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E20u;
            goto label_158e20;
        }
    }
    ctx->pc = 0x158E20u;
label_158e20:
    // 0x158e20: 0x46022040  add.s       $f1, $f4, $f2
    ctx->pc = 0x158e20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x158e24: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x158e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158E2Cu;
    {
        const bool branch_taken_0x158e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e2c) {
            ctx->pc = 0x158E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E2Cu;
            // 0x158e30: 0x34a50020  ori         $a1, $a1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E34u;
            goto label_158e34;
        }
    }
    ctx->pc = 0x158E34u;
label_158e34:
    // 0x158e34: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x158e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x158e38: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x158e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158e3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158E40u;
    {
        const bool branch_taken_0x158e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e40) {
            ctx->pc = 0x158E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E40u;
            // 0x158e44: 0x34a50040  ori         $a1, $a1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E48u;
            goto label_158e48;
        }
    }
    ctx->pc = 0x158E48u;
label_158e48:
    // 0x158e48: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x158e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x158e4c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x158E4Cu;
    {
        const bool branch_taken_0x158e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E4Cu;
        // 0x158e50: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e4c) {
            ctx->pc = 0x158EE0u;
            goto label_158ee0;
        }
    }
    ctx->pc = 0x158E54u;
    // 0x158e54: 0x460c3301  sub.s       $f12, $f6, $f12
    ctx->pc = 0x158e54u;
    ctx->f[12] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
    // 0x158e58: 0x460c2801  sub.s       $f0, $f5, $f12
    ctx->pc = 0x158e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x158e5c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x158e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e60: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x158E60u;
    {
        const bool branch_taken_0x158e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e60) {
            ctx->pc = 0x158EE0u;
            goto label_158ee0;
        }
    }
    ctx->pc = 0x158E68u;
    // 0x158e68: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x158e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x158e6c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x158e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e70: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x158E70u;
    {
        const bool branch_taken_0x158e70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E70u;
        // 0x158e74: 0x25060410  addiu       $a2, $t0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e70) {
            ctx->pc = 0x158EE0u;
            goto label_158ee0;
        }
    }
    ctx->pc = 0x158E78u;
    // 0x158e78: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x158e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x158e7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158e84: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x158e84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158e88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158e8c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x158e8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158e90: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158e94: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158e94u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158e98: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158e98u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158e9c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158e9cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158ea0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158ea4: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x158ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158ea8: 0x25060420  addiu       $a2, $t0, 0x420
    ctx->pc = 0x158ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
    // 0x158eac: 0xc5010404  lwc1        $f1, 0x404($t0)
    ctx->pc = 0x158eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158eb0: 0xc5000408  lwc1        $f0, 0x408($t0)
    ctx->pc = 0x158eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158eb4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x158eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158eb8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x158eb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158ebc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x158ebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158ec0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158ec4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158ec4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158ec8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158ec8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158ecc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158eccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158ed0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158ed4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x158ED4u;
    {
        const bool branch_taken_0x158ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ED4u;
        // 0x158ed8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ed4) {
            ctx->pc = 0x1590A4u;
            goto label_1590a4;
        }
    }
    ctx->pc = 0x158EDCu;
    // 0x158edc: 0x0  nop
    ctx->pc = 0x158edcu;
    // NOP
label_158ee0:
    // 0x158ee0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x158EE0u;
    {
        const bool branch_taken_0x158ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EE0u;
        // 0x158ee4: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ee0) {
            ctx->pc = 0x158F88u;
            goto label_158f88;
        }
    }
    ctx->pc = 0x158EE8u;
    // 0x158ee8: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x158ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158eec: 0xc5020400  lwc1        $f2, 0x400($t0)
    ctx->pc = 0x158eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158ef0: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x158ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ef4: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x158ef4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x158ef8: 0xc5010408  lwc1        $f1, 0x408($t0)
    ctx->pc = 0x158ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158efc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x158efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x158f00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x158f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158f04: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x158F04u;
    {
        const bool branch_taken_0x158f04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158f04) {
            ctx->pc = 0x158F88u;
            goto label_158f88;
        }
    }
    ctx->pc = 0x158F0Cu;
    // 0x158f0c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x158f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158f10: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x158f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x158f14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158f18: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x158F18u;
    {
        const bool branch_taken_0x158f18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F18u;
        // 0x158f1c: 0x25060410  addiu       $a2, $t0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f18) {
            ctx->pc = 0x158F88u;
            goto label_158f88;
        }
    }
    ctx->pc = 0x158F20u;
    // 0x158f20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158f24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158f2c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x158f2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158f30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158f30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158f34: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x158f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158f38: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158f3c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158f3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158f40: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158f40u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158f44: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158f44u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158f48: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158f48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158f4c: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x158f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158f50: 0x25060420  addiu       $a2, $t0, 0x420
    ctx->pc = 0x158f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
    // 0x158f54: 0xc5010404  lwc1        $f1, 0x404($t0)
    ctx->pc = 0x158f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158f58: 0xc5000408  lwc1        $f0, 0x408($t0)
    ctx->pc = 0x158f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158f5c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x158f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158f60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x158f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158f64: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x158f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158f68: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158f6c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158f6cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158f70: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158f70u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158f74: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158f74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158f78: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158f78u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158f7c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x158F7Cu;
    {
        const bool branch_taken_0x158f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F7Cu;
        // 0x158f80: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f7c) {
            ctx->pc = 0x1590A4u;
            goto label_1590a4;
        }
    }
    ctx->pc = 0x158F84u;
    // 0x158f84: 0x0  nop
    ctx->pc = 0x158f84u;
    // NOP
label_158f88:
    // 0x158f88: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x158F88u;
    {
        const bool branch_taken_0x158f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F88u;
        // 0x158f8c: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f88) {
            ctx->pc = 0x159000u;
            goto label_159000;
        }
    }
    ctx->pc = 0x158F90u;
    // 0x158f90: 0xc5010408  lwc1        $f1, 0x408($t0)
    ctx->pc = 0x158f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158f94: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x158f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158f98: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x158f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158f9c: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x158f9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x158fa0: 0xc5010400  lwc1        $f1, 0x400($t0)
    ctx->pc = 0x158fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158fa4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x158fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x158fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x158fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158fac: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x158FACu;
    {
        const bool branch_taken_0x158fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158fac) {
            ctx->pc = 0x159000u;
            goto label_159000;
        }
    }
    ctx->pc = 0x158FB4u;
    // 0x158fb4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x158fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158fb8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x158fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x158fbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158fc0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x158FC0u;
    {
        const bool branch_taken_0x158fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FC0u;
        // 0x158fc4: 0x25060410  addiu       $a2, $t0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fc0) {
            ctx->pc = 0x159000u;
            goto label_159000;
        }
    }
    ctx->pc = 0x158FC8u;
    // 0x158fc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158fcc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x158fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x158fd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158fd4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x158fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158fd8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158fd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158fdc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x158fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158fe0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158fe4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158fe4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158fe8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158fe8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158fec: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158fecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158ff0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158ff4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x158FF4u;
    {
        const bool branch_taken_0x158ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FF4u;
        // 0x158ff8: 0xc5420008  lwc1        $f2, 0x8($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ff4) {
            ctx->pc = 0x159074u;
            goto label_159074;
        }
    }
    ctx->pc = 0x158FFCu;
    // 0x158ffc: 0x0  nop
    ctx->pc = 0x158ffcu;
    // NOP
label_159000:
    // 0x159000: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x159000u;
    {
        const bool branch_taken_0x159000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159000) {
            ctx->pc = 0x159004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159000u;
            // 0x159004: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x159008u;
    // 0x159008: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x159008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15900c: 0xc5020408  lwc1        $f2, 0x408($t0)
    ctx->pc = 0x15900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159010: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x159010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159014: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x159014u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x159018: 0xc5010400  lwc1        $f1, 0x400($t0)
    ctx->pc = 0x159018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15901c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x15901cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x159020: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x159020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159024: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x159024u;
    {
        const bool branch_taken_0x159024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159024) {
            ctx->pc = 0x159028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159024u;
            // 0x159028: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x15902Cu;
    // 0x15902c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x15902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159030: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x159030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x159034: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159038: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x159038u;
    {
        const bool branch_taken_0x159038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159038) {
            ctx->pc = 0x15903Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159038u;
            // 0x15903c: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            goto label_1590b8;
        }
    }
    ctx->pc = 0x159040u;
    // 0x159040: 0x25060410  addiu       $a2, $t0, 0x410
    ctx->pc = 0x159040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1040));
    // 0x159044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15904c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15904cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159050: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x159050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159054: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x159054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x159058: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x159058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15905c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15905cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159060: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159060u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159064: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159064u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159068: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159068u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15906c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15906cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159070: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x159070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_159074:
    // 0x159074: 0x25060420  addiu       $a2, $t0, 0x420
    ctx->pc = 0x159074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
    // 0x159078: 0xc5010400  lwc1        $f1, 0x400($t0)
    ctx->pc = 0x159078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15907c: 0xc5000404  lwc1        $f0, 0x404($t0)
    ctx->pc = 0x15907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159080: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x159080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159084: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x159084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x159088: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x159088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15908c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15908cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159090: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159090u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159094: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159094u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159098: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159098u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15909c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15909cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1590a0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1590a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1590a4:
    // 0x1590a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1590a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590a8: 0xc0562d2  jal         func_158B48
    ctx->pc = 0x1590A8u;
    SET_GPR_U32(ctx, 31, 0x1590B0u);
    ctx->pc = 0x1590ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590A8u;
    // 0x1590ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158B48u, 0x1590A8u, 0x1590B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590B0u;
label_1590b0:
    // 0x1590b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1590B0u;
    {
        const bool branch_taken_0x1590b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590B0u;
        // 0x1590b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590b0) {
            ctx->pc = 0x1590C0u;
            goto label_1590c0;
        }
    }
    ctx->pc = 0x1590B8u;
label_1590b8:
    // 0x1590b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1590b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590bc: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x1590bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_1590c0:
    // 0x1590c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1590c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1590c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1590c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1590c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1590C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1590CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590C8u;
        // 0x1590cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1590C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1590D0u;
}
