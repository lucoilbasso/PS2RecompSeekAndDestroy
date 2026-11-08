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

// Function: entry_0012111c
// Address: 0x12111c - 0x121120
void entry_0012111c_0x12111c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012111c_0x12111c");
#endif

    ctx->pc = 0x12111cu;

    // 0x12111c: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x12111cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    ctx->pc = 0x121120u;
}
