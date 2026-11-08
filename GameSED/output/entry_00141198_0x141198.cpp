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

// Function: entry_00141198
// Address: 0x141198 - 0x1411d8
void entry_00141198_0x141198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141198_0x141198");
#endif

    ctx->pc = 0x141198u;

    // 0x141198: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x141198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14119c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1411a0: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x1411a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1411a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1411a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1411a8: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1411a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1411ac: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1411acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1411b0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1411b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1411b4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1411b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1411b8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1411b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1411bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1411bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1411c0: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x1411c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1411c4: 0x4602a032  c.eq.s      $f20, $f2
    ctx->pc = 0x1411c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1411c8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1411C8u;
    {
        const bool branch_taken_0x1411c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1411c8) {
            ctx->pc = 0x1411CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1411C8u;
            // 0x1411cc: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1411D8u;
            return;
        }
    }
    ctx->pc = 0x1411D0u;
    // 0x1411d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1411D0u;
    {
        const bool branch_taken_0x1411d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411D0u;
        // 0x1411d4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411d0) {
            ctx->pc = 0x1411E0u;
            return;
        }
    }
    ctx->pc = 0x1411D8u;
}
