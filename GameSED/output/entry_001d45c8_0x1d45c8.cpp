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

// Function: entry_001d45c8
// Address: 0x1d45c8 - 0x1d45cc
void entry_001d45c8_0x1d45c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d45c8_0x1d45c8");
#endif

    ctx->pc = 0x1d45c8u;

    // 0x1d45c8: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x1d45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    ctx->pc = 0x1d45ccu;
}
