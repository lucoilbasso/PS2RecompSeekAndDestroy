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

// Function: entry_00139cbc
// Address: 0x139cbc - 0x139cc0
void entry_00139cbc_0x139cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139cbc_0x139cbc");
#endif

    ctx->pc = 0x139cbcu;

    // 0x139cbc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x139cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x139cc0u;
}
