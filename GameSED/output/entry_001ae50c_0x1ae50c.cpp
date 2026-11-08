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

// Function: entry_001ae50c
// Address: 0x1ae50c - 0x1ae510
void entry_001ae50c_0x1ae50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae50c_0x1ae50c");
#endif

    ctx->pc = 0x1ae50cu;

    // 0x1ae50c: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x1ae50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->pc = 0x1ae510u;
}
