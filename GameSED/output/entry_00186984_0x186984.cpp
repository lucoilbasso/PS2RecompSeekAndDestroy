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

// Function: entry_00186984
// Address: 0x186984 - 0x186988
void entry_00186984_0x186984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186984_0x186984");
#endif

    ctx->pc = 0x186984u;

    // 0x186984: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x186984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x186988u;
}
