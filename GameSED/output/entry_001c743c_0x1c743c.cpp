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

// Function: entry_001c743c
// Address: 0x1c743c - 0x1c7468
void entry_001c743c_0x1c743c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c743c_0x1c743c");
#endif

    ctx->pc = 0x1c743cu;

    // 0x1c743c: 0x16000048  bnez        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C743Cu;
    {
        const bool branch_taken_0x1c743c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C743Cu;
        // 0x1c7440: 0x8fa80248  lw          $t0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c743c) {
            ctx->pc = 0x1C7560u;
            return;
        }
    }
    ctx->pc = 0x1C7444u;
    // 0x1c7444: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x1c7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1c7448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c7448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c744c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c7450: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7454: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C7454u;
    {
        const bool branch_taken_0x1c7454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7454u;
        // 0x1c7458: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7454) {
            ctx->pc = 0x1C7484u;
            return;
        }
    }
    ctx->pc = 0x1C745Cu;
    // 0x1c745c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1c745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1c7460: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c7464: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x1c7464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->pc = 0x1c7468u;
}
