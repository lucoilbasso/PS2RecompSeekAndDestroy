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

// Function: entry_001043e8
// Address: 0x1043e8 - 0x1043f0
void entry_001043e8_0x1043e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001043e8_0x1043e8");
#endif

    ctx->pc = 0x1043e8u;

    // 0x1043e8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1043ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1043ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->pc = 0x1043f0u;
}
