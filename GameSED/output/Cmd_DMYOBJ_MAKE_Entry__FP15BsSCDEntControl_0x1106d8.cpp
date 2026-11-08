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

// Function: Cmd_DMYOBJ_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x1106d8 - 0x110720
void Cmd_DMYOBJ_MAKE_Entry__FP15BsSCDEntControl_0x1106d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DMYOBJ_MAKE_Entry__FP15BsSCDEntControl_0x1106d8");
#endif

    switch (ctx->pc) {
        case 0x1106f4u: goto label_1106f4;
        case 0x1106fcu: goto label_1106fc;
        case 0x11070cu: goto label_11070c;
        default: break;
    }

    ctx->pc = 0x1106d8u;

    // 0x1106d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1106d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1106dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1106dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1106e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1106e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1106e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1106e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1106e8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1106e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1106ec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1106ECu;
    SET_GPR_U32(ctx, 31, 0x1106F4u);
    ctx->pc = 0x1106F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106ECu;
    // 0x1106f0: 0x8c510044  lw          $s1, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1106ECu, 0x1106F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106F4u;
label_1106f4:
    // 0x1106f4: 0xc065448  jal         func_195120
    ctx->pc = 0x1106F4u;
    SET_GPR_U32(ctx, 31, 0x1106FCu);
    ctx->pc = 0x1106F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106F4u;
    // 0x1106f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195120u, 0x1106F4u, 0x1106FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106FCu;
label_1106fc:
    // 0x1106fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1106fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110704: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x110704u;
    SET_GPR_U32(ctx, 31, 0x11070Cu);
    ctx->pc = 0x110708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110704u;
    // 0x110708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x110704u, 0x11070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11070Cu;
label_11070c:
    // 0x11070c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11070cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110718: 0x3e00008  jr          $ra
    ctx->pc = 0x110718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110718u;
        // 0x11071c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110720u;
}
