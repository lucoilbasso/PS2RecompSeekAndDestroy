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

// Function: entry_001a8770
// Address: 0x1a8770 - 0x1a877c
void entry_001a8770_0x1a8770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8770_0x1a8770");
#endif

    ctx->pc = 0x1a8770u;

    // 0x1a8770: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x1a8770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x1a8774: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x1a8774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x1a8778: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a8778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x1a877cu;
}
