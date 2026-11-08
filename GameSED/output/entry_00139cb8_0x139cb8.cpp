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

// Function: entry_00139cb8
// Address: 0x139cb8 - 0x139cbc
void entry_00139cb8_0x139cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139cb8_0x139cb8");
#endif

    ctx->pc = 0x139cb8u;

    // 0x139cb8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x139cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x139cbcu;
}
