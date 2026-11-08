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

// Function: entry_001778dc
// Address: 0x1778dc - 0x1778e8
void entry_001778dc_0x1778dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001778dc_0x1778dc");
#endif

    ctx->pc = 0x1778dcu;

    // 0x1778dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1778dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1778e0: 0x2442e820  addiu       $v0, $v0, -0x17E0
    ctx->pc = 0x1778e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x1778e4: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x1778e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    ctx->pc = 0x1778e8u;
}
