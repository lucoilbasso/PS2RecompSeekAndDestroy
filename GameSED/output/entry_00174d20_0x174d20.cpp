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

// Function: entry_00174d20
// Address: 0x174d20 - 0x174d28
void entry_00174d20_0x174d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d20_0x174d20");
#endif

    ctx->pc = 0x174d20u;

    // 0x174d20: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x174d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x174d24: 0x2447d4a0  addiu       $a3, $v0, -0x2B60
    ctx->pc = 0x174d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956192));
    ctx->pc = 0x174d28u;
}
