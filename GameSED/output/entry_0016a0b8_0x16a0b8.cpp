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

// Function: entry_0016a0b8
// Address: 0x16a0b8 - 0x16a0bc
void entry_0016a0b8_0x16a0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a0b8_0x16a0b8");
#endif

    ctx->pc = 0x16a0b8u;

    // 0x16a0b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16a0bcu;
}
