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

// Function: Cmd_DATA_Entry__FP15BsSCDEntControl
// Address: 0x1a95e0 - 0x1a9610
void Cmd_DATA_Entry__FP15BsSCDEntControl_0x1a95e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DATA_Entry__FP15BsSCDEntControl_0x1a95e0");
#endif

    switch (ctx->pc) {
        case 0x1a95e0u: goto label_1a95e0;
        case 0x1a95e4u: goto label_1a95e4;
        case 0x1a95e8u: goto label_1a95e8;
        case 0x1a95ecu: goto label_1a95ec;
        case 0x1a95f0u: goto label_1a95f0;
        case 0x1a95f4u: goto label_1a95f4;
        case 0x1a95f8u: goto label_1a95f8;
        case 0x1a95fcu: goto label_1a95fc;
        case 0x1a9600u: goto label_1a9600;
        case 0x1a9604u: goto label_1a9604;
        case 0x1a9608u: goto label_1a9608;
        case 0x1a960cu: goto label_1a960c;
        default: break;
    }

    ctx->pc = 0x1a95e0u;

label_1a95e0:
    // 0x1a95e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a95e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a95e4:
    // 0x1a95e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a95e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a95e8:
    // 0x1a95e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a95e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a95ec:
    // 0x1a95ec: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1a95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a95f0:
    // 0x1a95f0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1a95f4:
    if (ctx->pc == 0x1A95F4u) {
        ctx->pc = 0x1A95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95F0u;
        // 0x1a95f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A95F8u;
        goto label_1a95f8;
    }
    ctx->pc = 0x1A95F0u;
    {
        const bool branch_taken_0x1a95f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a95f0) {
            ctx->pc = 0x1A95F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A95F0u;
            // 0x1a95f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9608u;
            goto label_1a9608;
        }
    }
    ctx->pc = 0x1A95F8u;
label_1a95f8:
    // 0x1a95f8: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x1a95f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a95fc:
    // 0x1a95fc: 0x60f809  jalr        $v1
label_1a9600:
    if (ctx->pc == 0x1A9600u) {
        ctx->pc = 0x1A9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95FCu;
        // 0x1a9600: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9604u;
        goto label_1a9604;
    }
    ctx->pc = 0x1A95FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9604u);
        ctx->pc = 0x1A9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95FCu;
        // 0x1a9600: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A95FCu, 0x1A9604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9604u;
label_1a9604:
    // 0x1a9604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9608:
    // 0x1a9608: 0x3e00008  jr          $ra
label_1a960c:
    if (ctx->pc == 0x1A960Cu) {
        ctx->pc = 0x1A960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9608u;
        // 0x1a960c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9610u;
        goto label_fallthrough_0x1a9608;
    }
    ctx->pc = 0x1A9608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9608u;
        // 0x1a960c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9608:
    ctx->pc = 0x1A9610u;
}
