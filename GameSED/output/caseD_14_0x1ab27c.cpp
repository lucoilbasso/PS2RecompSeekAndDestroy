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

// Function: caseD_14
// Address: 0x1ab27c - 0x1ab284
void caseD_14_0x1ab27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x1ab27c");
#endif

    ctx->pc = 0x1ab27cu;

    // 0x1ab27c: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x1ab27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ab280: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x1ab280u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x1ab284u;
}
