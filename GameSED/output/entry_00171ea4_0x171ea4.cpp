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

// Function: entry_00171ea4
// Address: 0x171ea4 - 0x171ea8
void entry_00171ea4_0x171ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171ea4_0x171ea4");
#endif

    ctx->pc = 0x171ea4u;

    // 0x171ea4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x171ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x171ea8u;
}
