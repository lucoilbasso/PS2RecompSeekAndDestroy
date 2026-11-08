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

// Function: entry_0016fe30
// Address: 0x16fe30 - 0x16fe34
void entry_0016fe30_0x16fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fe30_0x16fe30");
#endif

    ctx->pc = 0x16fe30u;

    // 0x16fe30: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x16fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    ctx->pc = 0x16fe34u;
}
