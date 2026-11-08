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

// Function: entry_001940ac
// Address: 0x1940ac - 0x1940f8
void entry_001940ac_0x1940ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001940ac_0x1940ac");
#endif

    ctx->pc = 0x1940acu;

    // 0x1940ac: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x1940acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x1940b0: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x1940b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1940b4: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x1940b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1940b8: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x1940b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1940bc: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x1940bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1940c0: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x1940c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1940c4: 0x9205000f  lbu         $a1, 0xF($s0)
    ctx->pc = 0x1940c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1940c8: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x1940c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1940cc: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x1940ccu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1940d0: 0x7047001a  div1        $zero, $v0, $a3
    ctx->pc = 0x1940d0u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1940d4: 0x1812  mflo        $v1
    ctx->pc = 0x1940d4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1940d8: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x1940d8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1940dc: 0x70001012  mflo1       $v0
    ctx->pc = 0x1940dcu;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x1940e0: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1940e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1940e4: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x1940e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1940e8: 0x2012  mflo        $a0
    ctx->pc = 0x1940e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1940ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1940ECu;
    {
        const bool branch_taken_0x1940ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940ECu;
        // 0x1940f0: 0xa3a40001  sb          $a0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940ec) {
            ctx->pc = 0x194108u;
            return;
        }
    }
    ctx->pc = 0x1940F4u;
    // 0x1940f4: 0x0  nop
    ctx->pc = 0x1940f4u;
    // NOP
    ctx->pc = 0x1940f8u;
}
