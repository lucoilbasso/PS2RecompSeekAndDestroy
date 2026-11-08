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

// Function: entry_0014a1e4
// Address: 0x14a1e4 - 0x14a1f0
void entry_0014a1e4_0x14a1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a1e4_0x14a1e4");
#endif

    ctx->pc = 0x14a1e4u;

    // 0x14a1e4: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x14a1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14a1e8: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x14a1e8u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14a1ec: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14a1ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    ctx->pc = 0x14a1f0u;
}
