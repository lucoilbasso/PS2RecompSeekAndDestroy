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

// Function: entry_001a8014
// Address: 0x1a8014 - 0x1a8018
void entry_001a8014_0x1a8014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8014_0x1a8014");
#endif

    ctx->pc = 0x1a8014u;

    // 0x1a8014: 0x24477b40  addiu       $a3, $v0, 0x7B40
    ctx->pc = 0x1a8014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    ctx->pc = 0x1a8018u;
}
