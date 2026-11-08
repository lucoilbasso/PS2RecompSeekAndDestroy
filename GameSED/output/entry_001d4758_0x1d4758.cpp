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

// Function: entry_001d4758
// Address: 0x1d4758 - 0x1d47b8
void entry_001d4758_0x1d4758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4758_0x1d4758");
#endif

    ctx->pc = 0x1d4758u;

    // 0x1d4758: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x1d4758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d475c: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x1d475cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x1d4760: 0x15600053  bnez        $t3, . + 4 + (0x53 << 2)
    ctx->pc = 0x1D4760u;
    {
        const bool branch_taken_0x1d4760 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4760u;
        // 0x1d4764: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4760) {
            ctx->pc = 0x1D48B0u;
            return;
        }
    }
    ctx->pc = 0x1D4768u;
    // 0x1d4768: 0x2d020200  sltiu       $v0, $t0, 0x200
    ctx->pc = 0x1d4768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1d476c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D476Cu;
    {
        const bool branch_taken_0x1d476c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d476c) {
            ctx->pc = 0x1D4770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D476Cu;
            // 0x1d4770: 0x81a42  srl         $v1, $t0, 9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47B8u;
            return;
        }
    }
    ctx->pc = 0x1D4774u;
    // 0x1d4774: 0x828c2  srl         $a1, $t0, 3
    ctx->pc = 0x1d4774u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
    // 0x1d4778: 0x2584e1b8  addiu       $a0, $t4, -0x1E48
    ctx->pc = 0x1d4778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294959544));
    // 0x1d477c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d477cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d4780: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x1d4780u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1d4784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4788: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1d4788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d478c: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x1d478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1d4790: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d4790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d4794: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1d4794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d4798: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d4798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d479c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d479cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d47a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d47a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d47a4: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x1d47a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x1d47a8: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x1d47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x1d47ac: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1D47ACu;
    {
        const bool branch_taken_0x1d47ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47ACu;
        // 0x1d47b0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47ac) {
            ctx->pc = 0x1D48A8u;
            return;
        }
    }
    ctx->pc = 0x1D47B4u;
    // 0x1d47b4: 0x0  nop
    ctx->pc = 0x1d47b4u;
    // NOP
    ctx->pc = 0x1d47b8u;
}
