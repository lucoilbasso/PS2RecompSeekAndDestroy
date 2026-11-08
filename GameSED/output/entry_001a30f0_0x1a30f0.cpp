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

// Function: entry_001a30f0
// Address: 0x1a30f0 - 0x1a3158
void entry_001a30f0_0x1a30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a30f0_0x1a30f0");
#endif

    ctx->pc = 0x1a30f0u;

    // 0x1a30f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a30f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30f4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1a30f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a30f8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1a30f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a30fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a30fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a3100: 0x4a0002ff  vnop
    ctx->pc = 0x1a3100u;
    // NOP operation, no action needed for VU0
    // 0x1a3104: 0x4a0002ff  vnop
    ctx->pc = 0x1a3104u;
    // NOP operation, no action needed for VU0
    // 0x1a3108: 0x4a0002ff  vnop
    ctx->pc = 0x1a3108u;
    // NOP operation, no action needed for VU0
    // 0x1a310c: 0x4a0002ff  vnop
    ctx->pc = 0x1a310cu;
    // NOP operation, no action needed for VU0
    // 0x1a3110: 0x4a0002ff  vnop
    ctx->pc = 0x1a3110u;
    // NOP operation, no action needed for VU0
    // 0x1a3114: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1a3114u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1a3118: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1a3118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1a311c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1a311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1a3120: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1a3120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a3124: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A3124u;
    {
        const bool branch_taken_0x1a3124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3124) {
            ctx->pc = 0x1A31E0u;
            return;
        }
    }
    ctx->pc = 0x1A312Cu;
    // 0x1a312c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a312cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a3130: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a3130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a3134: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A3134u;
    {
        const bool branch_taken_0x1a3134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3134u;
        // 0x1a3138: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3134) {
            ctx->pc = 0x1A31E0u;
            return;
        }
    }
    ctx->pc = 0x1A313Cu;
    // 0x1a313c: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1a313cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a3140: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1a3140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a3144: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a3148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3148u;
    {
        const bool branch_taken_0x1a3148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3148u;
        // 0x1a314c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3148) {
            ctx->pc = 0x1A3158u;
            return;
        }
    }
    ctx->pc = 0x1A3150u;
    // 0x1a3150: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x1a3150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1a3154: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1a3154u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1a3158u;
}
