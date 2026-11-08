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

// Function: entry_001d1430
// Address: 0x1d1430 - 0x1d143c
void entry_001d1430_0x1d1430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1430_0x1d1430");
#endif

    ctx->pc = 0x1d1430u;

    // 0x1d1430: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x1d1430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d1434: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1d1434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1d1438: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x1d1438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
    ctx->pc = 0x1d143cu;
}
