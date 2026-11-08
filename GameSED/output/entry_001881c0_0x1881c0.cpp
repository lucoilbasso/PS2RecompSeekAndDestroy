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

// Function: entry_001881c0
// Address: 0x1881c0 - 0x188200
void entry_001881c0_0x1881c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001881c0_0x1881c0");
#endif

    ctx->pc = 0x1881c0u;

    // 0x1881c0: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x1881c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1881c4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x1881c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1881c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1881c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1881cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1881d0: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x1881d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x1881d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1881d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1881d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1881d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1881dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1881dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1881e0: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1881e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1881e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1881e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1881e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1881e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1881ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1881ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1881f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1881f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1881f4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1881f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1881f8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1881f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1881fc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1881fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x188200u;
}
