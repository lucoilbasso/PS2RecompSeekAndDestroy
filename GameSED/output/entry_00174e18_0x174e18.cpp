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

// Function: entry_00174e18
// Address: 0x174e18 - 0x174e40
void entry_00174e18_0x174e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174e18_0x174e18");
#endif

    switch (ctx->pc) {
        case 0x174e38u: goto label_174e38;
        default: break;
    }

    ctx->pc = 0x174e18u;

    // 0x174e18: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x174e1c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x174e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x174e20: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x174e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x174e24: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x174e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x174e28: 0xa3a00140  sb          $zero, 0x140($sp)
    ctx->pc = 0x174e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x174e2c: 0xa3a00141  sb          $zero, 0x141($sp)
    ctx->pc = 0x174e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 321), (uint8_t)GPR_U32(ctx, 0));
    // 0x174e30: 0xc06ed4a  jal         func_1BB528
    ctx->pc = 0x174E30u;
    SET_GPR_U32(ctx, 31, 0x174E38u);
    ctx->pc = 0x174E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E30u;
    // 0x174e34: 0xa3a00142  sb          $zero, 0x142($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 322), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB528u, 0x174E30u, 0x174E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E38u;
label_174e38:
    // 0x174e38: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x174E38u;
    {
        const bool branch_taken_0x174e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E38u;
        // 0x174e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e38) {
            ctx->pc = 0x174EDCu;
            return;
        }
    }
    ctx->pc = 0x174E40u;
}
