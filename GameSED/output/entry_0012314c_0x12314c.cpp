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

// Function: entry_0012314c
// Address: 0x12314c - 0x123150
void entry_0012314c_0x12314c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012314c_0x12314c");
#endif

    ctx->pc = 0x12314cu;

    // 0x12314c: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x12314cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    ctx->pc = 0x123150u;
}
