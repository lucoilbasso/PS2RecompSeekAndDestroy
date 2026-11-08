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

// Function: entry_00175360
// Address: 0x175360 - 0x1753a0
void entry_00175360_0x175360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175360_0x175360");
#endif

    ctx->pc = 0x175360u;

    // 0x175360: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x175360u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175364: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x175364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175368: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x175368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x17536c: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x17536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x175370: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x175370u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x175374: 0x3810  mfhi        $a3
    ctx->pc = 0x175374u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x175378: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17537c: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x17537cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x175380: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x175380u;
    {
        const bool branch_taken_0x175380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175380u;
        // 0x175384: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175380) {
            ctx->pc = 0x1753A0u;
            return;
        }
    }
    ctx->pc = 0x175388u;
    // 0x175388: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x175388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17538c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x17538cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x175390: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x175390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x175394: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x175394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x175398: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x175398u;
    {
        const bool branch_taken_0x175398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175398u;
        // 0x17539c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175398) {
            ctx->pc = 0x1753CCu;
            return;
        }
    }
    ctx->pc = 0x1753A0u;
}
