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

// Function: entry_0011d910
// Address: 0x11d910 - 0x11d918
void entry_0011d910_0x11d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d910_0x11d910");
#endif

    ctx->pc = 0x11d910u;

    // 0x11d910: 0x8f839128  lw          $v1, -0x6ED8($gp)
    ctx->pc = 0x11d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
    // 0x11d914: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x11d918u;
}
