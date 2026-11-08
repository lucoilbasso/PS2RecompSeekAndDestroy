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

// Function: entry_0013e8c0
// Address: 0x13e8c0 - 0x13e8e8
void entry_0013e8c0_0x13e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e8c0_0x13e8c0");
#endif

    ctx->pc = 0x13e8c0u;

    // 0x13e8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13e8cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13e8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e8d4: 0x8e020204  lw          $v0, 0x204($s0)
    ctx->pc = 0x13e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x13e8d8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E8D8u;
    {
        const bool branch_taken_0x13e8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8D8u;
        // 0x13e8dc: 0x26040204  addiu       $a0, $s0, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8d8) {
            ctx->pc = 0x13E8E8u;
            return;
        }
    }
    ctx->pc = 0x13E8E0u;
    // 0x13e8e0: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x13E8E0u;
    SET_GPR_U32(ctx, 31, 0x13E8E8u);
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x13E8E0u, 0x13E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8E8u;
}
