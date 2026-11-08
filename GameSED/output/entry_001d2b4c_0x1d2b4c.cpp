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

// Function: entry_001d2b4c
// Address: 0x1d2b4c - 0x1d2b88
void entry_001d2b4c_0x1d2b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2b4c_0x1d2b4c");
#endif

    ctx->pc = 0x1d2b4cu;

    // 0x1d2b4c: 0x1812  mflo        $v1
    ctx->pc = 0x1d2b4cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d2b50: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2b50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d2b54: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d2b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b58: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1d2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d2b5c: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x1d2b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d2b60: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1d2b60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2b64: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D2B64u;
    {
        const bool branch_taken_0x1d2b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2b64) {
            ctx->pc = 0x1D2B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2B64u;
            // 0x1d2b68: 0xa8001a  div         $zero, $a1, $t0 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B40u;
            return;
        }
    }
    ctx->pc = 0x1D2B6Cu;
    // 0x1d2b6c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1d2b70: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x1d2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1d2b74: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x1d2b74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1d2b78: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D2B78u;
    {
        const bool branch_taken_0x1d2b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B78u;
        // 0x1d2b7c: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b78) {
            ctx->pc = 0x1D2BC8u;
            return;
        }
    }
    ctx->pc = 0x1D2B80u;
    // 0x1d2b80: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1d2b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b84: 0x0  nop
    ctx->pc = 0x1d2b84u;
    // NOP
    ctx->pc = 0x1d2b88u;
}
