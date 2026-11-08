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

// Function: entry_0014ab0c
// Address: 0x14ab0c - 0x14ab10
void entry_0014ab0c_0x14ab0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab0c_0x14ab0c");
#endif

    ctx->pc = 0x14ab0cu;

    // 0x14ab0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14ab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x14ab10u;
}
