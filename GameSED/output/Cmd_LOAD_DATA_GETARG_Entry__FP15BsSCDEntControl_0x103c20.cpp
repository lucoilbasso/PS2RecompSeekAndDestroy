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

// Function: Cmd_LOAD_DATA_GETARG_Entry__FP15BsSCDEntControl
// Address: 0x103c20 - 0x103c98
void Cmd_LOAD_DATA_GETARG_Entry__FP15BsSCDEntControl_0x103c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_DATA_GETARG_Entry__FP15BsSCDEntControl_0x103c20");
#endif

    switch (ctx->pc) {
        case 0x103c48u: goto label_103c48;
        case 0x103c54u: goto label_103c54;
        case 0x103c60u: goto label_103c60;
        default: break;
    }

    ctx->pc = 0x103c20u;

    // 0x103c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x103c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103c38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x103c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x103c3c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x103c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x103c40: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103C40u;
    SET_GPR_U32(ctx, 31, 0x103C48u);
    ctx->pc = 0x103C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C40u;
    // 0x103c44: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103C40u, 0x103C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C48u;
label_103c48:
    // 0x103c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c4c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103C4Cu;
    SET_GPR_U32(ctx, 31, 0x103C54u);
    ctx->pc = 0x103C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C4Cu;
    // 0x103c50: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103C4Cu, 0x103C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C54u;
label_103c54:
    // 0x103c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c58: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x103C58u;
    SET_GPR_U32(ctx, 31, 0x103C60u);
    ctx->pc = 0x103C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C58u;
    // 0x103c5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x103C58u, 0x103C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C60u;
label_103c60:
    // 0x103c60: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x103c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x103c64: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x103c64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x103c68: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x103c68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x103c6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103c70: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x103c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x103c74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x103c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x103c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c80: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x103c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x103c84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103c84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103c88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x103c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103c8c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x103c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x103c90: 0x3e00008  jr          $ra
    ctx->pc = 0x103C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C90u;
        // 0x103c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103C98u;
}
