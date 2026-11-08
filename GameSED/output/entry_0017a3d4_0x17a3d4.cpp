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

// Function: entry_0017a3d4
// Address: 0x17a3d4 - 0x17a3d8
void entry_0017a3d4_0x17a3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3d4_0x17a3d4");
#endif

    ctx->pc = 0x17a3d4u;

    // 0x17a3d4: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    ctx->pc = 0x17a3d8u;
}
