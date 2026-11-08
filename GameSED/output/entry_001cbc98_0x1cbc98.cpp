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

// Function: entry_001cbc98
// Address: 0x1cbc98 - 0x1cbc9c
void entry_001cbc98_0x1cbc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc98_0x1cbc98");
#endif

    ctx->pc = 0x1cbc98u;

    // 0x1cbc98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1cbc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1cbc9cu;
}
