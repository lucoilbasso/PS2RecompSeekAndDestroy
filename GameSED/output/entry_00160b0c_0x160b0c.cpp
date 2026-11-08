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

// Function: entry_00160b0c
// Address: 0x160b0c - 0x160b18
void entry_00160b0c_0x160b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b0c_0x160b0c");
#endif

    ctx->pc = 0x160b0cu;

    // 0x160b0c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x160b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x160b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160b14: 0x9463a290  lhu         $v1, -0x5D70($v1)
    ctx->pc = 0x160b14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294943376)));
    ctx->pc = 0x160b18u;
}
