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

// Function: entry_00197dcc
// Address: 0x197dcc - 0x197dd0
void entry_00197dcc_0x197dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197dcc_0x197dcc");
#endif

    ctx->pc = 0x197dccu;

    // 0x197dcc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x197dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x197dd0u;
}
