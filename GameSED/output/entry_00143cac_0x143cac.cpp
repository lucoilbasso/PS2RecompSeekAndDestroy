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

// Function: entry_00143cac
// Address: 0x143cac - 0x143d00
void entry_00143cac_0x143cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143cac_0x143cac");
#endif

    ctx->pc = 0x143cacu;

    // 0x143cac: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x143CACu;
    {
        const bool branch_taken_0x143cac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CACu;
        // 0x143cb0: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cac) {
            ctx->pc = 0x143D00u;
            return;
        }
    }
    ctx->pc = 0x143CB4u;
    // 0x143cb4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x143cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x143cb8: 0x433006  srlv        $a2, $v1, $v0
    ctx->pc = 0x143cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x143cbc: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x143cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x143cc0: 0xae460210  sw          $a2, 0x210($s2)
    ctx->pc = 0x143cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 6));
    // 0x143cc4: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x143cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143cc8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x143cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143ccc: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x143cccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x143cd0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x143cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x143cd4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x143cd4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x143cd8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x143cd8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x143cdc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x143cdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x143ce0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x143ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x143ce4: 0x26660040  addiu       $a2, $s3, 0x40
    ctx->pc = 0x143ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x143ce8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x143ce8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x143cec: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x143cecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143cf0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x143cf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x143cf4: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x143cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x143cf8: 0xae530230  sw          $s3, 0x230($s2)
    ctx->pc = 0x143cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 19));
    // 0x143cfc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x143cfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143d00u;
}
