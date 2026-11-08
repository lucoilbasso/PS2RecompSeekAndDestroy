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

// Function: entry_001aa7f0
// Address: 0x1aa7f0 - 0x1aa810
void entry_001aa7f0_0x1aa7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa7f0_0x1aa7f0");
#endif

    ctx->pc = 0x1aa7f0u;

    // 0x1aa7f0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1aa7f0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1aa7f4: 0x2647ffff  addiu       $a3, $s2, -0x1
    ctx->pc = 0x1aa7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1aa7f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1aa7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa7fc: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x1aa7fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x1aa800: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aa804: 0x64a50290  daddiu      $a1, $a1, 0x290
    ctx->pc = 0x1aa804u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x1aa808: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1aa808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1aa80c: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x1aa80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    ctx->pc = 0x1aa810u;
}
