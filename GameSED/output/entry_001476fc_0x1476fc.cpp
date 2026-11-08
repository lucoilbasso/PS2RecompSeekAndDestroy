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

// Function: entry_001476fc
// Address: 0x1476fc - 0x147700
void entry_001476fc_0x1476fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001476fc_0x1476fc");
#endif

    ctx->pc = 0x1476fcu;

    // 0x1476fc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1476fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x147700u;
}
