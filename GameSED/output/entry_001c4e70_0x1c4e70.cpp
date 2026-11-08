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

// Function: entry_001c4e70
// Address: 0x1c4e70 - 0x1c4e78
void entry_001c4e70_0x1c4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4e70_0x1c4e70");
#endif

    ctx->pc = 0x1c4e70u;

    // 0x1c4e70: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1c4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1c4e74: 0x0  nop
    ctx->pc = 0x1c4e74u;
    // NOP
    ctx->pc = 0x1c4e78u;
}
