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

// Function: Cmd_SE_PITCH_Entry__FP15BsSCDEntControl
// Address: 0x11dad8 - 0x11db24
void Cmd_SE_PITCH_Entry__FP15BsSCDEntControl_0x11dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_PITCH_Entry__FP15BsSCDEntControl_0x11dad8");
#endif

    switch (ctx->pc) {
        case 0x11daf0u: goto label_11daf0;
        case 0x11dafcu: goto label_11dafc;
        case 0x11db10u: goto label_11db10;
        default: break;
    }

    ctx->pc = 0x11dad8u;

    // 0x11dad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11dad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11dadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11dadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11dae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11dae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11dae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11dae8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DAE8u;
    SET_GPR_U32(ctx, 31, 0x11DAF0u);
    ctx->pc = 0x11DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAE8u;
    // 0x11daec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DAE8u, 0x11DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAF0u;
label_11daf0:
    // 0x11daf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11daf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11daf4: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DAF4u;
    SET_GPR_U32(ctx, 31, 0x11DAFCu);
    ctx->pc = 0x11DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAF4u;
    // 0x11daf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DAF4u, 0x11DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAFCu;
label_11dafc:
    // 0x11dafc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11db00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11db00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11db04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db08: 0xc0477ca  jal         func_11DF28
    ctx->pc = 0x11DB08u;
    SET_GPR_U32(ctx, 31, 0x11DB10u);
    ctx->pc = 0x11DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB08u;
    // 0x11db0c: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF28u, 0x11DB08u, 0x11DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB10u;
label_11db10:
    // 0x11db10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11db10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11db14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11db14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11db18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11db18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11db1c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB1Cu;
        // 0x11db20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DB24u;
}
