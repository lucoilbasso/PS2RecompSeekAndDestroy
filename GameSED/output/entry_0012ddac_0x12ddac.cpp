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

// Function: entry_0012ddac
// Address: 0x12ddac - 0x12ddf4
void entry_0012ddac_0x12ddac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ddac_0x12ddac");
#endif

    ctx->pc = 0x12ddacu;

    // 0x12ddac: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x12ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x12ddb0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x12ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12ddb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12ddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12ddb8: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12ddb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12ddbc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ddc0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x12ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x12ddc4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x12ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x12ddc8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x12ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x12ddcc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x12ddccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12ddd0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12ddd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12ddd4: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12ddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x12ddd8: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x12ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x12dddc: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x12dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x12dde0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12dde0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dde4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12dde8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12dde8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddec: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x12ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x12ddf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12ddf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12ddf4u;
}
