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

// Function: entry_0011b8f4
// Address: 0x11b8f4 - 0x11b8f8
void entry_0011b8f4_0x11b8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8f4_0x11b8f4");
#endif

    ctx->pc = 0x11b8f4u;

    // 0x11b8f4: 0xac403410  sw          $zero, 0x3410($v0)
    ctx->pc = 0x11b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13328), GPR_U32(ctx, 0));
    ctx->pc = 0x11b8f8u;
}
