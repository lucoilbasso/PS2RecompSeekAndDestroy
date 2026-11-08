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

// Function: entry_0017b878
// Address: 0x17b878 - 0x17b898
void entry_0017b878_0x17b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b878_0x17b878");
#endif

    switch (ctx->pc) {
        case 0x17b88cu: goto label_17b88c;
        default: break;
    }

    ctx->pc = 0x17b878u;

    // 0x17b878: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b87c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B87Cu;
    {
        const bool branch_taken_0x17b87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b87c) {
            ctx->pc = 0x17B880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B87Cu;
            // 0x17b880: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B898u;
            return;
        }
    }
    ctx->pc = 0x17B884u;
    // 0x17b884: 0xc05ef22  jal         func_17BC88
    ctx->pc = 0x17B884u;
    SET_GPR_U32(ctx, 31, 0x17B88Cu);
    ctx->pc = 0x17B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B884u;
    // 0x17b888: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC88u, 0x17B884u, 0x17B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B88Cu;
label_17b88c:
    // 0x17b88c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B88Cu;
    {
        const bool branch_taken_0x17b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B88Cu;
        // 0x17b890: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b88c) {
            ctx->pc = 0x17B8ACu;
            return;
        }
    }
    ctx->pc = 0x17B894u;
    // 0x17b894: 0x0  nop
    ctx->pc = 0x17b894u;
    // NOP
    ctx->pc = 0x17b898u;
}
