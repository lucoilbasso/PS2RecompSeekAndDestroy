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

// Function: entry_0012a068
// Address: 0x12a068 - 0x12a06c
void entry_0012a068_0x12a068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a068_0x12a068");
#endif

    ctx->pc = 0x12a068u;

    // 0x12a068: 0x248203e8  addiu       $v0, $a0, 0x3E8
    ctx->pc = 0x12a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    ctx->pc = 0x12a06cu;
}
