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

// Function: entry_0012543c
// Address: 0x12543c - 0x125498
void entry_0012543c_0x12543c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012543c_0x12543c");
#endif

    switch (ctx->pc) {
        case 0x125478u: goto label_125478;
        case 0x125490u: goto label_125490;
        default: break;
    }

    ctx->pc = 0x12543cu;

    // 0x12543c: 0xa3a300c3  sb          $v1, 0xC3($sp)
    ctx->pc = 0x12543cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 3));
    // 0x125440: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x125440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125444: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x125444u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x125448: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x125448u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12544c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12544cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x125450: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x125450u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x125454: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x125454u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x125458: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x125458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12545c: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x125460: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x125460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x125464: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x125464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x125468: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12546c: 0x27c5ebf0  addiu       $a1, $fp, -0x1410
    ctx->pc = 0x12546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962160));
    // 0x125470: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x125470u;
    SET_GPR_U32(ctx, 31, 0x125478u);
    ctx->pc = 0x125474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125470u;
    // 0x125474: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x125470u, 0x125478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125478u;
label_125478:
    // 0x125478: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x125478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12547c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125480: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125484: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x125484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x125488: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x125488u;
    SET_GPR_U32(ctx, 31, 0x125490u);
    ctx->pc = 0x12548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125488u;
    // 0x12548c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x125488u, 0x125490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125490u;
label_125490:
    // 0x125490: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x125490u;
    {
        const bool branch_taken_0x125490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125490u;
        // 0x125494: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125490) {
            ctx->pc = 0x1254C4u;
            return;
        }
    }
    ctx->pc = 0x125498u;
}
