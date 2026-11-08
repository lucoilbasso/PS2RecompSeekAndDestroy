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

// Function: entry_00165278
// Address: 0x165278 - 0x1652a0
void entry_00165278_0x165278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165278_0x165278");
#endif

    switch (ctx->pc) {
        case 0x165280u: goto label_165280;
        default: break;
    }

    ctx->pc = 0x165278u;

    // 0x165278: 0xc04c99a  jal         func_132668
    ctx->pc = 0x165278u;
    SET_GPR_U32(ctx, 31, 0x165280u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x165278u, 0x165280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165280u;
label_165280:
    // 0x165280: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x165280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165284: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x165284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x165288: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x165288u;
    {
        const bool branch_taken_0x165288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x165288) {
            ctx->pc = 0x1652A0u;
            return;
        }
    }
    ctx->pc = 0x165290u;
    // 0x165290: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x165290u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165294: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x165294u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x165298: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x165298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16529c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x16529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x1652a0u;
}
