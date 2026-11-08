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

// Function: entry_001772ac
// Address: 0x1772ac - 0x1772b0
void entry_001772ac_0x1772ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001772ac_0x1772ac");
#endif

    ctx->pc = 0x1772acu;

    // 0x1772ac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1772acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1772b0u;
}
