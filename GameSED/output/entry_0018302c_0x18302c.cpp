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

// Function: entry_0018302c
// Address: 0x18302c - 0x183030
void entry_0018302c_0x18302c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018302c_0x18302c");
#endif

    ctx->pc = 0x18302cu;

    // 0x18302c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x18302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    ctx->pc = 0x183030u;
}
