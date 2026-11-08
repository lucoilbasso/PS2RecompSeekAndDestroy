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

// Function: entry_0019f738
// Address: 0x19f738 - 0x19f73c
void entry_0019f738_0x19f738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f738_0x19f738");
#endif

    ctx->pc = 0x19f738u;

    // 0x19f738: 0xad67fff0  sw          $a3, -0x10($t3)
    ctx->pc = 0x19f738u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967280), GPR_U32(ctx, 7));
    ctx->pc = 0x19f73cu;
}
