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

// Function: entry_0014cc20
// Address: 0x14cc20 - 0x14cc24
void entry_0014cc20_0x14cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cc20_0x14cc20");
#endif

    ctx->pc = 0x14cc20u;

    // 0x14cc20: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x14cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->pc = 0x14cc24u;
}
