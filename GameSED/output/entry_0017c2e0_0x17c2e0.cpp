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

// Function: entry_0017c2e0
// Address: 0x17c2e0 - 0x17c2e4
void entry_0017c2e0_0x17c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c2e0_0x17c2e0");
#endif

    ctx->pc = 0x17c2e0u;

    // 0x17c2e0: 0xace20040  sw          $v0, 0x40($a3)
    ctx->pc = 0x17c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 2));
    ctx->pc = 0x17c2e4u;
}
