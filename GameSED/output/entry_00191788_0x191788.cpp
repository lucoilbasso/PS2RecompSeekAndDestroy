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

// Function: entry_00191788
// Address: 0x191788 - 0x19178c
void entry_00191788_0x191788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191788_0x191788");
#endif

    ctx->pc = 0x191788u;

    // 0x191788: 0x263001d0  addiu       $s0, $s1, 0x1D0
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    ctx->pc = 0x19178cu;
}
