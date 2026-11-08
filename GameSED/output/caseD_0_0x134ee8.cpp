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

// Function: caseD_0
// Address: 0x134ee8 - 0x134f08
void caseD_0_0x134ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x134ee8");
#endif

    switch (ctx->pc) {
        case 0x134ee8u: goto label_134ee8;
        case 0x134eecu: goto label_134eec;
        case 0x134ef0u: goto label_134ef0;
        case 0x134ef4u: goto label_134ef4;
        case 0x134ef8u: goto label_134ef8;
        case 0x134efcu: goto label_134efc;
        case 0x134f00u: goto label_134f00;
        case 0x134f04u: goto label_134f04;
        default: break;
    }

    ctx->pc = 0x134ee8u;

label_134ee8:
    // 0x134ee8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x134ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_134eec:
    // 0x134eec: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x134eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_134ef0:
    // 0x134ef0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x134ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_134ef4:
    // 0x134ef4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x134ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_134ef8:
    // 0x134ef8: 0x60f809  jalr        $v1
label_134efc:
    if (ctx->pc == 0x134EFCu) {
        ctx->pc = 0x134EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EF8u;
        // 0x134efc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F00u;
        goto label_134f00;
    }
    ctx->pc = 0x134EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x134F00u);
        ctx->pc = 0x134EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EF8u;
        // 0x134efc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134EF8u, 0x134F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134F00u;
label_134f00:
    // 0x134f00: 0x100000bf  b           . + 4 + (0xBF << 2)
label_134f04:
    if (ctx->pc == 0x134F04u) {
        ctx->pc = 0x134F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F00u;
        // 0x134f04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F08u;
        goto label_fallthrough_0x134f00;
    }
    ctx->pc = 0x134F00u;
    {
        const bool branch_taken_0x134f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F00u;
        // 0x134f04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f00) {
            ctx->pc = 0x135200u;
            return;
        }
    }
label_fallthrough_0x134f00:
    ctx->pc = 0x134F08u;
}
