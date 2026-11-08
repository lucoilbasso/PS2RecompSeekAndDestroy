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

// Function: entry_0019375c
// Address: 0x19375c - 0x193760
void entry_0019375c_0x19375c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019375c_0x19375c");
#endif

    ctx->pc = 0x19375cu;

    // 0x19375c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x19375cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x193760u;
}
