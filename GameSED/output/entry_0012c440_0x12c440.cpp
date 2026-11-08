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

// Function: entry_0012c440
// Address: 0x12c440 - 0x12c444
void entry_0012c440_0x12c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c440_0x12c440");
#endif

    ctx->pc = 0x12c440u;

    // 0x12c440: 0xac400480  sw          $zero, 0x480($v0)
    ctx->pc = 0x12c440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1152), GPR_U32(ctx, 0));
    ctx->pc = 0x12c444u;
}
