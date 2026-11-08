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

// Function: entry_001a9750
// Address: 0x1a9750 - 0x1a9754
void entry_001a9750_0x1a9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9750_0x1a9750");
#endif

    ctx->pc = 0x1a9750u;

    // 0x1a9750: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x1a9750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    ctx->pc = 0x1a9754u;
}
