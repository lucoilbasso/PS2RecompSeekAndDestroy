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

// Function: Cmd_EXPLO_TYPE_Entry__FP15BsSCDEntControl
// Address: 0x10c908 - 0x10c95c
void Cmd_EXPLO_TYPE_Entry__FP15BsSCDEntControl_0x10c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXPLO_TYPE_Entry__FP15BsSCDEntControl_0x10c908");
#endif

    switch (ctx->pc) {
        case 0x10c930u: goto label_10c930;
        case 0x10c93cu: goto label_10c93c;
        case 0x10c948u: goto label_10c948;
        default: break;
    }

    ctx->pc = 0x10c908u;

    // 0x10c908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c90c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c91c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c924: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c928: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C928u;
    SET_GPR_U32(ctx, 31, 0x10C930u);
    ctx->pc = 0x10C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C928u;
    // 0x10c92c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C928u, 0x10C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C930u;
label_10c930:
    // 0x10c930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c934: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C934u;
    SET_GPR_U32(ctx, 31, 0x10C93Cu);
    ctx->pc = 0x10C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C934u;
    // 0x10c938: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C934u, 0x10C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C93Cu;
label_10c93c:
    // 0x10c93c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c940: 0xc0644f2  jal         func_1913C8
    ctx->pc = 0x10C940u;
    SET_GPR_U32(ctx, 31, 0x10C948u);
    ctx->pc = 0x10C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C940u;
    // 0x10c944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1913C8u, 0x10C940u, 0x10C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C948u;
label_10c948:
    // 0x10c948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c94c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c954: 0x3e00008  jr          $ra
    ctx->pc = 0x10C954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C954u;
        // 0x10c958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C95Cu;
}
