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

// Function: entry_0018f584
// Address: 0x18f584 - 0x18f588
void entry_0018f584_0x18f584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f584_0x18f584");
#endif

    ctx->pc = 0x18f584u;

    // 0x18f584: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x18f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->pc = 0x18f588u;
}
