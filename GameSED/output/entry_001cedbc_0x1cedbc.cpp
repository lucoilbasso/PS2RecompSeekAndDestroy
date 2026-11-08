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

// Function: entry_001cedbc
// Address: 0x1cedbc - 0x1cedc0
void entry_001cedbc_0x1cedbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cedbc_0x1cedbc");
#endif

    ctx->pc = 0x1cedbcu;

    // 0x1cedbc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1cedc0u;
}
