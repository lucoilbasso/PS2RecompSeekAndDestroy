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

// Function: entry_00165630
// Address: 0x165630 - 0x165634
void entry_00165630_0x165630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165630_0x165630");
#endif

    ctx->pc = 0x165630u;

    // 0x165630: 0xae001268  sw          $zero, 0x1268($s0)
    ctx->pc = 0x165630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
    ctx->pc = 0x165634u;
}
