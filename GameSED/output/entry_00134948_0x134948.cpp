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

// Function: entry_00134948
// Address: 0x134948 - 0x13494c
void entry_00134948_0x134948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134948_0x134948");
#endif

    ctx->pc = 0x134948u;

    // 0x134948: 0xaf808d94  sw          $zero, -0x726C($gp)
    ctx->pc = 0x134948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 0));
    ctx->pc = 0x13494cu;
}
