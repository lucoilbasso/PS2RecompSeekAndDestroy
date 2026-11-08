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

// Function: entry_0014645c
// Address: 0x14645c - 0x1464f8
void entry_0014645c_0x14645c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014645c_0x14645c");
#endif

    ctx->pc = 0x14645cu;

    // 0x14645c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x146460: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x146460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146464: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x146464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14646c: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x14646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x146470: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x146470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x146474: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x146474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x146478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14647c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14647cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146480: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x146480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x146484: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x146484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x146488: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x146488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14648c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146490: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x146490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x146494: 0x46020142  mul.s       $f5, $f0, $f2
    ctx->pc = 0x146494u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x146498: 0x46020902  mul.s       $f4, $f1, $f2
    ctx->pc = 0x146498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14649c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x14649cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1464a0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1464a0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1464a4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1464a4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1464a8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1464a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1464ac: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x1464acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1464b0: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x1464b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1464b4: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x1464b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1464b8: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x1464b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1464bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1464bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1464c0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1464C0u;
    {
        const bool branch_taken_0x1464c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1464c0) {
            ctx->pc = 0x1464C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1464C0u;
            // 0x1464c4: 0x46002087  neg.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1464F8u;
            return;
        }
    }
    ctx->pc = 0x1464C8u;
    // 0x1464c8: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x1464c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x1464cc: 0xc7828178  lwc1        $f2, -0x7E88($gp)
    ctx->pc = 0x1464ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1464d0: 0xc780817c  lwc1        $f0, -0x7E84($gp)
    ctx->pc = 0x1464d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1464d4: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x1464d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1464d8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1464d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1464dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1464dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1464e0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1464e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1464e4: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1464e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1464e8: 0xe6040044  swc1        $f4, 0x44($s0)
    ctx->pc = 0x1464e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1464ec: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x1464ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1464f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1464F0u;
    {
        const bool branch_taken_0x1464f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1464F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464F0u;
        // 0x1464f4: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464f0) {
            ctx->pc = 0x146520u;
            return;
        }
    }
    ctx->pc = 0x1464F8u;
}
