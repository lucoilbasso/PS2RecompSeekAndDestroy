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

// Function: entry_001ccc28
// Address: 0x1ccc28 - 0x1ccc2c
void entry_001ccc28_0x1ccc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccc28_0x1ccc28");
#endif

    ctx->pc = 0x1ccc28u;

    // 0x1ccc28: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1ccc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x1ccc2cu;
}
