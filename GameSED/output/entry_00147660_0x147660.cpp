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

// Function: entry_00147660
// Address: 0x147660 - 0x147664
void entry_00147660_0x147660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147660_0x147660");
#endif

    ctx->pc = 0x147660u;

    // 0x147660: 0x246376f8  addiu       $v1, $v1, 0x76F8
    ctx->pc = 0x147660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30456));
    ctx->pc = 0x147664u;
}
