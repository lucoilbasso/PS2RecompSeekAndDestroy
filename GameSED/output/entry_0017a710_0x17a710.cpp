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

// Function: entry_0017a710
// Address: 0x17a710 - 0x17a714
void entry_0017a710_0x17a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a710_0x17a710");
#endif

    ctx->pc = 0x17a710u;

    // 0x17a710: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17a710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x17a714u;
}
