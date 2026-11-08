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

// Function: entry_00187910
// Address: 0x187910 - 0x187918
void entry_00187910_0x187910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187910_0x187910");
#endif

    ctx->pc = 0x187910u;

    // 0x187910: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x187910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x187914: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x187914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->pc = 0x187918u;
}
