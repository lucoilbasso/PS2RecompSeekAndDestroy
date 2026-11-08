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

// Function: entry_001a5338
// Address: 0x1a5338 - 0x1a533c
void entry_001a5338_0x1a5338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5338_0x1a5338");
#endif

    ctx->pc = 0x1a5338u;

    // 0x1a5338: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1a5338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    ctx->pc = 0x1a533cu;
}
