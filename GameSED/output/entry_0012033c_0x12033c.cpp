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

// Function: entry_0012033c
// Address: 0x12033c - 0x120340
void entry_0012033c_0x12033c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012033c_0x12033c");
#endif

    ctx->pc = 0x12033cu;

    // 0x12033c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x12033cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x120340u;
}
