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

// Function: entry_001854c0
// Address: 0x1854c0 - 0x1854f8
void entry_001854c0_0x1854c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001854c0_0x1854c0");
#endif

    ctx->pc = 0x1854c0u;

    // 0x1854c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1854c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1854c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1854c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1854c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1854c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1854cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1854ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1854d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1854d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1854d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1854d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1854d8: 0x8c5315c4  lw          $s3, 0x15C4($v0)
    ctx->pc = 0x1854d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5572)));
    // 0x1854dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1854dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1854e0: 0x3c150400  lui         $s5, 0x400
    ctx->pc = 0x1854e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1024 << 16));
    // 0x1854e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1854e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1854e8: 0x3c160010  lui         $s6, 0x10
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16 << 16));
    // 0x1854ec: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1854ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1854f0: 0x3c170100  lui         $s7, 0x100
    ctx->pc = 0x1854f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)256 << 16));
    // 0x1854f4: 0x0  nop
    ctx->pc = 0x1854f4u;
    // NOP
    ctx->pc = 0x1854f8u;
}
