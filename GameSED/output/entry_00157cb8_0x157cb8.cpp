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

// Function: entry_00157cb8
// Address: 0x157cb8 - 0x157cbc
void entry_00157cb8_0x157cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157cb8_0x157cb8");
#endif

    ctx->pc = 0x157cb8u;

    // 0x157cb8: 0x27c30060  addiu       $v1, $fp, 0x60
    ctx->pc = 0x157cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    ctx->pc = 0x157cbcu;
}
