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

// Function: entry_00115940
// Address: 0x115940 - 0x115944
void entry_00115940_0x115940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115940_0x115940");
#endif

    ctx->pc = 0x115940u;

    // 0x115940: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    ctx->pc = 0x115944u;
}
