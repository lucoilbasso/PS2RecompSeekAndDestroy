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

// Function: entry_00148870
// Address: 0x148870 - 0x148878
void entry_00148870_0x148870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148870_0x148870");
#endif

    ctx->pc = 0x148870u;

    // 0x148870: 0x24860084  addiu       $a2, $a0, 0x84
    ctx->pc = 0x148870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x148874: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x148874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x148878u;
}
