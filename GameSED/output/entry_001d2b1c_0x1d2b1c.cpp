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

// Function: entry_001d2b1c
// Address: 0x1d2b1c - 0x1d2b40
void entry_001d2b1c_0x1d2b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2b1c_0x1d2b1c");
#endif

    ctx->pc = 0x1d2b1cu;

    // 0x1d2b1c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1d2b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2b20: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x1d2b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1d2b24: 0x27a70134  addiu       $a3, $sp, 0x134
    ctx->pc = 0x1d2b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x1d2b28: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1d2b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d2b2c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D2B2Cu;
    {
        const bool branch_taken_0x1d2b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B2Cu;
        // 0x1d2b30: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b2c) {
            ctx->pc = 0x1D2BB0u;
            return;
        }
    }
    ctx->pc = 0x1D2B34u;
    // 0x1d2b34: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1d2b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d2b38: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x1d2b38u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d2b3c: 0x0  nop
    ctx->pc = 0x1d2b3cu;
    // NOP
    ctx->pc = 0x1d2b40u;
}
