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

// Function: entry_0017a29c
// Address: 0x17a29c - 0x17a2a0
void entry_0017a29c_0x17a29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a29c_0x17a29c");
#endif

    ctx->pc = 0x17a29cu;

    // 0x17a29c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x17a2a0u;
}
