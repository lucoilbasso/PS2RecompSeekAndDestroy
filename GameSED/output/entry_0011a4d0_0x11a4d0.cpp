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

// Function: entry_0011a4d0
// Address: 0x11a4d0 - 0x11a4d4
void entry_0011a4d0_0x11a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a4d0_0x11a4d0");
#endif

    ctx->pc = 0x11a4d0u;

    // 0x11a4d0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x11a4d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    ctx->pc = 0x11a4d4u;
}
