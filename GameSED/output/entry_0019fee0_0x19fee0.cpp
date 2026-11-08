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

// Function: entry_0019fee0
// Address: 0x19fee0 - 0x19fee4
void entry_0019fee0_0x19fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fee0_0x19fee0");
#endif

    ctx->pc = 0x19fee0u;

    // 0x19fee0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x19fee4u;
}
