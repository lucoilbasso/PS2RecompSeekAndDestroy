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

// Function: entry_00155ce0
// Address: 0x155ce0 - 0x155ce4
void entry_00155ce0_0x155ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ce0_0x155ce0");
#endif

    ctx->pc = 0x155ce0u;

    // 0x155ce0: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x155ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x155ce4u;
}
