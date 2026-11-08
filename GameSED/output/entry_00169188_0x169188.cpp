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

// Function: entry_00169188
// Address: 0x169188 - 0x169220
void entry_00169188_0x169188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169188_0x169188");
#endif

    switch (ctx->pc) {
        case 0x1691f0u: goto label_1691f0;
        case 0x169214u: goto label_169214;
        default: break;
    }

    ctx->pc = 0x169188u;

label_169188:
    // 0x169188: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x169188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16918c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16918cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169194: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x169194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169198: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x169198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x16919c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1691a0: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x1691a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1691a4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1691A4u;
    {
        const bool branch_taken_0x1691a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1691A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691A4u;
        // 0x1691a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691a4) {
            ctx->pc = 0x169188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169188;
        }
    }
    ctx->pc = 0x1691ACu;
    // 0x1691ac: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1691acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1691b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1691b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1691b4: 0x2463d360  addiu       $v1, $v1, -0x2CA0
    ctx->pc = 0x1691b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955872));
    // 0x1691b8: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x1691b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1691bc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1691bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x20D360u));
    // 0x1691c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1691c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1691c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1691c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1691c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1691c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1691cc: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x1691ccu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1691d0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1691d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1691d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1691d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691d8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1691d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1691dc: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x1691dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1691e0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1691e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1691e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1691e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1691e8: 0xc0618da  jal         func_186368
    ctx->pc = 0x1691E8u;
    SET_GPR_U32(ctx, 31, 0x1691F0u);
    ctx->pc = 0x1691ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691E8u;
    // 0x1691ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1691E8u, 0x1691F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691F0u;
label_1691f0:
    // 0x1691f0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1691f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1691f4: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1691f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1691f8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1691f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1691fc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1691fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x169200: 0x24a5d370  addiu       $a1, $a1, -0x2C90
    ctx->pc = 0x169200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955888));
    // 0x169204: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16920c: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x16920Cu;
    SET_GPR_U32(ctx, 31, 0x169214u);
    ctx->pc = 0x169210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16920Cu;
    // 0x169210: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x16920Cu, 0x169214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169214u;
label_169214:
    // 0x169214: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x169214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x169218: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x169218u;
    {
        const bool branch_taken_0x169218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169218u;
        // 0x16921c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169218) {
            ctx->pc = 0x169440u;
            return;
        }
    }
    ctx->pc = 0x169220u;
}
