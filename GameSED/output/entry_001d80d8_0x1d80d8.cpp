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

// Function: entry_001d80d8
// Address: 0x1d80d8 - 0x1d80dc
void entry_001d80d8_0x1d80d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d80d8_0x1d80d8");
#endif

    ctx->pc = 0x1d80d8u;

    // 0x1d80d8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1d80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x1d80dcu;
}
