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

// Function: entry_001791d8
// Address: 0x1791d8 - 0x1791e8
void entry_001791d8_0x1791d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001791d8_0x1791d8");
#endif

    ctx->pc = 0x1791d8u;

    // 0x1791d8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1791d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1791dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1791dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1791e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1791e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1791e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1791e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1791e8u;
}
