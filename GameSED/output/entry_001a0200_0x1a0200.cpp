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

// Function: entry_001a0200
// Address: 0x1a0200 - 0x1a0204
void entry_001a0200_0x1a0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0200_0x1a0200");
#endif

    ctx->pc = 0x1a0200u;

    // 0x1a0200: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x1a0200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    ctx->pc = 0x1a0204u;
}
