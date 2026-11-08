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

// Function: entry_001c7344
// Address: 0x1c7344 - 0x1c7370
void entry_001c7344_0x1c7344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7344_0x1c7344");
#endif

    ctx->pc = 0x1c7344u;

    // 0x1c7344: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x1c7344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c7348: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C7348u;
    {
        const bool branch_taken_0x1c7348 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1C734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7348u;
        // 0x1c734c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7348) {
            ctx->pc = 0x1C73A0u;
            return;
        }
    }
    ctx->pc = 0x1C7350u;
    // 0x1c7350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7354: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7354u;
    {
        const bool branch_taken_0x1c7354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7354u;
        // 0x1c7358: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7354) {
            ctx->pc = 0x1C7370u;
            return;
        }
    }
    ctx->pc = 0x1C735Cu;
    // 0x1c735c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C735Cu;
    {
        const bool branch_taken_0x1c735c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C735Cu;
        // 0x1c7360: 0x161880  sll         $v1, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c735c) {
            ctx->pc = 0x1C7380u;
            return;
        }
    }
    ctx->pc = 0x1C7364u;
    // 0x1c7364: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C7364u;
    {
        const bool branch_taken_0x1c7364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7364) {
            ctx->pc = 0x1C73A0u;
            return;
        }
    }
    ctx->pc = 0x1C736Cu;
    // 0x1c736c: 0x0  nop
    ctx->pc = 0x1c736cu;
    // NOP
    ctx->pc = 0x1c7370u;
}
