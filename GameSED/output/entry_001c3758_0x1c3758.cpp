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

// Function: entry_001c3758
// Address: 0x1c3758 - 0x1c375c
void entry_001c3758_0x1c3758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3758_0x1c3758");
#endif

    ctx->pc = 0x1c3758u;

    // 0x1c3758: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x1c3758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    ctx->pc = 0x1c375cu;
}
