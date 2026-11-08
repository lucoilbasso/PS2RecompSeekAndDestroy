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

// Function: entry_001911d0
// Address: 0x1911d0 - 0x191218
void entry_001911d0_0x1911d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001911d0_0x1911d0");
#endif

    ctx->pc = 0x1911d0u;

    // 0x1911d0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1911d4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1911d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1911d8: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1911d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1911dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1911dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1911e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1911e4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1911e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1911e8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1911e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1911ec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1911ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1911f0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1911f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1911f4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1911f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1911f8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1911f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1911fc: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1911fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x191200: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x191200u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x191204: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x191204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x191208: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x191208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19120c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x19120cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x191210: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x191210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191214: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x191214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    ctx->pc = 0x191218u;
}
