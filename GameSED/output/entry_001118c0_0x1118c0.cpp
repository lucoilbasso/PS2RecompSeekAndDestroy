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

// Function: entry_001118c0
// Address: 0x1118c0 - 0x1118e8
void entry_001118c0_0x1118c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001118c0_0x1118c0");
#endif

    switch (ctx->pc) {
        case 0x1118e0u: goto label_1118e0;
        default: break;
    }

    ctx->pc = 0x1118c0u;

    // 0x1118c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1118c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1118c4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1118C4u;
    {
        const bool branch_taken_0x1118c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1118C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118C4u;
        // 0x1118c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118c4) {
            ctx->pc = 0x1118E8u;
            return;
        }
    }
    ctx->pc = 0x1118CCu;
    // 0x1118cc: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1118ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1118d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1118d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1118d4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1118d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1118d8: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x1118D8u;
    SET_GPR_U32(ctx, 31, 0x1118E0u);
    ctx->pc = 0x1118DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118D8u;
    // 0x1118dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x1118D8u, 0x1118E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1118E0u;
label_1118e0:
    // 0x1118e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1118E0u;
    {
        const bool branch_taken_0x1118e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118E0u;
        // 0x1118e4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118e0) {
            ctx->pc = 0x111914u;
            return;
        }
    }
    ctx->pc = 0x1118E8u;
}
