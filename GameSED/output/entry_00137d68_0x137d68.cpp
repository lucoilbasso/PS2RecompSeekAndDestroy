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

// Function: entry_00137d68
// Address: 0x137d68 - 0x137d74
void entry_00137d68_0x137d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137d68_0x137d68");
#endif

    ctx->pc = 0x137d68u;

    // 0x137d68: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x137d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137d6c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x137d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x137d70: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x137d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x137d74u;
}
