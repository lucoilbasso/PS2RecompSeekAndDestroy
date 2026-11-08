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

// Function: entry_00156d84
// Address: 0x156d84 - 0x156d8c
void entry_00156d84_0x156d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156d84_0x156d84");
#endif

    ctx->pc = 0x156d84u;

    // 0x156d84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x156d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156d88: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x156d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    ctx->pc = 0x156d8cu;
}
