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

// Function: entry_001531c0
// Address: 0x1531c0 - 0x153218
void entry_001531c0_0x1531c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001531c0_0x1531c0");
#endif

    ctx->pc = 0x1531c0u;

    // 0x1531c0: 0x8e230374  lw          $v1, 0x374($s1)
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x1531c4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1531c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1531c8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1531c8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1531cc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1531ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1531d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1531d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1531d4: 0xc6200308  lwc1        $f0, 0x308($s1)
    ctx->pc = 0x1531d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1531d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1531d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1531dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1531DCu;
    {
        const bool branch_taken_0x1531dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531DCu;
        // 0x1531e0: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531dc) {
            ctx->pc = 0x153218u;
            return;
        }
    }
    ctx->pc = 0x1531E4u;
    // 0x1531e4: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x1531e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1531e8: 0x8c431ab0  lw          $v1, 0x1AB0($v0)
    ctx->pc = 0x1531e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6832)));
    // 0x1531ec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1531ECu;
    {
        const bool branch_taken_0x1531ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531ECu;
        // 0x1531f0: 0x162602  srl         $a0, $s6, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531ec) {
            ctx->pc = 0x15321Cu;
            return;
        }
    }
    ctx->pc = 0x1531F4u;
    // 0x1531f4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x1531f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1531f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1531f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1531fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1531fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x153200: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153200u;
    {
        const bool branch_taken_0x153200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153200) {
            ctx->pc = 0x15321Cu;
            return;
        }
    }
    ctx->pc = 0x153208u;
    // 0x153208: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x153208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x15320c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15320cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x153210: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x153210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x153214: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x153214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
    ctx->pc = 0x153218u;
}
