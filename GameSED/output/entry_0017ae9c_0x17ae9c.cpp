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

// Function: entry_0017ae9c
// Address: 0x17ae9c - 0x17aea0
void entry_0017ae9c_0x17ae9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ae9c_0x17ae9c");
#endif

    ctx->pc = 0x17ae9cu;

    // 0x17ae9c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x17ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x17aea0u;
}
