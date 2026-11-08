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

// Function: entry_00134de8
// Address: 0x134de8 - 0x134e08
void entry_00134de8_0x134de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134de8_0x134de8");
#endif

    switch (ctx->pc) {
        case 0x134df8u: goto label_134df8;
        default: break;
    }

    ctx->pc = 0x134de8u;

    // 0x134de8: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x134DE8u;
    {
        const bool branch_taken_0x134de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134de8) {
            ctx->pc = 0x134DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134DE8u;
            // 0x134dec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134E08u;
            return;
        }
    }
    ctx->pc = 0x134DF0u;
    // 0x134df0: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x134DF0u;
    SET_GPR_U32(ctx, 31, 0x134DF8u);
    ctx->pc = 0x134DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DF0u;
    // 0x134df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x134DF0u, 0x134DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DF8u;
label_134df8:
    // 0x134df8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134DFCu;
    {
        const bool branch_taken_0x134dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DFCu;
        // 0x134e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dfc) {
            ctx->pc = 0x134E20u;
            return;
        }
    }
    ctx->pc = 0x134E04u;
    // 0x134e04: 0x0  nop
    ctx->pc = 0x134e04u;
    // NOP
    ctx->pc = 0x134e08u;
}
