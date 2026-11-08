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

// Function: entry_0014ab78
// Address: 0x14ab78 - 0x14ab8c
void entry_0014ab78_0x14ab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab78_0x14ab78");
#endif

    ctx->pc = 0x14ab78u;

    // 0x14ab78: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x14ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x14ab7c: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x14ab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14ab80: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x14ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14ab84: 0xc067294  jal         func_19CA50
    ctx->pc = 0x14AB84u;
    SET_GPR_U32(ctx, 31, 0x14AB8Cu);
    ctx->pc = 0x14AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB84u;
    // 0x14ab88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x14AB84u, 0x14AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB8Cu;
}
