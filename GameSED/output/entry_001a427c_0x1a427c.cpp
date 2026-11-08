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

// Function: entry_001a427c
// Address: 0x1a427c - 0x1a4280
void entry_001a427c_0x1a427c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a427c_0x1a427c");
#endif

    ctx->pc = 0x1a427cu;

    // 0x1a427c: 0xaf919180  sw          $s1, -0x6E80($gp)
    ctx->pc = 0x1a427cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939008), GPR_U32(ctx, 17));
    ctx->pc = 0x1a4280u;
}
