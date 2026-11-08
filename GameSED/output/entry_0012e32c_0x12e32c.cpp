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

// Function: entry_0012e32c
// Address: 0x12e32c - 0x12e350
void entry_0012e32c_0x12e32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e32c_0x12e32c");
#endif

    switch (ctx->pc) {
        case 0x12e338u: goto label_12e338;
        default: break;
    }

    ctx->pc = 0x12e32cu;

    // 0x12e32c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e330: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E330u;
    SET_GPR_U32(ctx, 31, 0x12E338u);
    ctx->pc = 0x12E334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E330u;
    // 0x12e334: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E330u, 0x12E338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E338u;
label_12e338:
    // 0x12e338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e33c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E33Cu;
    {
        const bool branch_taken_0x12e33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E33Cu;
        // 0x12e340: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e33c) {
            ctx->pc = 0x12E350u;
            return;
        }
    }
    ctx->pc = 0x12E344u;
    // 0x12e344: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12E344u;
    {
        const bool branch_taken_0x12e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E344u;
        // 0x12e348: 0xae700028  sw          $s0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e344) {
            ctx->pc = 0x12E36Cu;
            return;
        }
    }
    ctx->pc = 0x12E34Cu;
    // 0x12e34c: 0x0  nop
    ctx->pc = 0x12e34cu;
    // NOP
    ctx->pc = 0x12e350u;
}
