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

// Function: entry_001480bc
// Address: 0x1480bc - 0x1480c8
void entry_001480bc_0x1480bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001480bc_0x1480bc");
#endif

    ctx->pc = 0x1480bcu;

    // 0x1480bc: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1480bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1480c0: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x1480c0u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1480c4: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x1480c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    ctx->pc = 0x1480c8u;
}
