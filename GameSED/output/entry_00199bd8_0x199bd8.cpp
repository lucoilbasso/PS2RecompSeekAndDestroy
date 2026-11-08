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

// Function: entry_00199bd8
// Address: 0x199bd8 - 0x199c14
void entry_00199bd8_0x199bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199bd8_0x199bd8");
#endif

    ctx->pc = 0x199bd8u;

    // 0x199bd8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x199bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x199bdc: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x199bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x199be0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x199be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x199be4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x199be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199bec: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x199becu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x199bf0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x199bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x199bf4: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x199BF4u;
    {
        const bool branch_taken_0x199bf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x199bf4) {
            ctx->pc = 0x199C88u;
            return;
        }
    }
    ctx->pc = 0x199BFCu;
    // 0x199bfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199c00: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x199c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199c04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199C04u;
    {
        const bool branch_taken_0x199c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C04u;
        // 0x199c08: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c04) {
            ctx->pc = 0x199C14u;
            return;
        }
    }
    ctx->pc = 0x199C0Cu;
    // 0x199c0c: 0x16a0001e  bnez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x199C0Cu;
    {
        const bool branch_taken_0x199c0c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x199c0c) {
            ctx->pc = 0x199C88u;
            return;
        }
    }
    ctx->pc = 0x199C14u;
}
