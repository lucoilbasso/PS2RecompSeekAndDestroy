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

// Function: entry_00118fe8
// Address: 0x118fe8 - 0x119004
void entry_00118fe8_0x118fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118fe8_0x118fe8");
#endif

    ctx->pc = 0x118fe8u;

    // 0x118fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118fec: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118FECu;
    {
        const bool branch_taken_0x118fec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x118FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FECu;
        // 0x118ff0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fec) {
            ctx->pc = 0x119004u;
            return;
        }
    }
    ctx->pc = 0x118FF4u;
    // 0x118ff4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x118ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x118ff8: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x118ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x118ffc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x118FFCu;
    SET_GPR_U32(ctx, 31, 0x119004u);
    ctx->pc = 0x119000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FFCu;
    // 0x119000: 0x24a54390  addiu       $a1, $a1, 0x4390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x118FFCu, 0x119004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119004u;
}
