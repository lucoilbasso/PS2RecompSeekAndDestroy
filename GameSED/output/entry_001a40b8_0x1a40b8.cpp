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

// Function: entry_001a40b8
// Address: 0x1a40b8 - 0x1a40f8
void entry_001a40b8_0x1a40b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a40b8_0x1a40b8");
#endif

    switch (ctx->pc) {
        case 0x1a40c4u: goto label_1a40c4;
        default: break;
    }

    ctx->pc = 0x1a40b8u;

    // 0x1a40b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a40b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a40bc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A40BCu;
    SET_GPR_U32(ctx, 31, 0x1A40C4u);
    ctx->pc = 0x1A40C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40BCu;
    // 0x1a40c0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A40BCu, 0x1A40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40C4u;
label_1a40c4:
    // 0x1a40c4: 0x8f919180  lw          $s1, -0x6E80($gp)
    ctx->pc = 0x1a40c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939008)));
    // 0x1a40c8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a40c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a40cc: 0x24a592f0  addiu       $a1, $a1, -0x6D10
    ctx->pc = 0x1a40ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939376));
    // 0x1a40d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a40d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a40d4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A40D4u;
    {
        const bool branch_taken_0x1a40d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40D4u;
        // 0x1a40d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40d4) {
            ctx->pc = 0x1A40F8u;
            return;
        }
    }
    ctx->pc = 0x1A40DCu;
    // 0x1a40dc: 0x8f829188  lw          $v0, -0x6E78($gp)
    ctx->pc = 0x1a40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939016)));
    // 0x1a40e0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a40e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a40e8: 0xaf839180  sw          $v1, -0x6E80($gp)
    ctx->pc = 0x1a40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939008), GPR_U32(ctx, 3));
    // 0x1a40ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A40ECu;
    {
        const bool branch_taken_0x1a40ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40ECu;
        // 0x1a40f0: 0xaf829188  sw          $v0, -0x6E78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40ec) {
            ctx->pc = 0x1A4100u;
            return;
        }
    }
    ctx->pc = 0x1A40F4u;
    // 0x1a40f4: 0x0  nop
    ctx->pc = 0x1a40f4u;
    // NOP
    ctx->pc = 0x1a40f8u;
}
