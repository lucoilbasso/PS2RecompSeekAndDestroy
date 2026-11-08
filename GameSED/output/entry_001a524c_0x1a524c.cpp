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

// Function: entry_001a524c
// Address: 0x1a524c - 0x1a5254
void entry_001a524c_0x1a524c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a524c_0x1a524c");
#endif

    ctx->pc = 0x1a524cu;

    // 0x1a524c: 0x24462990  addiu       $a2, $v0, 0x2990
    ctx->pc = 0x1a524cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10640));
    // 0x1a5250: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a5250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1a5254u;
}
