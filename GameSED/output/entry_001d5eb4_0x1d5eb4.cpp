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

// Function: entry_001d5eb4
// Address: 0x1d5eb4 - 0x1d5ecc
void entry_001d5eb4_0x1d5eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5eb4_0x1d5eb4");
#endif

    ctx->pc = 0x1d5eb4u;

    // 0x1d5eb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d5eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5eb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5ebc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d5ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5ec0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1d5ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1d5ec4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d5ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5ec8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d5ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->pc = 0x1d5eccu;
}
