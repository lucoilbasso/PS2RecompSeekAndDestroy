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

// Function: entry_00122908
// Address: 0x122908 - 0x122910
void entry_00122908_0x122908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122908_0x122908");
#endif

    ctx->pc = 0x122908u;

    // 0x122908: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x122908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12290c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x12290cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    ctx->pc = 0x122910u;
}
