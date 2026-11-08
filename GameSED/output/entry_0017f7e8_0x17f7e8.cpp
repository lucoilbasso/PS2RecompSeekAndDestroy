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

// Function: entry_0017f7e8
// Address: 0x17f7e8 - 0x17f7ec
void entry_0017f7e8_0x17f7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f7e8_0x17f7e8");
#endif

    ctx->pc = 0x17f7e8u;

    // 0x17f7e8: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x17f7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->pc = 0x17f7ecu;
}
