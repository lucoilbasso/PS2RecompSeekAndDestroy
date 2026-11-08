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

// Function: entry_00174bb0
// Address: 0x174bb0 - 0x174bb4
void entry_00174bb0_0x174bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174bb0_0x174bb0");
#endif

    ctx->pc = 0x174bb0u;

    // 0x174bb0: 0xaf808c0c  sw          $zero, -0x73F4($gp)
    ctx->pc = 0x174bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937612), GPR_U32(ctx, 0));
    ctx->pc = 0x174bb4u;
}
