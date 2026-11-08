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

// Function: entry_0011cd9c
// Address: 0x11cd9c - 0x11cda4
void entry_0011cd9c_0x11cd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cd9c_0x11cd9c");
#endif

    ctx->pc = 0x11cd9cu;

    // 0x11cd9c: 0xac60404c  sw          $zero, 0x404C($v1)
    ctx->pc = 0x11cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16460), GPR_U32(ctx, 0));
    // 0x11cda0: 0x8c62404c  lw          $v0, 0x404C($v1)
    ctx->pc = 0x11cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16460)));
    ctx->pc = 0x11cda4u;
}
