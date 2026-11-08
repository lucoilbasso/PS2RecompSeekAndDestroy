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

// Function: entry_0017a2a0
// Address: 0x17a2a0 - 0x17a2a4
void entry_0017a2a0_0x17a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a2a0_0x17a2a0");
#endif

    ctx->pc = 0x17a2a0u;

    // 0x17a2a0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x17a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x17a2a4u;
}
