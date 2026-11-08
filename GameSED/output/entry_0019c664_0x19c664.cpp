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

// Function: entry_0019c664
// Address: 0x19c664 - 0x19c668
void entry_0019c664_0x19c664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c664_0x19c664");
#endif

    ctx->pc = 0x19c664u;

    // 0x19c664: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x19c664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x19c668u;
}
