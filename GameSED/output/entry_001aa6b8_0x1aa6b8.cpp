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

// Function: entry_001aa6b8
// Address: 0x1aa6b8 - 0x1aa714
void entry_001aa6b8_0x1aa6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa6b8_0x1aa6b8");
#endif

    ctx->pc = 0x1aa6b8u;

    // 0x1aa6b8: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x1aa6b8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1aa6bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1aa6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aa6c0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1aa6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa6c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1aa6c8: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x1aa6c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1aa6cc: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1aa6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1aa6d0: 0x64a5027c  daddiu      $a1, $a1, 0x27C
    ctx->pc = 0x1aa6d0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x1aa6d4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1aa6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1aa6d8: 0x23b38  dsll        $a3, $v0, 12
    ctx->pc = 0x1aa6d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x1aa6dc: 0x1812  mflo        $v1
    ctx->pc = 0x1aa6dcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1aa6e0: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x1aa6e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1aa6e4: 0x72a31018  mult1       $v0, $s5, $v1
    ctx->pc = 0x1aa6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1aa6e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aa6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1aa6ec: 0x355f8  dsll        $t2, $v1, 23
    ctx->pc = 0x1aa6ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x1aa6f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1aa6f4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1aa6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1aa6f8: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x1aa6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1aa6fc: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x1AA6FCu;
    {
        const bool branch_taken_0x1aa6fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6FCu;
        // 0x1aa700: 0x30a50fff  andi        $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6fc) {
            ctx->pc = 0x1AA7C8u;
            return;
        }
    }
    ctx->pc = 0x1AA704u;
    // 0x1aa704: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1aa704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1aa708: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x1aa708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1aa70c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1AA70Cu;
    {
        const bool branch_taken_0x1aa70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA70Cu;
        // 0x1aa710: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa70c) {
            ctx->pc = 0x1AA7D0u;
            return;
        }
    }
    ctx->pc = 0x1AA714u;
}
