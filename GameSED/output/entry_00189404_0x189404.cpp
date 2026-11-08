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

// Function: entry_00189404
// Address: 0x189404 - 0x189408
void entry_00189404_0x189404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189404_0x189404");
#endif

    ctx->pc = 0x189404u;

    // 0x189404: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x189404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
    ctx->pc = 0x189408u;
}
