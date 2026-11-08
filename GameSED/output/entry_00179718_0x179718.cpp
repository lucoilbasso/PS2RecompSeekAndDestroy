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

// Function: entry_00179718
// Address: 0x179718 - 0x179738
void entry_00179718_0x179718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179718_0x179718");
#endif

    switch (ctx->pc) {
        case 0x179728u: goto label_179728;
        default: break;
    }

    ctx->pc = 0x179718u;

    // 0x179718: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x179718u;
    {
        const bool branch_taken_0x179718 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x179718) {
            ctx->pc = 0x179738u;
            return;
        }
    }
    ctx->pc = 0x179720u;
    // 0x179720: 0xc05e74a  jal         func_179D28
    ctx->pc = 0x179720u;
    SET_GPR_U32(ctx, 31, 0x179728u);
    ctx->pc = 0x179D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D28u, 0x179720u, 0x179728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179728u;
label_179728:
    // 0x179728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17972c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17972Cu;
    {
        const bool branch_taken_0x17972c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x179730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17972Cu;
        // 0x179730: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17972c) {
            ctx->pc = 0x179738u;
            return;
        }
    }
    ctx->pc = 0x179734u;
    // 0x179734: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x179734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x179738u;
}
