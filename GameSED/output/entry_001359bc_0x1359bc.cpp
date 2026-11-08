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

// Function: entry_001359bc
// Address: 0x1359bc - 0x1359dc
void entry_001359bc_0x1359bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001359bc_0x1359bc");
#endif

    switch (ctx->pc) {
        case 0x1359c8u: goto label_1359c8;
        default: break;
    }

    ctx->pc = 0x1359bcu;

    // 0x1359bc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1359bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359c0: 0xc04fe64  jal         func_13F990
    ctx->pc = 0x1359C0u;
    SET_GPR_U32(ctx, 31, 0x1359C8u);
    ctx->pc = 0x1359C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359C0u;
    // 0x1359c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F990u, 0x1359C0u, 0x1359C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359C8u;
label_1359c8:
    // 0x1359c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1359c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1359cc: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1359CCu;
    {
        const bool branch_taken_0x1359cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x1359cc) {
            ctx->pc = 0x1359DCu;
            return;
        }
    }
    ctx->pc = 0x1359D4u;
    // 0x1359d4: 0xc04ff38  jal         func_13FCE0
    ctx->pc = 0x1359D4u;
    SET_GPR_U32(ctx, 31, 0x1359DCu);
    ctx->pc = 0x1359D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359D4u;
    // 0x1359d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FCE0u, 0x1359D4u, 0x1359DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359DCu;
}
