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

// Function: entry_00149004
// Address: 0x149004 - 0x149008
void entry_00149004_0x149004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149004_0x149004");
#endif

    ctx->pc = 0x149004u;

    // 0x149004: 0xacb0015c  sw          $s0, 0x15C($a1)
    ctx->pc = 0x149004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 16));
    ctx->pc = 0x149008u;
}
