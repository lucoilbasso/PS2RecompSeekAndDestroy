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

// Function: entry_0012c43c
// Address: 0x12c43c - 0x12c440
void entry_0012c43c_0x12c43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c43c_0x12c43c");
#endif

    ctx->pc = 0x12c43cu;

    // 0x12c43c: 0xac400484  sw          $zero, 0x484($v0)
    ctx->pc = 0x12c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1156), GPR_U32(ctx, 0));
    ctx->pc = 0x12c440u;
}
