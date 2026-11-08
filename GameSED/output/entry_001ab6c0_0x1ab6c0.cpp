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

// Function: entry_001ab6c0
// Address: 0x1ab6c0 - 0x1ab6d0
void entry_001ab6c0_0x1ab6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab6c0_0x1ab6c0");
#endif

    ctx->pc = 0x1ab6c0u;

    // 0x1ab6c0: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x1ab6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1ab6c4: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1ab6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ab6c8: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x1ab6c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab6cc: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x1ab6ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
    ctx->pc = 0x1ab6d0u;
}
