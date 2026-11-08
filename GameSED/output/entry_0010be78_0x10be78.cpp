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

// Function: entry_0010be78
// Address: 0x10be78 - 0x10beb0
void entry_0010be78_0x10be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be78_0x10be78");
#endif

    ctx->pc = 0x10be78u;

    // 0x10be78: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x10be78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x10be7c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10be80: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x10be80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x10be84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10be84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10be88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10be8c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x10be8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x10be90: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10be90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10be94: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10be94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10be98: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x10be98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x10be9c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x10be9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10bea0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10bea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10bea4: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x10bea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x10bea8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x10bea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10beac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x10beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->pc = 0x10beb0u;
}
