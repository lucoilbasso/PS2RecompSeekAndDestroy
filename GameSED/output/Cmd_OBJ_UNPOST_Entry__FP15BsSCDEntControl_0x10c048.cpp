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

// Function: Cmd_OBJ_UNPOST_Entry__FP15BsSCDEntControl
// Address: 0x10c048 - 0x10c094
void Cmd_OBJ_UNPOST_Entry__FP15BsSCDEntControl_0x10c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_UNPOST_Entry__FP15BsSCDEntControl_0x10c048");
#endif

    switch (ctx->pc) {
        case 0x10c06cu: goto label_10c06c;
        case 0x10c084u: goto label_10c084;
        default: break;
    }

    ctx->pc = 0x10c048u;

    // 0x10c048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c04c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10c04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10c05c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x10c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x10c060: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10c060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10c064: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C064u;
    SET_GPR_U32(ctx, 31, 0x10C06Cu);
    ctx->pc = 0x10C068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C064u;
    // 0x10c068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C064u, 0x10C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C06Cu;
label_10c06c:
    // 0x10c06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c070: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x10c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x10c074: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C074u;
    {
        const bool branch_taken_0x10c074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C074u;
        // 0x10c078: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c074) {
            ctx->pc = 0x10C084u;
            goto label_10c084;
        }
    }
    ctx->pc = 0x10C07Cu;
    // 0x10c07c: 0xc041160  jal         func_104580
    ctx->pc = 0x10C07Cu;
    SET_GPR_U32(ctx, 31, 0x10C084u);
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x10C07Cu, 0x10C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C084u;
label_10c084:
    // 0x10c084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c088: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10c088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c08c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C08Cu;
        // 0x10c090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C094u;
}
