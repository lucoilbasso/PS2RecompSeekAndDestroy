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

// Function: entry_001c6c38
// Address: 0x1c6c38 - 0x1c6c3c
void entry_001c6c38_0x1c6c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6c38_0x1c6c38");
#endif

    ctx->pc = 0x1c6c38u;

    // 0x1c6c38: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c6c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->pc = 0x1c6c3cu;
}
