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

// Function: entry_00175bc8
// Address: 0x175bc8 - 0x175c10
void entry_00175bc8_0x175bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175bc8_0x175bc8");
#endif

    ctx->pc = 0x175bc8u;

    // 0x175bc8: 0x4b001a  div         $zero, $v0, $t3
    ctx->pc = 0x175bc8u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175bcc: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x175bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x175bd0: 0x362c0  sll         $t4, $v1, 11
    ctx->pc = 0x175bd0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x175bd4: 0x2010  mfhi        $a0
    ctx->pc = 0x175bd4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x175bd8: 0x18a00048  blez        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x175BD8u;
    {
        const bool branch_taken_0x175bd8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x175BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BD8u;
        // 0x175bdc: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bd8) {
            ctx->pc = 0x175CFCu;
            return;
        }
    }
    ctx->pc = 0x175BE0u;
    // 0x175be0: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x175be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x175be4: 0x8d430050  lw          $v1, 0x50($t2)
    ctx->pc = 0x175be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x175be8: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x175bec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175bf0: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x175bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175bf4: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x175bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x175bf8: 0x11000040  beqz        $t0, . + 4 + (0x40 << 2)
    ctx->pc = 0x175BF8u;
    {
        const bool branch_taken_0x175bf8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x175bf8) {
            ctx->pc = 0x175CFCu;
            return;
        }
    }
    ctx->pc = 0x175C00u;
    // 0x175c00: 0x8dc90014  lw          $t1, 0x14($t6)
    ctx->pc = 0x175c00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x175c04: 0x1120003d  beqz        $t1, . + 4 + (0x3D << 2)
    ctx->pc = 0x175C04u;
    {
        const bool branch_taken_0x175c04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c04) {
            ctx->pc = 0x175CFCu;
            return;
        }
    }
    ctx->pc = 0x175C0Cu;
    // 0x175c0c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x175c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x175c10u;
}
