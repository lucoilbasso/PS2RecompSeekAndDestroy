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

// Function: entry_00171eb0
// Address: 0x171eb0 - 0x171eb4
void entry_00171eb0_0x171eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171eb0_0x171eb0");
#endif

    ctx->pc = 0x171eb0u;

    // 0x171eb0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x171eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    ctx->pc = 0x171eb4u;
}
