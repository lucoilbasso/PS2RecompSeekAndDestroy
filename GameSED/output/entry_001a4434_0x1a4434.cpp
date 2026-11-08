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

// Function: entry_001a4434
// Address: 0x1a4434 - 0x1a4438
void entry_001a4434_0x1a4434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4434_0x1a4434");
#endif

    ctx->pc = 0x1a4434u;

    // 0x1a4434: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x1a4434u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x1a4438u;
}
