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

// Function: entry_0014c2bc
// Address: 0x14c2bc - 0x14c2e4
void entry_0014c2bc_0x14c2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c2bc_0x14c2bc");
#endif

    ctx->pc = 0x14c2bcu;

    // 0x14c2bc: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x14C2BCu;
    {
        const bool branch_taken_0x14c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c2bc) {
            ctx->pc = 0x14C2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C2BCu;
            // 0x14c2c0: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C388u;
            return;
        }
    }
    ctx->pc = 0x14C2C4u;
    // 0x14c2c4: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14c2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14c2c8: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C2C8u;
    {
        const bool branch_taken_0x14c2c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x14C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2C8u;
        // 0x14c2cc: 0x8e110170  lw          $s1, 0x170($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2c8) {
            ctx->pc = 0x14C2E4u;
            return;
        }
    }
    ctx->pc = 0x14C2D0u;
    // 0x14c2d0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14c2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2d8: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8
    ctx->pc = 0x14c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    // 0x14c2dc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14C2DCu;
    SET_GPR_U32(ctx, 31, 0x14C2E4u);
    ctx->pc = 0x14C2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2DCu;
    // 0x14c2e0: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14C2DCu, 0x14C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2E4u;
}
