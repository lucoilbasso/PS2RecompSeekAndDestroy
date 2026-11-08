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

// Function: entry_001378a8
// Address: 0x1378a8 - 0x1378ac
void entry_001378a8_0x1378a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001378a8_0x1378a8");
#endif

    ctx->pc = 0x1378a8u;

    // 0x1378a8: 0x245ebc50  addiu       $fp, $v0, -0x43B0
    ctx->pc = 0x1378a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949968));
    ctx->pc = 0x1378acu;
}
