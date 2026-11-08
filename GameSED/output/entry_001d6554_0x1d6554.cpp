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

// Function: entry_001d6554
// Address: 0x1d6554 - 0x1d657c
void entry_001d6554_0x1d6554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6554_0x1d6554");
#endif

    switch (ctx->pc) {
        case 0x1d6560u: goto label_1d6560;
        default: break;
    }

    ctx->pc = 0x1d6554u;

    // 0x1d6554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6558: 0xc06be8a  jal         func_1AFA28
    ctx->pc = 0x1D6558u;
    SET_GPR_U32(ctx, 31, 0x1D6560u);
    ctx->pc = 0x1D655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6558u;
    // 0x1d655c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA28u, 0x1D6558u, 0x1D6560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6560u;
label_1d6560:
    // 0x1d6560: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d6560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6564: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d6564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6568: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6568u;
    {
        const bool branch_taken_0x1d6568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6568u;
        // 0x1d656c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6568) {
            ctx->pc = 0x1D657Cu;
            return;
        }
    }
    ctx->pc = 0x1D6570u;
    // 0x1d6570: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d6570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6574: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D6574u;
    {
        const bool branch_taken_0x1d6574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6574) {
            ctx->pc = 0x1D6578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6574u;
            // 0x1d6578: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D657Cu;
            return;
        }
    }
    ctx->pc = 0x1D657Cu;
}
