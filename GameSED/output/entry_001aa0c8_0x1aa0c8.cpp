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

// Function: entry_001aa0c8
// Address: 0x1aa0c8 - 0x1aa0cc
void entry_001aa0c8_0x1aa0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa0c8_0x1aa0c8");
#endif

    ctx->pc = 0x1aa0c8u;

    // 0x1aa0c8: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x1aa0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    ctx->pc = 0x1aa0ccu;
}
