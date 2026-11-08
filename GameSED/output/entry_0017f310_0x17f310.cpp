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

// Function: entry_0017f310
// Address: 0x17f310 - 0x17f314
void entry_0017f310_0x17f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f310_0x17f310");
#endif

    ctx->pc = 0x17f310u;

    // 0x17f310: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x17f310u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x17f314u;
}
