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

// Function: entry_001a54e4
// Address: 0x1a54e4 - 0x1a54ec
void entry_001a54e4_0x1a54e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a54e4_0x1a54e4");
#endif

    ctx->pc = 0x1a54e4u;

    // 0x1a54e4: 0x244630a0  addiu       $a2, $v0, 0x30A0
    ctx->pc = 0x1a54e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x1a54e8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1a54e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x1a54ecu;
}
