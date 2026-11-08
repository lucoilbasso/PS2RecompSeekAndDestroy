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

// Function: entry_0017182c
// Address: 0x17182c - 0x171830
void entry_0017182c_0x17182c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017182c_0x17182c");
#endif

    ctx->pc = 0x17182cu;

    // 0x17182c: 0x244413b0  addiu       $a0, $v0, 0x13B0
    ctx->pc = 0x17182cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
    ctx->pc = 0x171830u;
}
