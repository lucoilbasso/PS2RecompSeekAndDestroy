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

// Function: entry_001a4198
// Address: 0x1a4198 - 0x1a419c
void entry_001a4198_0x1a4198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4198_0x1a4198");
#endif

    ctx->pc = 0x1a4198u;

    // 0x1a4198: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1a4198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->pc = 0x1a419cu;
}
