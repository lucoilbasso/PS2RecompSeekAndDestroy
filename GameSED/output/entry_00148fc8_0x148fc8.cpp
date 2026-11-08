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

// Function: entry_00148fc8
// Address: 0x148fc8 - 0x148fd0
void entry_00148fc8_0x148fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148fc8_0x148fc8");
#endif

    ctx->pc = 0x148fc8u;

    // 0x148fc8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x148fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x148fcc: 0x261026c0  addiu       $s0, $s0, 0x26C0
    ctx->pc = 0x148fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9920));
    ctx->pc = 0x148fd0u;
}
