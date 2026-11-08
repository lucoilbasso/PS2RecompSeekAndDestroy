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

// Function: entry_0011ca3c
// Address: 0x11ca3c - 0x11ca48
void entry_0011ca3c_0x11ca3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca3c_0x11ca3c");
#endif

    ctx->pc = 0x11ca3cu;

    // 0x11ca3c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x11ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x11ca40: 0x284200b7  slti        $v0, $v0, 0xB7
    ctx->pc = 0x11ca40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)183) ? 1 : 0);
    // 0x11ca44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11ca44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x11ca48u;
}
