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

// Function: entry_001a1ac4
// Address: 0x1a1ac4 - 0x1a1ac8
void entry_001a1ac4_0x1a1ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ac4_0x1a1ac4");
#endif

    ctx->pc = 0x1a1ac4u;

    // 0x1a1ac4: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x1a1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    ctx->pc = 0x1a1ac8u;
}
