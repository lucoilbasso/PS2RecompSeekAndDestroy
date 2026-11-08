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

// Function: entry_00104068
// Address: 0x104068 - 0x10406c
void entry_00104068_0x104068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104068_0x104068");
#endif

    ctx->pc = 0x104068u;

    // 0x104068: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x104068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    ctx->pc = 0x10406cu;
}
