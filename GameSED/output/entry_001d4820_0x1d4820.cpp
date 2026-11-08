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

// Function: entry_001d4820
// Address: 0x1d4820 - 0x1d4870
void entry_001d4820_0x1d4820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4820_0x1d4820");
#endif

    ctx->pc = 0x1d4820u;

    // 0x1d4820: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d4820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d4824: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d4824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d4828: 0x2442e1c0  addiu       $v0, $v0, -0x1E40
    ctx->pc = 0x1d4828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959552));
    // 0x1d482c: 0x244afff8  addiu       $t2, $v0, -0x8
    ctx->pc = 0x1d482cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1d4830: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x1d4830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d4834: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1d4834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d4838: 0x54c7000d  bnel        $a2, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4838u;
    {
        const bool branch_taken_0x1d4838 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x1d4838) {
            ctx->pc = 0x1D483Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4838u;
            // 0x1d483c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4870u;
            return;
        }
    }
    ctx->pc = 0x1D4840u;
    // 0x1d4840: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x1d4840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1d4844: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1d4844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d4848: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x1d4848u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x1d484c: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x1d484cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1d4850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4854: 0x52083  sra         $a0, $a1, 2
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1d4858: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1d4858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1d485c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d4860: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d4860u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d4864: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d4864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d4868: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D4868u;
    {
        const bool branch_taken_0x1d4868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4868u;
        // 0x1d486c: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4868) {
            ctx->pc = 0x1D48A0u;
            return;
        }
    }
    ctx->pc = 0x1D4870u;
}
