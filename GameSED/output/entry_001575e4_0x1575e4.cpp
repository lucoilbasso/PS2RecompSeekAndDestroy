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

// Function: entry_001575e4
// Address: 0x1575e4 - 0x157638
void entry_001575e4_0x1575e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001575e4_0x1575e4");
#endif

    ctx->pc = 0x1575e4u;

    // 0x1575e4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1575e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1575e8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1575e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575ec: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1575ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1575f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1575f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1575f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1575f8: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x1575f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x1575fc: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x1575fcu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x157600: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x157600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157604: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x157604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x157608: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x157608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15760c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x15760cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x157610: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x157610u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x157614: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x157614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157618: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x157618u;
    {
        const bool branch_taken_0x157618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157618u;
        // 0x15761c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157618) {
            ctx->pc = 0x157638u;
            return;
        }
    }
    ctx->pc = 0x157620u;
    // 0x157620: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x157620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x157624: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x157624u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157628: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15762c: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x15762cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157630: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157630u;
    {
        const bool branch_taken_0x157630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157630u;
        // 0x157634: 0xe4e00020  swc1        $f0, 0x20($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157630) {
            ctx->pc = 0x157648u;
            return;
        }
    }
    ctx->pc = 0x157638u;
}
