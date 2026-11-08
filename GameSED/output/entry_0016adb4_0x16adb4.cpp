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

// Function: entry_0016adb4
// Address: 0x16adb4 - 0x16adbc
void entry_0016adb4_0x16adb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016adb4_0x16adb4");
#endif

    ctx->pc = 0x16adb4u;

    // 0x16adb4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x16adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16adb8: 0x8e021258  lw          $v0, 0x1258($s0)
    ctx->pc = 0x16adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
    ctx->pc = 0x16adbcu;
}
