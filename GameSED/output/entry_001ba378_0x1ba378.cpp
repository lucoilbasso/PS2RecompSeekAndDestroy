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

// Function: entry_001ba378
// Address: 0x1ba378 - 0x1ba3b0
void entry_001ba378_0x1ba378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba378_0x1ba378");
#endif

    switch (ctx->pc) {
        case 0x1ba38cu: goto label_1ba38c;
        case 0x1ba3acu: goto label_1ba3ac;
        default: break;
    }

    ctx->pc = 0x1ba378u;

    // 0x1ba378: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ba378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ba37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba380: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x1ba380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x1ba384: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1BA384u;
    SET_GPR_U32(ctx, 31, 0x1BA38Cu);
    ctx->pc = 0x1BA388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA384u;
    // 0x1ba388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1BA384u, 0x1BA38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA38Cu;
label_1ba38c:
    // 0x1ba38c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA38Cu;
    {
        const bool branch_taken_0x1ba38c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ba38c) {
            ctx->pc = 0x1BA390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA38Cu;
            // 0x1ba390: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA3DCu;
            return;
        }
    }
    ctx->pc = 0x1BA394u;
    // 0x1ba394: 0x8e82c090  lw          $v0, -0x3F70($s4)
    ctx->pc = 0x1ba394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    // 0x1ba398: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA398u;
    {
        const bool branch_taken_0x1ba398 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA398u;
        // 0x1ba39c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba398) {
            ctx->pc = 0x1BA3B0u;
            return;
        }
    }
    ctx->pc = 0x1BA3A0u;
    // 0x1ba3a0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ba3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ba3a4: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA3A4u;
    SET_GPR_U32(ctx, 31, 0x1BA3ACu);
    ctx->pc = 0x1BA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA3A4u;
    // 0x1ba3a8: 0x2484af00  addiu       $a0, $a0, -0x5100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA3A4u, 0x1BA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA3ACu;
label_1ba3ac:
    // 0x1ba3ac: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ba3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x1ba3b0u;
}
