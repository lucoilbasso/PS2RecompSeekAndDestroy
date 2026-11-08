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

// Function: entry_001499c4
// Address: 0x1499c4 - 0x1499c8
void entry_001499c4_0x1499c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001499c4_0x1499c4");
#endif

    ctx->pc = 0x1499c4u;

    // 0x1499c4: 0x245043d0  addiu       $s0, $v0, 0x43D0
    ctx->pc = 0x1499c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    ctx->pc = 0x1499c8u;
}
