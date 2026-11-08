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

// Function: entry_0011b668
// Address: 0x11b668 - 0x11b694
void entry_0011b668_0x11b668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b668_0x11b668");
#endif

    ctx->pc = 0x11b668u;

    // 0x11b668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11b66c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11b66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b670: 0xac8340a4  sw          $v1, 0x40A4($a0)
    ctx->pc = 0x11b670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16548), GPR_U32(ctx, 3));
    // 0x11b674: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11b674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11b678: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x11b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x11b67c: 0x24a820c0  addiu       $t0, $a1, 0x20C0
    ctx->pc = 0x11b67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8384));
    // 0x11b680: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30
    ctx->pc = 0x11b680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
    // 0x11b684: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x11b684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x11b688: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x11b688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x11b68c: 0x240907f8  addiu       $t1, $zero, 0x7F8
    ctx->pc = 0x11b68cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x11b690: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x11b690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x11b694u;
}
