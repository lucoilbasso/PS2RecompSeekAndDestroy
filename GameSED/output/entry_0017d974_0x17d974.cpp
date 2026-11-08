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

// Function: entry_0017d974
// Address: 0x17d974 - 0x17d9d8
void entry_0017d974_0x17d974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d974_0x17d974");
#endif

    ctx->pc = 0x17d974u;

    // 0x17d974: 0xa562fffa  sh          $v0, -0x6($t3)
    ctx->pc = 0x17d974u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4294967290), (uint16_t)GPR_U32(ctx, 2));
    // 0x17d978: 0x71001004  plzcw       $v0, $t0
    ctx->pc = 0x17d978u;
    { uint64_t v = GPR_U64(ctx, 8); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x17d97c: 0x70021488  pextlw      $v0, $zero, $v0
    ctx->pc = 0x17d97cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x17d980: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x17d980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17d984: 0xa5420018  sh          $v0, 0x18($t2)
    ctx->pc = 0x17d984u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x17d988: 0x71201804  plzcw       $v1, $t1
    ctx->pc = 0x17d988u;
    { uint64_t v = GPR_U64(ctx, 9); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x17d98c: 0x70031c88  pextlw      $v1, $zero, $v1
    ctx->pc = 0x17d98cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x17d990: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d994: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x17d994u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17d998: 0xa543001a  sh          $v1, 0x1A($t2)
    ctx->pc = 0x17d998u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x17d99c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17D99Cu;
    {
        const bool branch_taken_0x17d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D99Cu;
        // 0x17d9a0: 0xfd400038  sd          $zero, 0x38($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d99c) {
            ctx->pc = 0x17DA28u;
            return;
        }
    }
    ctx->pc = 0x17D9A4u;
    // 0x17d9a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17d9a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17d9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d9b0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17d9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17d9b4: 0x761026  xor         $v0, $v1, $s6
    ctx->pc = 0x17d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 22));
    // 0x17d9b8: 0x771826  xor         $v1, $v1, $s7
    ctx->pc = 0x17d9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 23));
    // 0x17d9bc: 0x282200a  movz        $a0, $s4, $v0
    ctx->pc = 0x17d9bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
    // 0x17d9c0: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x17d9c4: 0xc3200a  movz        $a0, $a2, $v1
    ctx->pc = 0x17d9c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x17d9c8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x17d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17d9cc: 0xe4001b  divu        $zero, $a3, $a0
    ctx->pc = 0x17d9ccu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x17d9d0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17D9D0u;
    {
        const bool branch_taken_0x17d9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d9d0) {
            ctx->pc = 0x17D9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D9D0u;
            // 0x17d9d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D9D8u;
            return;
        }
    }
    ctx->pc = 0x17D9D8u;
}
