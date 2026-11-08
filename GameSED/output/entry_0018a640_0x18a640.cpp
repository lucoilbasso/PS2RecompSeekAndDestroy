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

// Function: entry_0018a640
// Address: 0x18a640 - 0x18a664
void entry_0018a640_0x18a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a640_0x18a640");
#endif

    ctx->pc = 0x18a640u;

    // 0x18a640: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x18a640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x18a644: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18A644u;
    {
        const bool branch_taken_0x18a644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a644) {
            ctx->pc = 0x18A648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A644u;
            // 0x18a648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A678u;
            return;
        }
    }
    ctx->pc = 0x18A64Cu;
    // 0x18a64c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x18a64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a650: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18a650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18a654: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x18a654u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18a658: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x18a658u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a65c: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x18a65cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a660: 0x63000  sll         $a2, $a2, 0
    ctx->pc = 0x18a660u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
    ctx->pc = 0x18a664u;
}
