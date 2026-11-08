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

// Function: entry_00186388
// Address: 0x186388 - 0x186398
void entry_00186388_0x186388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186388_0x186388");
#endif

    ctx->pc = 0x186388u;

    // 0x186388: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x186388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18638c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x18638cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186390: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x186390u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x186394: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x186394u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x186398u;
}
