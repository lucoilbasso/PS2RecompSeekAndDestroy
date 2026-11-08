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

// Function: entry_00127790
// Address: 0x127790 - 0x1277c0
void entry_00127790_0x127790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127790_0x127790");
#endif

    switch (ctx->pc) {
        case 0x127798u: goto label_127798;
        default: break;
    }

    ctx->pc = 0x127790u;

label_127790:
    // 0x127790: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x127790u;
    SET_GPR_U32(ctx, 31, 0x127798u);
    ctx->pc = 0x127794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127790u;
    // 0x127794: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x127790u, 0x127798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127798u;
label_127798:
    // 0x127798: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x127798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12779c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12779Cu;
    {
        const bool branch_taken_0x12779c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1277A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12779Cu;
        // 0x1277a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12779c) {
            ctx->pc = 0x127790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127790;
        }
    }
    ctx->pc = 0x1277A4u;
    // 0x1277a4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1277a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1277a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1277a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1277ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1277ACu;
    {
        const bool branch_taken_0x1277ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1277B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277ACu;
        // 0x1277b0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277ac) {
            ctx->pc = 0x1277C0u;
            return;
        }
    }
    ctx->pc = 0x1277B4u;
    // 0x1277b4: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x1277b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x1277b8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1277B8u;
    SET_GPR_U32(ctx, 31, 0x1277C0u);
    ctx->pc = 0x1277BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1277B8u;
    // 0x1277bc: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1277B8u, 0x1277C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277C0u;
}
