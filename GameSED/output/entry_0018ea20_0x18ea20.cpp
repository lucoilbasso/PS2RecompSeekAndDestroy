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

// Function: entry_0018ea20
// Address: 0x18ea20 - 0x18ea28
void entry_0018ea20_0x18ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ea20_0x18ea20");
#endif

    ctx->pc = 0x18ea20u;

    // 0x18ea20: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18ea24: 0x2445ee30  addiu       $a1, $v0, -0x11D0
    ctx->pc = 0x18ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962736));
    ctx->pc = 0x18ea28u;
}
