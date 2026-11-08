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

// Function: entry_001bf5c8
// Address: 0x1bf5c8 - 0x1bf658
void entry_001bf5c8_0x1bf5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf5c8_0x1bf5c8");
#endif

    ctx->pc = 0x1bf5c8u;

    // 0x1bf5c8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1bf5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1bf5cc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1bf5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf5d0: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x1bf5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1bf5d4: 0x8a103  sra         $s4, $t0, 4
    ctx->pc = 0x1bf5d4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 4));
    // 0x1bf5d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bf5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf5dc: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1bf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1bf5e0: 0x2852818  mult        $a1, $s4, $a1
    ctx->pc = 0x1bf5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bf5e4: 0x6a903  sra         $s5, $a2, 4
    ctx->pc = 0x1bf5e4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1bf5e8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1bf5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf5ec: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1bf5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bf5f0: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x1bf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1bf5f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1bf5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1bf5f8: 0xad830004  sw          $v1, 0x4($t4)
    ctx->pc = 0x1bf5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
    // 0x1bf5fc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1bf5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1bf600: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x1bf600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x1bf604: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1bf604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1bf608: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1bf608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1bf60c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1bf60cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf610: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x1bf610u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x1bf614: 0x32590001  andi        $t9, $s2, 0x1
    ctx->pc = 0x1bf614u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1bf618: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF618u;
    {
        const bool branch_taken_0x1bf618 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF618u;
        // 0x1bf61c: 0x32d30001  andi        $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf618) {
            ctx->pc = 0x1BF658u;
            return;
        }
    }
    ctx->pc = 0x1BF620u;
    // 0x1bf620: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x1bf620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf624: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bf624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf628: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1bf628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1bf62c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BF62Cu;
    {
        const bool branch_taken_0x1bf62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf62c) {
            ctx->pc = 0x1BF630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF62Cu;
            // 0x1bf630: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF68Cu;
            return;
        }
    }
    ctx->pc = 0x1BF634u;
    // 0x1bf634: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1bf634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf638: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1bf638u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf63c: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1bf63cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf640: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bf640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf644: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bf644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bf648: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x1bf648u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1bf64c: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x1bf64cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x1bf650: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BF650u;
    {
        const bool branch_taken_0x1bf650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF650u;
        // 0x1bf654: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf650) {
            ctx->pc = 0x1BF690u;
            return;
        }
    }
    ctx->pc = 0x1BF658u;
}
