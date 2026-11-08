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

// Function: caseD_a
// Address: 0x163f50 - 0x163f7c
void caseD_a_0x163f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x163f50");
#endif

    ctx->pc = 0x163f50u;

    // 0x163f50: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x163f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x163f54: 0x38a5000b  xori        $a1, $a1, 0xB
    ctx->pc = 0x163f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)11);
    // 0x163f58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x163f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x163f5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x163f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x163f60: 0x8c863630  lw          $a2, 0x3630($a0)
    ctx->pc = 0x163f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13872)));
    // 0x163f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f68: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x163f68u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x163f6c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x163f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x163f70: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x163f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x163f74: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x163f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x163f78: 0xae260254  sw          $a2, 0x254($s1)
    ctx->pc = 0x163f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 6));
    ctx->pc = 0x163f7cu;
}
