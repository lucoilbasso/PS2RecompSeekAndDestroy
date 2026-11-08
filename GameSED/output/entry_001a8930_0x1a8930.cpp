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

// Function: entry_001a8930
// Address: 0x1a8930 - 0x1a8934
void entry_001a8930_0x1a8930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8930_0x1a8930");
#endif

    ctx->pc = 0x1a8930u;

    // 0x1a8930: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    ctx->pc = 0x1a8934u;
}
