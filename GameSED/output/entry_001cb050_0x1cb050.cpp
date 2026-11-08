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

// Function: entry_001cb050
// Address: 0x1cb050 - 0x1cb094
void entry_001cb050_0x1cb050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb050_0x1cb050");
#endif

    ctx->pc = 0x1cb050u;

    // 0x1cb050: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cb050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cb054: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB054u;
    {
        const bool branch_taken_0x1cb054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb054) {
            ctx->pc = 0x1CB058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB054u;
            // 0x1cb058: 0x8a1021  addu        $v0, $a0, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB0A8u;
            return;
        }
    }
    ctx->pc = 0x1CB05Cu;
    // 0x1cb05c: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1cb05cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cb060: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB060u;
    {
        const bool branch_taken_0x1cb060 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB060u;
        // 0x1cb064: 0x10b682b  sltu        $t5, $t0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb060) {
            ctx->pc = 0x1CB0A4u;
            return;
        }
    }
    ctx->pc = 0x1CB068u;
    // 0x1cb068: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x1cb068u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cb06c: 0x51200009  beql        $t1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB06Cu;
    {
        const bool branch_taken_0x1cb06c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb06c) {
            ctx->pc = 0x1CB070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB06Cu;
            // 0x1cb070: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB094u;
            return;
        }
    }
    ctx->pc = 0x1CB074u;
    // 0x1cb074: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x1cb074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1cb078: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb07c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb080: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1cb080u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1cb084: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1cb084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1cb088: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1cb088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1cb08c: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x1cb08cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb090: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1cb090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->pc = 0x1cb094u;
}
