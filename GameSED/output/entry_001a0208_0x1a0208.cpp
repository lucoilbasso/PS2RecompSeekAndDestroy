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

// Function: entry_001a0208
// Address: 0x1a0208 - 0x1a020c
void entry_001a0208_0x1a0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0208_0x1a0208");
#endif

    ctx->pc = 0x1a0208u;

    // 0x1a0208: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x1a0208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    ctx->pc = 0x1a020cu;
}
