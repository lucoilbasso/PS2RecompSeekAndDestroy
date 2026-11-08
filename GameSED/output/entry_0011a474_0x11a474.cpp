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

// Function: entry_0011a474
// Address: 0x11a474 - 0x11a478
void entry_0011a474_0x11a474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a474_0x11a474");
#endif

    ctx->pc = 0x11a474u;

    // 0x11a474: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x11a474u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    ctx->pc = 0x11a478u;
}
