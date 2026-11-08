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

// Function: entry_001ba698
// Address: 0x1ba698 - 0x1ba6a0
void entry_001ba698_0x1ba698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba698_0x1ba698");
#endif

    ctx->pc = 0x1ba698u;

    // 0x1ba698: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ba698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1ba69c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ba6a0u;
}
