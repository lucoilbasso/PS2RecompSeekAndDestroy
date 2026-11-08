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

// Function: entry_0019867c
// Address: 0x19867c - 0x1986c8
void entry_0019867c_0x19867c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019867c_0x19867c");
#endif

    ctx->pc = 0x19867cu;

    // 0x19867c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x19867cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198680: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x198680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198684: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x198684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x198688: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x198688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19868c: 0x8e85019c  lw          $a1, 0x19C($s4)
    ctx->pc = 0x19868cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x198690: 0x30441000  andi        $a0, $v0, 0x1000
    ctx->pc = 0x198690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x198694: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x198694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x198698: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x198698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x19869c: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x19869cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1986a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1986a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986a4: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x1986a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
    // 0x1986a8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1986a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986ac: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1986acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1986b0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1986B0u;
    {
        const bool branch_taken_0x1986b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986B0u;
        // 0x1986b4: 0x8fc60164  lw          $a2, 0x164($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986b0) {
            ctx->pc = 0x1986C8u;
            return;
        }
    }
    ctx->pc = 0x1986B8u;
    // 0x1986b8: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1986b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1986bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1986bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1986c0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1986c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1986c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1986c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1986c8u;
}
