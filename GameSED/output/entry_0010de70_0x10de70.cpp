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

// Function: entry_0010de70
// Address: 0x10de70 - 0x10de90
void entry_0010de70_0x10de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de70_0x10de70");
#endif

    switch (ctx->pc) {
        case 0x10de78u: goto label_10de78;
        default: break;
    }

    ctx->pc = 0x10de70u;

    // 0x10de70: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DE70u;
    SET_GPR_U32(ctx, 31, 0x10DE78u);
    ctx->pc = 0x10DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE70u;
    // 0x10de74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DE70u, 0x10DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE78u;
label_10de78:
    // 0x10de78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de7c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DE7Cu;
    {
        const bool branch_taken_0x10de7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE7Cu;
        // 0x10de80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de7c) {
            ctx->pc = 0x10DE90u;
            return;
        }
    }
    ctx->pc = 0x10DE84u;
    // 0x10de84: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x10de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x10de88: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10DE88u;
    {
        const bool branch_taken_0x10de88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE88u;
        // 0x10de8c: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de88) {
            ctx->pc = 0x10DF28u;
            return;
        }
    }
    ctx->pc = 0x10DE90u;
}
