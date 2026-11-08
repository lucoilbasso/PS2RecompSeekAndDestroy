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

// Function: entry_00182904
// Address: 0x182904 - 0x182908
void entry_00182904_0x182904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182904_0x182904");
#endif

    ctx->pc = 0x182904u;

    // 0x182904: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x182904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    ctx->pc = 0x182908u;
}
