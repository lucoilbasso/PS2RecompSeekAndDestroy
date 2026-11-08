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

// Function: entry_00148740
// Address: 0x148740 - 0x148744
void entry_00148740_0x148740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148740_0x148740");
#endif

    ctx->pc = 0x148740u;

    // 0x148740: 0x246626c0  addiu       $a2, $v1, 0x26C0
    ctx->pc = 0x148740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
    ctx->pc = 0x148744u;
}
