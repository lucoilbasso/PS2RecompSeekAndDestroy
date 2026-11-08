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

// Function: entry_00122380
// Address: 0x122380 - 0x1223c0
void entry_00122380_0x122380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122380_0x122380");
#endif

    switch (ctx->pc) {
        case 0x1223b8u: goto label_1223b8;
        default: break;
    }

    ctx->pc = 0x122380u;

label_122380:
    // 0x122380: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122384: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x122384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x122388: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x122388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12238c: 0x0  nop
    ctx->pc = 0x12238cu;
    // NOP
    // 0x122390: 0x0  nop
    ctx->pc = 0x122390u;
    // NOP
    // 0x122394: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122394u;
    {
        const bool branch_taken_0x122394 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x122398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122394u;
        // 0x122398: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122394) {
            ctx->pc = 0x122380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122380;
        }
    }
    ctx->pc = 0x12239Cu;
    // 0x12239c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12239Cu;
    {
        const bool branch_taken_0x12239c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1223A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12239Cu;
        // 0x1223a0: 0xac800150  sw          $zero, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12239c) {
            ctx->pc = 0x1223C0u;
            return;
        }
    }
    ctx->pc = 0x1223A4u;
    // 0x1223a4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1223a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1223a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1223a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223ac: 0x24a55be8  addiu       $a1, $a1, 0x5BE8
    ctx->pc = 0x1223acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23528));
    // 0x1223b0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1223B0u;
    SET_GPR_U32(ctx, 31, 0x1223B8u);
    ctx->pc = 0x1223B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223B0u;
    // 0x1223b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1223B0u, 0x1223B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223B8u;
label_1223b8:
    // 0x1223b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1223B8u;
    {
        const bool branch_taken_0x1223b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223B8u;
        // 0x1223bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223b8) {
            ctx->pc = 0x122404u;
            return;
        }
    }
    ctx->pc = 0x1223C0u;
}
