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

// Function: entry_00191c90
// Address: 0x191c90 - 0x191c94
void entry_00191c90_0x191c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191c90_0x191c90");
#endif

    ctx->pc = 0x191c90u;

    // 0x191c90: 0x26430034  addiu       $v1, $s2, 0x34
    ctx->pc = 0x191c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    ctx->pc = 0x191c94u;
}
