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

// Function: entry_0010d974
// Address: 0x10d974 - 0x10d978
void entry_0010d974_0x10d974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d974_0x10d974");
#endif

    ctx->pc = 0x10d974u;

    // 0x10d974: 0xac820150  sw          $v0, 0x150($a0)
    ctx->pc = 0x10d974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
    ctx->pc = 0x10d978u;
}
