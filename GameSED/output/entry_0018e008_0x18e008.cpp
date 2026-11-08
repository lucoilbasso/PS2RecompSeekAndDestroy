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

// Function: entry_0018e008
// Address: 0x18e008 - 0x18e00c
void entry_0018e008_0x18e008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e008_0x18e008");
#endif

    ctx->pc = 0x18e008u;

    // 0x18e008: 0x84c40006  lh          $a0, 0x6($a2)
    ctx->pc = 0x18e008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    ctx->pc = 0x18e00cu;
}
