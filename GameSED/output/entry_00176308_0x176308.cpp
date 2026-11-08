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

// Function: entry_00176308
// Address: 0x176308 - 0x176338
void entry_00176308_0x176308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176308_0x176308");
#endif

    switch (ctx->pc) {
        case 0x176314u: goto label_176314;
        case 0x176334u: goto label_176334;
        default: break;
    }

    ctx->pc = 0x176308u;

    // 0x176308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17630c: 0xc06bd38  jal         func_1AF4E0
    ctx->pc = 0x17630Cu;
    SET_GPR_U32(ctx, 31, 0x176314u);
    ctx->pc = 0x176310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17630Cu;
    // 0x176310: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4E0u, 0x17630Cu, 0x176314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176314u;
label_176314:
    // 0x176314: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x176314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176318: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x176318u;
    {
        const bool branch_taken_0x176318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176318u;
        // 0x17631c: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176318) {
            ctx->pc = 0x176338u;
            return;
        }
    }
    ctx->pc = 0x176320u;
    // 0x176320: 0x8f828c70  lw          $v0, -0x7390($gp)
    ctx->pc = 0x176320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937712)));
    // 0x176324: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176324u;
    {
        const bool branch_taken_0x176324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176324) {
            ctx->pc = 0x176338u;
            return;
        }
    }
    ctx->pc = 0x17632Cu;
    // 0x17632c: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17632Cu;
    SET_GPR_U32(ctx, 31, 0x176334u);
    ctx->pc = 0x176330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17632Cu;
    // 0x176330: 0x8f848c64  lw          $a0, -0x739C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17632Cu, 0x176334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176334u;
label_176334:
    // 0x176334: 0x8f848c6c  lw          $a0, -0x7394($gp)
    ctx->pc = 0x176334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->pc = 0x176338u;
}
