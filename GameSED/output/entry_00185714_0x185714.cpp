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

// Function: entry_00185714
// Address: 0x185714 - 0x18572c
void entry_00185714_0x185714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185714_0x185714");
#endif

    ctx->pc = 0x185714u;

    // 0x185714: 0x56e00006  bnel        $s7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x185714u;
    {
        const bool branch_taken_0x185714 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x185714) {
            ctx->pc = 0x185718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185714u;
            // 0x185718: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185730u;
            return;
        }
    }
    ctx->pc = 0x18571Cu;
    // 0x18571c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x185720: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x185720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x185724: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x185724u;
    {
        const bool branch_taken_0x185724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x185724) {
            ctx->pc = 0x185898u;
            return;
        }
    }
    ctx->pc = 0x18572Cu;
}
