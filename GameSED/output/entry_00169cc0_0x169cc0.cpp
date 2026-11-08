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

// Function: entry_00169cc0
// Address: 0x169cc0 - 0x169cc4
void entry_00169cc0_0x169cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169cc0_0x169cc0");
#endif

    ctx->pc = 0x169cc0u;

    // 0x169cc0: 0x26d11224  addiu       $s1, $s6, 0x1224
    ctx->pc = 0x169cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4644));
    ctx->pc = 0x169cc4u;
}
