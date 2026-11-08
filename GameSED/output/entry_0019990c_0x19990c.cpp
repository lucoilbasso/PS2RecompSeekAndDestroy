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

// Function: entry_0019990c
// Address: 0x19990c - 0x199910
void entry_0019990c_0x19990c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019990c_0x19990c");
#endif

    ctx->pc = 0x19990cu;

    // 0x19990c: 0x24429930  addiu       $v0, $v0, -0x66D0
    ctx->pc = 0x19990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940976));
    ctx->pc = 0x199910u;
}
