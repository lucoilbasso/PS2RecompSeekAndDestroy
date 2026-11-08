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

// Function: entry_001bd240
// Address: 0x1bd240 - 0x1bd254
void entry_001bd240_0x1bd240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd240_0x1bd240");
#endif

    ctx->pc = 0x1bd240u;

    // 0x1bd240: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bd240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd244: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD244u;
    {
        const bool branch_taken_0x1bd244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1BD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD244u;
        // 0x1bd248: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd244) {
            ctx->pc = 0x1BD254u;
            return;
        }
    }
    ctx->pc = 0x1BD24Cu;
    // 0x1bd24c: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD24Cu;
    SET_GPR_U32(ctx, 31, 0x1BD254u);
    ctx->pc = 0x1BD250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD24Cu;
    // 0x1bd250: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD24Cu, 0x1BD254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD254u;
}
