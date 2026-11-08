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

// Function: entry_00159d40
// Address: 0x159d40 - 0x159d4c
void entry_00159d40_0x159d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159d40_0x159d40");
#endif

    ctx->pc = 0x159d40u;

    // 0x159d40: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x159d40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159d44: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x159d44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x159d48: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x159d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    ctx->pc = 0x159d4cu;
}
