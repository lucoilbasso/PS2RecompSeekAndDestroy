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

// Function: entry_001d9924
// Address: 0x1d9924 - 0x1d992c
void entry_001d9924_0x1d9924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9924_0x1d9924");
#endif

    ctx->pc = 0x1d9924u;

    // 0x1d9924: 0xac850854  sw          $a1, 0x854($a0)
    ctx->pc = 0x1d9924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2132), GPR_U32(ctx, 5));
    // 0x1d9928: 0xac820858  sw          $v0, 0x858($a0)
    ctx->pc = 0x1d9928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2136), GPR_U32(ctx, 2));
    ctx->pc = 0x1d992cu;
}
