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

// Function: entry_00170944
// Address: 0x170944 - 0x170948
void entry_00170944_0x170944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170944_0x170944");
#endif

    ctx->pc = 0x170944u;

    // 0x170944: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x170944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x170948u;
}
