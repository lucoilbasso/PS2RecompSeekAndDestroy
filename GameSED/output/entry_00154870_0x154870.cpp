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

// Function: entry_00154870
// Address: 0x154870 - 0x154878
void entry_00154870_0x154870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154870_0x154870");
#endif

    ctx->pc = 0x154870u;

    // 0x154870: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x154870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x154874: 0x2446d398  addiu       $a2, $v0, -0x2C68
    ctx->pc = 0x154874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955928));
    ctx->pc = 0x154878u;
}
