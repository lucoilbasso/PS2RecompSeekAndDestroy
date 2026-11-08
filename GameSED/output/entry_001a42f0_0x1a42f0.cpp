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

// Function: entry_001a42f0
// Address: 0x1a42f0 - 0x1a42f4
void entry_001a42f0_0x1a42f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a42f0_0x1a42f0");
#endif

    ctx->pc = 0x1a42f0u;

    // 0x1a42f0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1a42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x1a42f4u;
}
