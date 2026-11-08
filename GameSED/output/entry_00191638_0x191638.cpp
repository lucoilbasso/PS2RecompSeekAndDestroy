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

// Function: entry_00191638
// Address: 0x191638 - 0x19163c
void entry_00191638_0x191638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191638_0x191638");
#endif

    ctx->pc = 0x191638u;

    // 0x191638: 0x263001d0  addiu       $s0, $s1, 0x1D0
    ctx->pc = 0x191638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    ctx->pc = 0x19163cu;
}
