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

// Function: entry_001b0528
// Address: 0x1b0528 - 0x1b0538
void entry_001b0528_0x1b0528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0528_0x1b0528");
#endif

    ctx->pc = 0x1b0528u;

    // 0x1b0528: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1b0528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b052c: 0x8c447ee8  lw          $a0, 0x7EE8($v0)
    ctx->pc = 0x1b052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32488)));
    // 0x1b0530: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x1b0530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1b0534: 0x0  nop
    ctx->pc = 0x1b0534u;
    // NOP
    ctx->pc = 0x1b0538u;
}
