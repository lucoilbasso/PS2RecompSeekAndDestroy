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

// Function: entry_0018709c
// Address: 0x18709c - 0x1870a0
void entry_0018709c_0x18709c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018709c_0x18709c");
#endif

    ctx->pc = 0x18709cu;

    // 0x18709c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18709cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1870a0u;
}
