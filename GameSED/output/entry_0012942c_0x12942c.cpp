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

// Function: entry_0012942c
// Address: 0x12942c - 0x129468
void entry_0012942c_0x12942c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012942c_0x12942c");
#endif

    ctx->pc = 0x12942cu;

    // 0x12942c: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x12942cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x129430: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x129430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x129434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x129438: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x129438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12943c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129440: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x129440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x129444: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x129444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x129448: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x129448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x12944c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x12944cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x129450: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x129450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x129454: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x129454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x129458: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x129458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x12945c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x12945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x129460: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x129460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x129464: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x129464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->pc = 0x129468u;
}
