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

// Function: entry_001369c0
// Address: 0x1369c0 - 0x1369e4
void entry_001369c0_0x1369c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001369c0_0x1369c0");
#endif

    switch (ctx->pc) {
        case 0x1369dcu: goto label_1369dc;
        default: break;
    }

    ctx->pc = 0x1369c0u;

    // 0x1369c0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1369c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1369c4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1369C4u;
    {
        const bool branch_taken_0x1369c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1369c4) {
            ctx->pc = 0x1369C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1369C4u;
            // 0x1369c8: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1369E4u;
            return;
        }
    }
    ctx->pc = 0x1369CCu;
    // 0x1369cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1369ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1369d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369d4: 0xc04110c  jal         func_104430
    ctx->pc = 0x1369D4u;
    SET_GPR_U32(ctx, 31, 0x1369DCu);
    ctx->pc = 0x1369D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369D4u;
    // 0x1369d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1369D4u, 0x1369DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369DCu;
label_1369dc:
    // 0x1369dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1369dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369e0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1369e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x1369e4u;
}
