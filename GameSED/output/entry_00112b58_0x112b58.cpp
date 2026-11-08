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

// Function: entry_00112b58
// Address: 0x112b58 - 0x112b6c
void entry_00112b58_0x112b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b58_0x112b58");
#endif

    ctx->pc = 0x112b58u;

    // 0x112b58: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x112b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x112b5c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x112b5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112b60: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x112b60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112b64: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x112b64u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x112b68: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x112b68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x112b6cu;
}
