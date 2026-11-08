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

// Function: entry_0015427c
// Address: 0x15427c - 0x154280
void entry_0015427c_0x15427c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015427c_0x15427c");
#endif

    ctx->pc = 0x15427cu;

    // 0x15427c: 0x24051118  addiu       $a1, $zero, 0x1118
    ctx->pc = 0x15427cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    ctx->pc = 0x154280u;
}
