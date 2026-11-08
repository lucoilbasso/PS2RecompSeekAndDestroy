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

// Function: entry_001d4398
// Address: 0x1d4398 - 0x1d439c
void entry_001d4398_0x1d4398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4398_0x1d4398");
#endif

    ctx->pc = 0x1d4398u;

    // 0x1d4398: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1d4398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x1d439cu;
}
