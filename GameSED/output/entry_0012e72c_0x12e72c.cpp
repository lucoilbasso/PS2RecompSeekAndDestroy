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

// Function: entry_0012e72c
// Address: 0x12e72c - 0x12e730
void entry_0012e72c_0x12e72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e72c_0x12e72c");
#endif

    ctx->pc = 0x12e72cu;

    // 0x12e72c: 0xaf808a08  sw          $zero, -0x75F8($gp)
    ctx->pc = 0x12e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 0));
    ctx->pc = 0x12e730u;
}
