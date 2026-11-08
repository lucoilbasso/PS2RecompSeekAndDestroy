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

// Function: entry_00178d18
// Address: 0x178d18 - 0x178d1c
void entry_00178d18_0x178d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d18_0x178d18");
#endif

    ctx->pc = 0x178d18u;

    // 0x178d18: 0x8c44d184  lw          $a0, -0x2E7C($v0)
    ctx->pc = 0x178d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955396)));
    ctx->pc = 0x178d1cu;
}
