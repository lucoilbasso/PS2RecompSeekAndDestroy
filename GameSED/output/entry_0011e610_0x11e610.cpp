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

// Function: entry_0011e610
// Address: 0x11e610 - 0x11e614
void entry_0011e610_0x11e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e610_0x11e610");
#endif

    ctx->pc = 0x11e610u;

    // 0x11e610: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x11e610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->pc = 0x11e614u;
}
