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

// Function: entry_00114cb8
// Address: 0x114cb8 - 0x114cc0
void entry_00114cb8_0x114cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114cb8_0x114cb8");
#endif

    ctx->pc = 0x114cb8u;

    // 0x114cb8: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x114cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x114cbc: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x114cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    ctx->pc = 0x114cc0u;
}
