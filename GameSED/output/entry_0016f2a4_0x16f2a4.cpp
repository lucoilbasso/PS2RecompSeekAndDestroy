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

// Function: entry_0016f2a4
// Address: 0x16f2a4 - 0x16f2ac
void entry_0016f2a4_0x16f2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f2a4_0x16f2a4");
#endif

    ctx->pc = 0x16f2a4u;

    // 0x16f2a4: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x16f2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x16f2a8: 0xffa50448  sd          $a1, 0x448($sp)
    ctx->pc = 0x16f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 5));
    ctx->pc = 0x16f2acu;
}
