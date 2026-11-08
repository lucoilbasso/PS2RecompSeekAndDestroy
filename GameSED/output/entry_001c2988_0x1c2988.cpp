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

// Function: entry_001c2988
// Address: 0x1c2988 - 0x1c2990
void entry_001c2988_0x1c2988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2988_0x1c2988");
#endif

    ctx->pc = 0x1c2988u;

    // 0x1c2988: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1c2988u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c298c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1c298cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    ctx->pc = 0x1c2990u;
}
