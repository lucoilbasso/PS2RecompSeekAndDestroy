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

// Function: entry_00179670
// Address: 0x179670 - 0x179690
void entry_00179670_0x179670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179670_0x179670");
#endif

    switch (ctx->pc) {
        case 0x179680u: goto label_179680;
        default: break;
    }

    ctx->pc = 0x179670u;

    // 0x179670: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x179670u;
    {
        const bool branch_taken_0x179670 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x179674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179670u;
        // 0x179674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179670) {
            ctx->pc = 0x179694u;
            return;
        }
    }
    ctx->pc = 0x179678u;
    // 0x179678: 0xc05e724  jal         func_179C90
    ctx->pc = 0x179678u;
    SET_GPR_U32(ctx, 31, 0x179680u);
    ctx->pc = 0x179C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C90u, 0x179678u, 0x179680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179680u;
label_179680:
    // 0x179680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179684: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x179684u;
    {
        const bool branch_taken_0x179684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x179688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179684u;
        // 0x179688: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179684) {
            ctx->pc = 0x179690u;
            return;
        }
    }
    ctx->pc = 0x17968Cu;
    // 0x17968c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x17968cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x179690u;
}
