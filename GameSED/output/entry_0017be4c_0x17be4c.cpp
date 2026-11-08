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

// Function: entry_0017be4c
// Address: 0x17be4c - 0x17be50
void entry_0017be4c_0x17be4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017be4c_0x17be4c");
#endif

    ctx->pc = 0x17be4cu;

    // 0x17be4c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    ctx->pc = 0x17be50u;
}
