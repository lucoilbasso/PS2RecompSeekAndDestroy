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

// Function: entry_00195574
// Address: 0x195574 - 0x195578
void entry_00195574_0x195574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195574_0x195574");
#endif

    ctx->pc = 0x195574u;

    // 0x195574: 0x24425598  addiu       $v0, $v0, 0x5598
    ctx->pc = 0x195574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21912));
    ctx->pc = 0x195578u;
}
