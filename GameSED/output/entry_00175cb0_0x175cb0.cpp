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

// Function: entry_00175cb0
// Address: 0x175cb0 - 0x175cb4
void entry_00175cb0_0x175cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175cb0_0x175cb0");
#endif

    ctx->pc = 0x175cb0u;

    // 0x175cb0: 0x8d4b0054  lw          $t3, 0x54($t2)
    ctx->pc = 0x175cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    ctx->pc = 0x175cb4u;
}
