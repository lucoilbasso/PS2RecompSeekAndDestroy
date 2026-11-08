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

// Function: entry_001a8fdc
// Address: 0x1a8fdc - 0x1a8fe0
void entry_001a8fdc_0x1a8fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8fdc_0x1a8fdc");
#endif

    ctx->pc = 0x1a8fdcu;

    // 0x1a8fdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1a8fe0u;
}
