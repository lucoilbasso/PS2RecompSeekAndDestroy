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

// Function: entry_0019f5f0
// Address: 0x19f5f0 - 0x19f5f4
void entry_0019f5f0_0x19f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5f0_0x19f5f0");
#endif

    ctx->pc = 0x19f5f0u;

    // 0x19f5f0: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x19f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x19f5f4u;
}
