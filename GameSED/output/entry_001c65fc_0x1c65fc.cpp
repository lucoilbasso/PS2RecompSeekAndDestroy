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

// Function: entry_001c65fc
// Address: 0x1c65fc - 0x1c6600
void entry_001c65fc_0x1c65fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c65fc_0x1c65fc");
#endif

    ctx->pc = 0x1c65fcu;

    // 0x1c65fc: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x1c65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    ctx->pc = 0x1c6600u;
}
