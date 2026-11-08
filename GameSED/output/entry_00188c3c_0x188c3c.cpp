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

// Function: entry_00188c3c
// Address: 0x188c3c - 0x188d18
void entry_00188c3c_0x188c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188c3c_0x188c3c");
#endif

    switch (ctx->pc) {
        case 0x188c48u: goto label_188c48;
        default: break;
    }

    ctx->pc = 0x188c3cu;

    // 0x188c3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x188c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c40: 0xc061422  jal         func_185088
    ctx->pc = 0x188C40u;
    SET_GPR_U32(ctx, 31, 0x188C48u);
    ctx->pc = 0x188C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C40u;
    // 0x188c44: 0x26500110  addiu       $s0, $s2, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x188C40u, 0x188C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C48u;
label_188c48:
    // 0x188c48: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x188c48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c4c: 0x265700e0  addiu       $s7, $s2, 0xE0
    ctx->pc = 0x188c4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x188c50: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x188c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x188c54: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x188c54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188c58: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x188c58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188c5c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x188c5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x188c60: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x188c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x188c64: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x188c64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x188c68: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x188c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x188c6c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x188c6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x188c70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c78: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x188c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c7c: 0x16a4004c  bne         $s5, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x188C7Cu;
    {
        const bool branch_taken_0x188c7c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x188C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C7Cu;
        // 0x188c80: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c7c) {
            ctx->pc = 0x188DB0u;
            return;
        }
    }
    ctx->pc = 0x188C84u;
    // 0x188c84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x188c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188c88: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x188c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x188c8c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x188C8Cu;
    {
        const bool branch_taken_0x188c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C8Cu;
        // 0x188c90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c8c) {
            ctx->pc = 0x188D18u;
            return;
        }
    }
    ctx->pc = 0x188C94u;
    // 0x188c94: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x188c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c98: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x188c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188c9c: 0x45020079  bc1fl       . + 4 + (0x79 << 2)
    ctx->pc = 0x188C9Cu;
    {
        const bool branch_taken_0x188c9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188c9c) {
            ctx->pc = 0x188CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188C9Cu;
            // 0x188ca0: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            return;
        }
    }
    ctx->pc = 0x188CA4u;
    // 0x188ca4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x188ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188ca8: 0x26430220  addiu       $v1, $s2, 0x220
    ctx->pc = 0x188ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x188cac: 0x248500d0  addiu       $a1, $a0, 0xD0
    ctx->pc = 0x188cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x188cb0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x188cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188cb4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x188cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x188cb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188cbc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x188cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188cc0: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x188cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x188cc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x188cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x188cc8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x188cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x188ccc: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x188cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x188cd0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x188cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188cd4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188cd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x188cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188cdc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x188cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x188ce0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x188ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x188ce4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x188ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188ce8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x188ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x188cec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188cf0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x188cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x188cf4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x188cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x188cf8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x188cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x188cfc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x188cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x188d00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x188d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188d04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x188d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188d08: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x188d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x188d0c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x188D0Cu;
    {
        const bool branch_taken_0x188d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D0Cu;
        // 0x188d10: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d0c) {
            ctx->pc = 0x188E80u;
            return;
        }
    }
    ctx->pc = 0x188D14u;
    // 0x188d14: 0x0  nop
    ctx->pc = 0x188d14u;
    // NOP
    ctx->pc = 0x188d18u;
}
