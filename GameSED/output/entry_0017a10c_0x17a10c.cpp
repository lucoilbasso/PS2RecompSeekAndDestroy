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

// Function: entry_0017a10c
// Address: 0x17a10c - 0x17a110
void entry_0017a10c_0x17a10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a10c_0x17a10c");
#endif

    ctx->pc = 0x17a10cu;

    // 0x17a10c: 0x8f838d14  lw          $v1, -0x72EC($gp)
    ctx->pc = 0x17a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    ctx->pc = 0x17a110u;
}
