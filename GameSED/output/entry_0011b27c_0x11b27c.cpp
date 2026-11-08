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

// Function: entry_0011b27c
// Address: 0x11b27c - 0x11b280
void entry_0011b27c_0x11b27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b27c_0x11b27c");
#endif

    ctx->pc = 0x11b27cu;

    // 0x11b27c: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x11b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->pc = 0x11b280u;
}
