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

// Function: entry_001a99d4
// Address: 0x1a99d4 - 0x1a99d8
void entry_001a99d4_0x1a99d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a99d4_0x1a99d4");
#endif

    ctx->pc = 0x1a99d4u;

    // 0x1a99d4: 0xac8300a8  sw          $v1, 0xA8($a0)
    ctx->pc = 0x1a99d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 3));
    ctx->pc = 0x1a99d8u;
}
