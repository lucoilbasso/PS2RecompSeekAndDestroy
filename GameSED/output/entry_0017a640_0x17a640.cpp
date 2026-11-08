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

// Function: entry_0017a640
// Address: 0x17a640 - 0x17a660
void entry_0017a640_0x17a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a640_0x17a640");
#endif

    switch (ctx->pc) {
        case 0x17a650u: goto label_17a650;
        default: break;
    }

    ctx->pc = 0x17a640u;

    // 0x17a640: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x17a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17a644: 0x24057650  addiu       $a1, $zero, 0x7650
    ctx->pc = 0x17a644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30288));
    // 0x17a648: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x17A648u;
    SET_GPR_U32(ctx, 31, 0x17A650u);
    ctx->pc = 0x17A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A648u;
    // 0x17a64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x17A648u, 0x17A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A650u;
label_17a650:
    // 0x17a650: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17A650u;
    {
        const bool branch_taken_0x17a650 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17a650) {
            ctx->pc = 0x17A654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A650u;
            // 0x17a654: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A680u;
            return;
        }
    }
    ctx->pc = 0x17A658u;
    // 0x17a658: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17A658u;
    SET_GPR_U32(ctx, 31, 0x17A660u);
    ctx->pc = 0x17A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A658u;
    // 0x17a65c: 0x26447ac0  addiu       $a0, $s2, 0x7AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17A658u, 0x17A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A660u;
}
