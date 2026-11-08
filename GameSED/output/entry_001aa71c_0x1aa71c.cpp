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

// Function: entry_001aa71c
// Address: 0x1aa71c - 0x1aa740
void entry_001aa71c_0x1aa71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa71c_0x1aa71c");
#endif

    ctx->pc = 0x1aa71cu;

    // 0x1aa71c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1aa71cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1aa720: 0x2647ffff  addiu       $a3, $s2, -0x1
    ctx->pc = 0x1aa720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1aa724: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1aa724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa728: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x1aa728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x1aa72c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1aa72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aa730: 0x64a5027c  daddiu      $a1, $a1, 0x27C
    ctx->pc = 0x1aa730u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x1aa734: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1aa734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1aa738: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1AA738u;
    {
        const bool branch_taken_0x1aa738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA738u;
        // 0x1aa73c: 0x24630019  addiu       $v1, $v1, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa738) {
            ctx->pc = 0x1AA810u;
            return;
        }
    }
    ctx->pc = 0x1AA740u;
}
