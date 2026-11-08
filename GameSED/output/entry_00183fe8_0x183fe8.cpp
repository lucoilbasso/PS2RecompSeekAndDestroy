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

// Function: entry_00183fe8
// Address: 0x183fe8 - 0x183ff4
void entry_00183fe8_0x183fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183fe8_0x183fe8");
#endif

    ctx->pc = 0x183fe8u;

    // 0x183fe8: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x183fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x183fec: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x183fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x183ff0: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x183ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    ctx->pc = 0x183ff4u;
}
