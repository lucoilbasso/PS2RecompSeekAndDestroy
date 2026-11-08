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

// Function: entry_0014a4fc
// Address: 0x14a4fc - 0x14a530
void entry_0014a4fc_0x14a4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a4fc_0x14a4fc");
#endif

    ctx->pc = 0x14a4fcu;

    // 0x14a4fc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x14a4fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a500: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x14a500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x14a504: 0x4a0002ff  vnop
    ctx->pc = 0x14a504u;
    // NOP operation, no action needed for VU0
    // 0x14a508: 0x4a0002ff  vnop
    ctx->pc = 0x14a508u;
    // NOP operation, no action needed for VU0
    // 0x14a50c: 0x4a0002ff  vnop
    ctx->pc = 0x14a50cu;
    // NOP operation, no action needed for VU0
    // 0x14a510: 0x4a0002ff  vnop
    ctx->pc = 0x14a510u;
    // NOP operation, no action needed for VU0
    // 0x14a514: 0x4a0002ff  vnop
    ctx->pc = 0x14a514u;
    // NOP operation, no action needed for VU0
    // 0x14a518: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x14a518u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x14a51c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x14a51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x14a520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a524: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x14a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x14a528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a52c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14a52cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x14a530u;
}
