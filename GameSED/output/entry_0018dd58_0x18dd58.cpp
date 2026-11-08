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

// Function: entry_0018dd58
// Address: 0x18dd58 - 0x18dd6c
void entry_0018dd58_0x18dd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd58_0x18dd58");
#endif

    ctx->pc = 0x18dd58u;

    // 0x18dd58: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18dd58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18dd5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18dd60: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x18dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x18dd64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18dd64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dd68: 0xae03025c  sw          $v1, 0x25C($s0)
    ctx->pc = 0x18dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 3));
    ctx->pc = 0x18dd6cu;
}
