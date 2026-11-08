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

// Function: entry_001d53ac
// Address: 0x1d53ac - 0x1d53b0
void entry_001d53ac_0x1d53ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d53ac_0x1d53ac");
#endif

    ctx->pc = 0x1d53acu;

    // 0x1d53ac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d53acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1d53b0u;
}
