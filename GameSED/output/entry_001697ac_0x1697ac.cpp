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

// Function: entry_001697ac
// Address: 0x1697ac - 0x1697b0
void entry_001697ac_0x1697ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001697ac_0x1697ac");
#endif

    ctx->pc = 0x1697acu;

    // 0x1697ac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1697acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1697b0u;
}
