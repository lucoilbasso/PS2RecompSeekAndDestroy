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

// Function: entry_001ae684
// Address: 0x1ae684 - 0x1ae6ac
void entry_001ae684_0x1ae684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae684_0x1ae684");
#endif

    ctx->pc = 0x1ae684u;

    // 0x1ae684: 0x25830938  addiu       $v1, $t4, 0x938
    ctx->pc = 0x1ae684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
    // 0x1ae688: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1ae688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ae68c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ae68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae690: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1ae690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ae694: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1ae694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae698: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1ae698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1ae69c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ae69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae6a0: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x1ae6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1ae6a4: 0x1444ffd2  bne         $v0, $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1AE6A4u;
    {
        const bool branch_taken_0x1ae6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6A4u;
        // 0x1ae6a8: 0x258b0938  addiu       $t3, $t4, 0x938 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6a4) {
            ctx->pc = 0x1AE5F0u;
            return;
        }
    }
    ctx->pc = 0x1AE6ACu;
}
