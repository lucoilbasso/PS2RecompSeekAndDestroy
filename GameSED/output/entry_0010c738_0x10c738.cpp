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

// Function: entry_0010c738
// Address: 0x10c738 - 0x10c76c
void entry_0010c738_0x10c738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c738_0x10c738");
#endif

    switch (ctx->pc) {
        case 0x10c748u: goto label_10c748;
        case 0x10c768u: goto label_10c768;
        default: break;
    }

    ctx->pc = 0x10c738u;

    // 0x10c738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c73c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c740: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C740u;
    SET_GPR_U32(ctx, 31, 0x10C748u);
    ctx->pc = 0x10C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C740u;
    // 0x10c744: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C740u, 0x10C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C748u;
label_10c748:
    // 0x10c748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c74c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10c74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c750: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10c754: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x10c754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10c758: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C758u;
    {
        const bool branch_taken_0x10c758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C758u;
        // 0x10c75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c758) {
            ctx->pc = 0x10C76Cu;
            return;
        }
    }
    ctx->pc = 0x10C760u;
    // 0x10c760: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C760u;
    SET_GPR_U32(ctx, 31, 0x10C768u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C760u, 0x10C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C768u;
label_10c768:
    // 0x10c768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10c76cu;
}
