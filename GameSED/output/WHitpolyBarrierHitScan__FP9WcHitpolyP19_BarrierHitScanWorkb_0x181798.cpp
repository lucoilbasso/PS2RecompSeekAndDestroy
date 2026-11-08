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

// Function: WHitpolyBarrierHitScan__FP9WcHitpolyP19_BarrierHitScanWorkb
// Address: 0x181798 - 0x18193c
void WHitpolyBarrierHitScan__FP9WcHitpolyP19_BarrierHitScanWorkb_0x181798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolyBarrierHitScan__FP9WcHitpolyP19_BarrierHitScanWorkb_0x181798");
#endif

    switch (ctx->pc) {
        case 0x181830u: goto label_181830;
        case 0x1818c8u: goto label_1818c8;
        case 0x181924u: goto label_181924;
        default: break;
    }

    ctx->pc = 0x181798u;

    // 0x181798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18179c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x18179cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1817a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1817a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1817a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1817a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1817ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1817acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817b0: 0x14c00019  bnez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1817B0u;
    {
        const bool branch_taken_0x1817b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1817B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817B0u;
        // 0x1817b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817b0) {
            ctx->pc = 0x181818u;
            goto label_181818;
        }
    }
    ctx->pc = 0x1817B8u;
    // 0x1817b8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1817b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1817bc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1817bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1817c0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1817c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1817c4: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1817c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1817c8: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x1817c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1817cc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1817ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1817d0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1817d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1817d4: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1817d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1817d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1817d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1817dc: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x1817dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1817e0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1817e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1817e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1817e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1817e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1817e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1817ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1817ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1817f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1817F0u;
    {
        const bool branch_taken_0x1817f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1817F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817F0u;
        // 0x1817f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817f0) {
            ctx->pc = 0x1817FCu;
            goto label_1817fc;
        }
    }
    ctx->pc = 0x1817F8u;
    // 0x1817f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1817f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1817fc:
    // 0x1817fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1817FCu;
    {
        const bool branch_taken_0x1817fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1817fc) {
            ctx->pc = 0x181818u;
            goto label_181818;
        }
    }
    ctx->pc = 0x181804u;
    // 0x181804: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x181804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181808: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x181808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18180c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18180Cu;
    {
        const bool branch_taken_0x18180c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18180Cu;
        // 0x181810: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18180c) {
            ctx->pc = 0x181818u;
            goto label_181818;
        }
    }
    ctx->pc = 0x181814u;
    // 0x181814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181818:
    // 0x181818: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x181818u;
    {
        const bool branch_taken_0x181818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181818u;
        // 0x18181c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181818) {
            ctx->pc = 0x181848u;
            goto label_181848;
        }
    }
    ctx->pc = 0x181820u;
    // 0x181820: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x181820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x181824: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x181824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x181828: 0xc060550  jal         func_181540
    ctx->pc = 0x181828u;
    SET_GPR_U32(ctx, 31, 0x181830u);
    ctx->pc = 0x18182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181828u;
    // 0x18182c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181540u, 0x181828u, 0x181830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181830u;
label_181830:
    // 0x181830: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x181830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181834: 0x10c0003c  beqz        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x181834u;
    {
        const bool branch_taken_0x181834 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x181838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181834u;
        // 0x181838: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181834) {
            ctx->pc = 0x181928u;
            goto label_181928;
        }
    }
    ctx->pc = 0x18183Cu;
    // 0x18183c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x18183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x181840: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x181840u;
    {
        const bool branch_taken_0x181840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181840u;
        // 0x181844: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181840) {
            ctx->pc = 0x181928u;
            goto label_181928;
        }
    }
    ctx->pc = 0x181848u;
label_181848:
    // 0x181848: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x181848u;
    {
        const bool branch_taken_0x181848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181848u;
        // 0x18184c: 0x26030030  addiu       $v1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181848) {
            ctx->pc = 0x1818A8u;
            goto label_1818a8;
        }
    }
    ctx->pc = 0x181850u;
    // 0x181850: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x181850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x181854: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x181854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x181858: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x181858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18185c: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x18185cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x181860: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x181860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x181864: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x181864u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x181868: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x181868u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18186c: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x18186cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181870: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x181870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181874: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x181874u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181878: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x181878u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18187c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18187cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181880: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x181880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181884: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x181884u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x181888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18188c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18188cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181890: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x181890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181898: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x181898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18189c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18189Cu;
    {
        const bool branch_taken_0x18189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18189Cu;
        // 0x1818a0: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18189c) {
            ctx->pc = 0x1818C0u;
            goto label_1818c0;
        }
    }
    ctx->pc = 0x1818A4u;
    // 0x1818a4: 0x0  nop
    ctx->pc = 0x1818a4u;
    // NOP
label_1818a8:
    // 0x1818a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1818a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1818ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1818ACu;
    {
        const bool branch_taken_0x1818ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1818ac) {
            ctx->pc = 0x1818B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1818ACu;
            // 0x1818b0: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1818D0u;
            goto label_1818d0;
        }
    }
    ctx->pc = 0x1818B4u;
    // 0x1818b4: 0xae100048  sw          $s0, 0x48($s0)
    ctx->pc = 0x1818b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 16));
    // 0x1818b8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1818b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1818bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1818c0:
    // 0x1818c0: 0xc060550  jal         func_181540
    ctx->pc = 0x1818C0u;
    SET_GPR_U32(ctx, 31, 0x1818C8u);
    ctx->pc = 0x181540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181540u, 0x1818C0u, 0x1818C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1818C8u;
label_1818c8:
    // 0x1818c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1818C8u;
    {
        const bool branch_taken_0x1818c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818C8u;
        // 0x1818cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818c8) {
            ctx->pc = 0x181928u;
            goto label_181928;
        }
    }
    ctx->pc = 0x1818D0u;
label_1818d0:
    // 0x1818d0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x1818d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1818d4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1818d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1818d8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1818d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1818dc: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x1818dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1818e0: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1818e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1818e4: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1818e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1818e8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1818e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1818ec: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x1818ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1818f0: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1818f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1818f4: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1818f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1818f8: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1818f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1818fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1818fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181900: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x181900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181904: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x181904u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x181908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18190c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18190cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181910: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x181910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181918: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x181918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18191c: 0xc060550  jal         func_181540
    ctx->pc = 0x18191Cu;
    SET_GPR_U32(ctx, 31, 0x181924u);
    ctx->pc = 0x181920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18191Cu;
    // 0x181920: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181540u, 0x18191Cu, 0x181924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181924u;
label_181924:
    // 0x181924: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x181924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181928:
    // 0x181928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18192c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x18192cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181930: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181934: 0x3e00008  jr          $ra
    ctx->pc = 0x181934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181934u;
        // 0x181938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18193Cu;
}
