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

// Function: entry_00188b04
// Address: 0x188b04 - 0x188b08
void entry_00188b04_0x188b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b04_0x188b04");
#endif

    ctx->pc = 0x188b04u;

    // 0x188b04: 0x2468ed60  addiu       $t0, $v1, -0x12A0
    ctx->pc = 0x188b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962528));
    ctx->pc = 0x188b08u;
}
