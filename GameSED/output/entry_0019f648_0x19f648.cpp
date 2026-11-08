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

// Function: entry_0019f648
// Address: 0x19f648 - 0x19f64c
void entry_0019f648_0x19f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f648_0x19f648");
#endif

    ctx->pc = 0x19f648u;

    // 0x19f648: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x19f648u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x19f64cu;
}
