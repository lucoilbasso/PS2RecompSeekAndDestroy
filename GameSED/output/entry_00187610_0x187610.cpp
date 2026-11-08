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

// Function: entry_00187610
// Address: 0x187610 - 0x18763c
void entry_00187610_0x187610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187610_0x187610");
#endif

    ctx->pc = 0x187610u;

label_187610:
    // 0x187610: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x187610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x187614: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x187614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x187618: 0x0  nop
    ctx->pc = 0x187618u;
    // NOP
    // 0x18761c: 0x0  nop
    ctx->pc = 0x18761cu;
    // NOP
    // 0x187620: 0x0  nop
    ctx->pc = 0x187620u;
    // NOP
    // 0x187624: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187624u;
    {
        const bool branch_taken_0x187624 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x187628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187624u;
        // 0x187628: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187624) {
            ctx->pc = 0x187610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187610;
        }
    }
    ctx->pc = 0x18762Cu;
    // 0x18762c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18762cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x187630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187634: 0xc068584  jal         func_1A1610
    ctx->pc = 0x187634u;
    SET_GPR_U32(ctx, 31, 0x18763Cu);
    ctx->pc = 0x187638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187634u;
    // 0x187638: 0x248415f8  addiu       $a0, $a0, 0x15F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x187634u, 0x18763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18763Cu;
}
