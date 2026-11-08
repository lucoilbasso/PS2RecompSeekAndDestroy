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

// Function: _lf_version
// Address: 0x1b5c90 - 0x1b5d1c
void _lf_version_0x1b5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lf_version_0x1b5c90");
#endif

    switch (ctx->pc) {
        case 0x1b5cccu: goto label_1b5ccc;
        case 0x1b5ce4u: goto label_1b5ce4;
        case 0x1b5cf8u: goto label_1b5cf8;
        default: break;
    }

    ctx->pc = 0x1b5c90u;

    // 0x1b5c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b5c94: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b5c98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b5c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1b5c9c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b5ca0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b5ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b5ca4: 0x2453a964  addiu       $s3, $v0, -0x569C
    ctx->pc = 0x1b5ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945124));
    // 0x1b5ca8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b5ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b5cac: 0x2471b628  addiu       $s1, $v1, -0x49D8
    ctx->pc = 0x1b5cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948392));
    // 0x1b5cb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b5cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b5cb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b5cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b5cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cc4: 0xc073fe4  jal         func_1CFF90
    ctx->pc = 0x1B5CC4u;
    SET_GPR_U32(ctx, 31, 0x1B5CCCu);
    ctx->pc = 0x1B5CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CC4u;
    // 0x1b5cc8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF90u, 0x1B5CC4u, 0x1B5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CCCu;
label_1b5ccc:
    // 0x1b5ccc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5CCCu;
    {
        const bool branch_taken_0x1b5ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CCCu;
        // 0x1b5cd0: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ccc) {
            ctx->pc = 0x1B5CFCu;
            goto label_1b5cfc;
        }
    }
    ctx->pc = 0x1B5CD4u;
    // 0x1b5cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cd8: 0x8e05aa24  lw          $a1, -0x55DC($s0)
    ctx->pc = 0x1b5cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945316)));
    // 0x1b5cdc: 0xc073fe4  jal         func_1CFF90
    ctx->pc = 0x1B5CDCu;
    SET_GPR_U32(ctx, 31, 0x1B5CE4u);
    ctx->pc = 0x1B5CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CDCu;
    // 0x1b5ce0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF90u, 0x1B5CDCu, 0x1B5CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CE4u;
label_1b5ce4:
    // 0x1b5ce4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5CE4u;
    {
        const bool branch_taken_0x1b5ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CE4u;
        // 0x1b5ce8: 0x8e05aa24  lw          $a1, -0x55DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ce4) {
            ctx->pc = 0x1B5CFCu;
            goto label_1b5cfc;
        }
    }
    ctx->pc = 0x1B5CECu;
    // 0x1b5cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b5cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cf0: 0xc073fe4  jal         func_1CFF90
    ctx->pc = 0x1B5CF0u;
    SET_GPR_U32(ctx, 31, 0x1B5CF8u);
    ctx->pc = 0x1B5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CF0u;
    // 0x1b5cf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF90u, 0x1B5CF0u, 0x1B5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CF8u;
label_1b5cf8:
    // 0x1b5cf8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1b5cf8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b5cfc:
    // 0x1b5cfc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b5cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b5d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5d04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b5d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5d08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b5d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5d0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b5d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D14u;
        // 0x1b5d18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5D1Cu;
}
