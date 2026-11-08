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

// Function: entry_0013d7f0
// Address: 0x13d7f0 - 0x13d7f4
void entry_0013d7f0_0x13d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d7f0_0x13d7f0");
#endif

    ctx->pc = 0x13d7f0u;

    // 0x13d7f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x13d7f4u;
}
