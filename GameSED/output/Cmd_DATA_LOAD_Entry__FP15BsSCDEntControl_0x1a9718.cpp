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

// Function: Cmd_DATA_LOAD_Entry__FP15BsSCDEntControl
// Address: 0x1a9718 - 0x1a9774
void Cmd_DATA_LOAD_Entry__FP15BsSCDEntControl_0x1a9718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DATA_LOAD_Entry__FP15BsSCDEntControl_0x1a9718");
#endif

    switch (ctx->pc) {
        case 0x1a973cu: goto label_1a973c;
        case 0x1a974cu: goto label_1a974c;
        default: break;
    }

    ctx->pc = 0x1a9718u;

    // 0x1a9718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a971c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a971cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9720: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9728: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a972c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a9730: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1a9730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a9734: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A9734u;
    SET_GPR_U32(ctx, 31, 0x1A973Cu);
    ctx->pc = 0x1A9738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9734u;
    // 0x1a9738: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A9734u, 0x1A973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A973Cu;
label_1a973c:
    // 0x1a973c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x1a973cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a9740: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a9740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9744: 0xc069e74  jal         func_1A79D0
    ctx->pc = 0x1A9744u;
    SET_GPR_U32(ctx, 31, 0x1A974Cu);
    ctx->pc = 0x1A9748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9744u;
    // 0x1a9748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A79D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A79D0u, 0x1A9744u, 0x1A974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A974Cu;
label_1a974c:
    // 0x1a974c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a9750: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x1a9750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1a9754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9758: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a9758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a975c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a975cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9760: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a9760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a9764: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a9764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a976c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A976Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A976Cu;
        // 0x1a9770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A976Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9774u;
}
