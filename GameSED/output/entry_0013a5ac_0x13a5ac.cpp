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

// Function: entry_0013a5ac
// Address: 0x13a5ac - 0x13a5b0
void entry_0013a5ac_0x13a5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a5ac_0x13a5ac");
#endif

    ctx->pc = 0x13a5acu;

    // 0x13a5ac: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x13a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x13a5b0u;
}
