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

// Function: entry_001167fc
// Address: 0x1167fc - 0x116800
void entry_001167fc_0x1167fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001167fc_0x1167fc");
#endif

    ctx->pc = 0x1167fcu;

    // 0x1167fc: 0x28c5000d  slti        $a1, $a2, 0xD
    ctx->pc = 0x1167fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
    ctx->pc = 0x116800u;
}
