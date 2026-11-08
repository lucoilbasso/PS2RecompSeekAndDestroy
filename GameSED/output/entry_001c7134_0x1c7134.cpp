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

// Function: entry_001c7134
// Address: 0x1c7134 - 0x1c7138
void entry_001c7134_0x1c7134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7134_0x1c7134");
#endif

    ctx->pc = 0x1c7134u;

    // 0x1c7134: 0x8fb60248  lw          $s6, 0x248($sp)
    ctx->pc = 0x1c7134u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    ctx->pc = 0x1c7138u;
}
