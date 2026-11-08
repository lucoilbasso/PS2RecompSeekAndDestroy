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

// Function: entry_001888e4
// Address: 0x1888e4 - 0x1888e8
void entry_001888e4_0x1888e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001888e4_0x1888e4");
#endif

    ctx->pc = 0x1888e4u;

    // 0x1888e4: 0x24428950  addiu       $v0, $v0, -0x76B0
    ctx->pc = 0x1888e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936912));
    ctx->pc = 0x1888e8u;
}
