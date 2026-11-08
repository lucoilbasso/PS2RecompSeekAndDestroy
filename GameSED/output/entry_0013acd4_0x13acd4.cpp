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

// Function: entry_0013acd4
// Address: 0x13acd4 - 0x13ace8
void entry_0013acd4_0x13acd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013acd4_0x13acd4");
#endif

    ctx->pc = 0x13acd4u;

    // 0x13acd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13acd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13acdc: 0x91100a  movz        $v0, $a0, $s1
    ctx->pc = 0x13acdcu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x13ace0: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x13ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x13ace4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ace4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13ace8u;
}
