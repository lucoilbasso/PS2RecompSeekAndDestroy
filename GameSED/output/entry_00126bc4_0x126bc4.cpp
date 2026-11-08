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

// Function: entry_00126bc4
// Address: 0x126bc4 - 0x126c10
void entry_00126bc4_0x126bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126bc4_0x126bc4");
#endif

    ctx->pc = 0x126bc4u;

    // 0x126bc4: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x126bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x126bc8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x126bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x126bcc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x126bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x126bd0: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x126bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x126bd4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126bd8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x126bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x126bdc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x126bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x126be0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x126be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x126be4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x126be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x126be8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x126be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x126bec: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x126becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x126bf0: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x126bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x126bf4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x126bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x126bf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bfc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x126bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126c00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x126c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x126c08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c0c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x126c0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x126c10u;
}
