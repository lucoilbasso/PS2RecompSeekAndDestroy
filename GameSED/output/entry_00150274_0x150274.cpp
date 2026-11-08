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

// Function: entry_00150274
// Address: 0x150274 - 0x150278
void entry_00150274_0x150274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150274_0x150274");
#endif

    ctx->pc = 0x150274u;

    // 0x150274: 0xae110840  sw          $s1, 0x840($s0)
    ctx->pc = 0x150274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
    ctx->pc = 0x150278u;
}
