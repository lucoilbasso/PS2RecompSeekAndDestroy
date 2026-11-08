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

// Function: entry_00139498
// Address: 0x139498 - 0x13949c
void entry_00139498_0x139498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139498_0x139498");
#endif

    ctx->pc = 0x139498u;

    // 0x139498: 0x24841130  addiu       $a0, $a0, 0x1130
    ctx->pc = 0x139498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4400));
    ctx->pc = 0x13949cu;
}
