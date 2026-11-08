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

// Function: entry_001bf758
// Address: 0x1bf758 - 0x1bf7d4
void entry_001bf758_0x1bf758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf758_0x1bf758");
#endif

    ctx->pc = 0x1bf758u;

    // 0x1bf758: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1bf758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf75c: 0x650c3  sra         $t2, $a2, 3
    ctx->pc = 0x1bf75cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
    // 0x1bf760: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x1bf760u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf764: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x1bf764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1bf768: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1bf768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1bf76c: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x1bf76cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1bf770: 0x838c3  sra         $a3, $t0, 3
    ctx->pc = 0x1bf770u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
    // 0x1bf774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bf774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bf778: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1bf778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1bf77c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1bf77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1bf780: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x1bf780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1bf784: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1bf788: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x1bf788u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1bf78c: 0x32d90001  andi        $t9, $s6, 0x1
    ctx->pc = 0x1bf78cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x1bf790: 0xade30004  sw          $v1, 0x4($t7)
    ctx->pc = 0x1bf790u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 3));
    // 0x1bf794: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF794u;
    {
        const bool branch_taken_0x1bf794 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF794u;
        // 0x1bf798: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf794) {
            ctx->pc = 0x1BF7D4u;
            return;
        }
    }
    ctx->pc = 0x1BF79Cu;
    // 0x1bf79c: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x1bf79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7a0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bf7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf7a4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1bf7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bf7a8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BF7A8u;
    {
        const bool branch_taken_0x1bf7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf7a8) {
            ctx->pc = 0x1BF7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF7A8u;
            // 0x1bf7ac: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF808u;
            return;
        }
    }
    ctx->pc = 0x1BF7B0u;
    // 0x1bf7b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bf7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf7b4: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1bf7b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7b8: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1bf7b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bf7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf7c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bf7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bf7c4: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x1bf7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1bf7c8: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x1bf7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x1bf7cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BF7CCu;
    {
        const bool branch_taken_0x1bf7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7CCu;
        // 0x1bf7d0: 0xade3000c  sw          $v1, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7cc) {
            ctx->pc = 0x1BF80Cu;
            return;
        }
    }
    ctx->pc = 0x1BF7D4u;
}
