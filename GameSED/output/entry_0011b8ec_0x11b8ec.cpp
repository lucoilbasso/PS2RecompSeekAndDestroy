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

// Function: entry_0011b8ec
// Address: 0x11b8ec - 0x11b8f4
void entry_0011b8ec_0x11b8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8ec_0x11b8ec");
#endif

    ctx->pc = 0x11b8ecu;

    // 0x11b8ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b8ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x11b8f4u;
}
