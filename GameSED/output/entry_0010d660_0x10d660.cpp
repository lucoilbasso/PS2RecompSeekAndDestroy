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

// Function: entry_0010d660
// Address: 0x10d660 - 0x10d668
void entry_0010d660_0x10d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d660_0x10d660");
#endif

    ctx->pc = 0x10d660u;

    // 0x10d660: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10d660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d664: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10d664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10d668u;
}
