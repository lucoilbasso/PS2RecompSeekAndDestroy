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

// Function: entry_001cde18
// Address: 0x1cde18 - 0x1cde20
void entry_001cde18_0x1cde18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cde18_0x1cde18");
#endif

    ctx->pc = 0x1cde18u;

    // 0x1cde18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cde1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cde1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1cde20u;
}
