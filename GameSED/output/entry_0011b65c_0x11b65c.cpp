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

// Function: entry_0011b65c
// Address: 0x11b65c - 0x11b660
void entry_0011b65c_0x11b65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b65c_0x11b65c");
#endif

    ctx->pc = 0x11b65cu;

    // 0x11b65c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x11b660u;
}
