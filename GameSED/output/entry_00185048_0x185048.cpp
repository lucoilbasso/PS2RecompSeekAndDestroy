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

// Function: entry_00185048
// Address: 0x185048 - 0x18506c
void entry_00185048_0x185048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185048_0x185048");
#endif

    ctx->pc = 0x185048u;

    // 0x185048: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x185048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x18504c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18504cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185050: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x185050u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x185054: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x185054u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x185058: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x185058u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18505c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18505cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x185060: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x185060u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x185064: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x185064u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x185068: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x185068u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    ctx->pc = 0x18506cu;
}
