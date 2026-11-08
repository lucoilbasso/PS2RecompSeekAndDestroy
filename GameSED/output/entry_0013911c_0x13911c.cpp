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

// Function: entry_0013911c
// Address: 0x13911c - 0x139140
void entry_0013911c_0x13911c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013911c_0x13911c");
#endif

    ctx->pc = 0x13911cu;

    // 0x13911c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139120: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x139120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x139124: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x139124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x139128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13912c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13912cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139130: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x139134: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x139134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x139138: 0x24659090  addiu       $a1, $v1, -0x6F70
    ctx->pc = 0x139138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938768));
    // 0x13913c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13913cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x139140u;
}
