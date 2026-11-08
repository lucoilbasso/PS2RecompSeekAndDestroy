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

// Function: entry_001a86d0
// Address: 0x1a86d0 - 0x1a86dc
void entry_001a86d0_0x1a86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a86d0_0x1a86d0");
#endif

    ctx->pc = 0x1a86d0u;

    // 0x1a86d0: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x1a86d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x1a86d4: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x1a86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x1a86d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a86d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x1a86dcu;
}
