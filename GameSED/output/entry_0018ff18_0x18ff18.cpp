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

// Function: entry_0018ff18
// Address: 0x18ff18 - 0x18ff50
void entry_0018ff18_0x18ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff18_0x18ff18");
#endif

    ctx->pc = 0x18ff18u;

    // 0x18ff18: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x18FF18u;
    {
        const bool branch_taken_0x18ff18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF18u;
        // 0x18ff1c: 0xc4c2000c  lwc1        $f2, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff18) {
            ctx->pc = 0x18FF54u;
            return;
        }
    }
    ctx->pc = 0x18FF20u;
    // 0x18ff20: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x18ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ff24: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x18ff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x18ff28: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x18ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff2c: 0xe5230008  swc1        $f3, 0x8($t1)
    ctx->pc = 0x18ff2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x18ff30: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x18ff30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x18ff34: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FF34u;
    {
        const bool branch_taken_0x18ff34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF34u;
        // 0x18ff38: 0xad20000c  sw          $zero, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff34) {
            ctx->pc = 0x18FF50u;
            return;
        }
    }
    ctx->pc = 0x18FF3Cu;
    // 0x18ff3c: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x18ff3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18ff40: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x18ff40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18ff44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18ff44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18ff48: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18ff48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ff4c: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x18ff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x18ff50u;
}
