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

// Function: entry_0016a520
// Address: 0x16a520 - 0x16a524
void entry_0016a520_0x16a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a520_0x16a520");
#endif

    ctx->pc = 0x16a520u;

    // 0x16a520: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16a520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x16a524u;
}
