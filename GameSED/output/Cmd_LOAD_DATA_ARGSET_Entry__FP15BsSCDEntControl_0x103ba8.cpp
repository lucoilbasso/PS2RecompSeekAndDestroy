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

// Function: Cmd_LOAD_DATA_ARGSET_Entry__FP15BsSCDEntControl
// Address: 0x103ba8 - 0x103c1c
void Cmd_LOAD_DATA_ARGSET_Entry__FP15BsSCDEntControl_0x103ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_DATA_ARGSET_Entry__FP15BsSCDEntControl_0x103ba8");
#endif

    switch (ctx->pc) {
        case 0x103bd0u: goto label_103bd0;
        case 0x103bdcu: goto label_103bdc;
        case 0x103be8u: goto label_103be8;
        default: break;
    }

    ctx->pc = 0x103ba8u;

    // 0x103ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103bb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103bb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x103bbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103bc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x103bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x103bc4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x103bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x103bc8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103BC8u;
    SET_GPR_U32(ctx, 31, 0x103BD0u);
    ctx->pc = 0x103BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BC8u;
    // 0x103bcc: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103BC8u, 0x103BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BD0u;
label_103bd0:
    // 0x103bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bd4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103BD4u;
    SET_GPR_U32(ctx, 31, 0x103BDCu);
    ctx->pc = 0x103BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BD4u;
    // 0x103bd8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103BD4u, 0x103BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BDCu;
label_103bdc:
    // 0x103bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103be0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103BE0u;
    SET_GPR_U32(ctx, 31, 0x103BE8u);
    ctx->pc = 0x103BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BE0u;
    // 0x103be4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103BE0u, 0x103BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BE8u;
label_103be8:
    // 0x103be8: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x103be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x103bec: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x103becu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x103bf0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x103bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x103bf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103bf8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x103bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x103bfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c00: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x103c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x103c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103c0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x103c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103c10: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x103c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x103c14: 0x3e00008  jr          $ra
    ctx->pc = 0x103C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C14u;
        // 0x103c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103C1Cu;
}
