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

// Function: entry_001aa76c
// Address: 0x1aa76c - 0x1aa7c8
void entry_001aa76c_0x1aa76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa76c_0x1aa76c");
#endif

    ctx->pc = 0x1aa76cu;

    // 0x1aa76c: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x1aa76cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1aa770: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1aa770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aa774: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1aa774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa778: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1aa778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1aa77c: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x1aa77cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1aa780: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1aa780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x1aa784: 0x64a50290  daddiu      $a1, $a1, 0x290
    ctx->pc = 0x1aa784u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x1aa788: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1aa788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1aa78c: 0x23b38  dsll        $a3, $v0, 12
    ctx->pc = 0x1aa78cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x1aa790: 0x1812  mflo        $v1
    ctx->pc = 0x1aa790u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1aa794: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x1aa794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1aa798: 0x72a31018  mult1       $v0, $s5, $v1
    ctx->pc = 0x1aa798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1aa79c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aa79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1aa7a0: 0x355f8  dsll        $t2, $v1, 23
    ctx->pc = 0x1aa7a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x1aa7a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1aa7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1aa7a8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1aa7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1aa7ac: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x1aa7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1aa7b0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA7B0u;
    {
        const bool branch_taken_0x1aa7b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7B0u;
        // 0x1aa7b4: 0x30a50fff  andi        $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7b0) {
            ctx->pc = 0x1AA7C8u;
            return;
        }
    }
    ctx->pc = 0x1AA7B8u;
    // 0x1aa7b8: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1aa7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1aa7bc: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x1aa7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1aa7c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA7C0u;
    {
        const bool branch_taken_0x1aa7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7C0u;
        // 0x1aa7c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7c0) {
            ctx->pc = 0x1AA7D0u;
            return;
        }
    }
    ctx->pc = 0x1AA7C8u;
}
