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

// Function: entry_001bc790
// Address: 0x1bc790 - 0x1bc79c
void entry_001bc790_0x1bc790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc790_0x1bc790");
#endif

    ctx->pc = 0x1bc790u;

    // 0x1bc790: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bc790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bc794: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1bc794u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc798: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1bc798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->pc = 0x1bc79cu;
}
