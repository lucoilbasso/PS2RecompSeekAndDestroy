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

// Function: entry_0011450c
// Address: 0x11450c - 0x114510
void entry_0011450c_0x11450c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011450c_0x11450c");
#endif

    ctx->pc = 0x11450cu;

    // 0x11450c: 0x97848924  lhu         $a0, -0x76DC($gp)
    ctx->pc = 0x11450cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    ctx->pc = 0x114510u;
}
