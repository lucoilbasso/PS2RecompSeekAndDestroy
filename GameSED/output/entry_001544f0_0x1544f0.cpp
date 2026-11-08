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

// Function: entry_001544f0
// Address: 0x1544f0 - 0x1544f4
void entry_001544f0_0x1544f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001544f0_0x1544f0");
#endif

    ctx->pc = 0x1544f0u;

    // 0x1544f0: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1544f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->pc = 0x1544f4u;
}
