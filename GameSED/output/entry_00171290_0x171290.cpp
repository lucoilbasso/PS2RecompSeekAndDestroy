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

// Function: entry_00171290
// Address: 0x171290 - 0x1712bc
void entry_00171290_0x171290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171290_0x171290");
#endif

    ctx->pc = 0x171290u;

    // 0x171290: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x171290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x171294: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x171294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x171298: 0x258603ff  addiu       $a2, $t4, 0x3FF
    ctx->pc = 0x171298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 1023));
    // 0x17129c: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x17129cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1712a0: 0x29840000  slti        $a0, $t4, 0x0
    ctx->pc = 0x1712a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1712a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1712a8: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x1712a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712ac: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1712acu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1712b0: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x1712b0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1712b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1712B4u;
    {
        const bool branch_taken_0x1712b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712b4) {
            ctx->pc = 0x1712B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1712B4u;
            // 0x1712b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1712BCu;
            return;
        }
    }
    ctx->pc = 0x1712BCu;
}
