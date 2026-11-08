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

// Function: entry_001b5118
// Address: 0x1b5118 - 0x1b511c
void entry_001b5118_0x1b5118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5118_0x1b5118");
#endif

    ctx->pc = 0x1b5118u;

    // 0x1b5118: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b5118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1b511cu;
}
