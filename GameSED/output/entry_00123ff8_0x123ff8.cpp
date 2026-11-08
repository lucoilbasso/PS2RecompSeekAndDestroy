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

// Function: entry_00123ff8
// Address: 0x123ff8 - 0x123ffc
void entry_00123ff8_0x123ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123ff8_0x123ff8");
#endif

    ctx->pc = 0x123ff8u;

    // 0x123ff8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x123ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    ctx->pc = 0x123ffcu;
}
