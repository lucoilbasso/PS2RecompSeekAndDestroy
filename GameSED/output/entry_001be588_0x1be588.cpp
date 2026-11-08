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

// Function: entry_001be588
// Address: 0x1be588 - 0x1be5b4
void entry_001be588_0x1be588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be588_0x1be588");
#endif

    ctx->pc = 0x1be588u;

    // 0x1be588: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1be588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1be58c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1be58cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1be590: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE590u;
    {
        const bool branch_taken_0x1be590 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE590u;
        // 0x1be594: 0xafc2012c  sw          $v0, 0x12C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be590) {
            ctx->pc = 0x1BE5B4u;
            return;
        }
    }
    ctx->pc = 0x1BE598u;
    // 0x1be598: 0x8fc2013c  lw          $v0, 0x13C($fp)
    ctx->pc = 0x1be598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 316)));
    // 0x1be59c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE59Cu;
    {
        const bool branch_taken_0x1be59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE59Cu;
        // 0x1be5a0: 0x8fc20128  lw          $v0, 0x128($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be59c) {
            ctx->pc = 0x1BE5B8u;
            return;
        }
    }
    ctx->pc = 0x1BE5A4u;
    // 0x1be5a4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1be5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1be5a8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1be5a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1be5ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE5ACu;
    {
        const bool branch_taken_0x1be5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5ACu;
        // 0x1be5b0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5ac) {
            ctx->pc = 0x1BE5C0u;
            return;
        }
    }
    ctx->pc = 0x1BE5B4u;
}
