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

// Function: entry_001651c4
// Address: 0x1651c4 - 0x1651c8
void entry_001651c4_0x1651c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001651c4_0x1651c4");
#endif

    ctx->pc = 0x1651c4u;

    // 0x1651c4: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x1651c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
    ctx->pc = 0x1651c8u;
}
