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

// Function: WCdManFileSeekCD__FP16W_CDMAN_CD_CACHEP15CD_READ_COMMAND
// Address: 0x178878 - 0x1788fc
void WCdManFileSeekCD__FP16W_CDMAN_CD_CACHEP15CD_READ_COMMAND_0x178878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManFileSeekCD__FP16W_CDMAN_CD_CACHEP15CD_READ_COMMAND_0x178878");
#endif

    switch (ctx->pc) {
        case 0x1788a8u: goto label_1788a8;
        case 0x1788b0u: goto label_1788b0;
        case 0x1788b8u: goto label_1788b8;
        case 0x1788c0u: goto label_1788c0;
        case 0x1788c8u: goto label_1788c8;
        case 0x1788d8u: goto label_1788d8;
        case 0x1788e0u: goto label_1788e0;
        default: break;
    }

    ctx->pc = 0x178878u;

    // 0x178878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17887c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17888c: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x17888cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178890: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x178890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x178894: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178898: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x178898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x17889c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1788a0: 0xae021040  sw          $v0, 0x1040($s0)
    ctx->pc = 0x1788a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 2));
    // 0x1788a4: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x1788a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1788a8:
    // 0x1788a8: 0xc06eb50  jal         func_1BAD40
    ctx->pc = 0x1788A8u;
    SET_GPR_U32(ctx, 31, 0x1788B0u);
    ctx->pc = 0x1788ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788A8u;
    // 0x1788ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD40u, 0x1788A8u, 0x1788B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788B0u;
label_1788b0:
    // 0x1788b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1788B0u;
    {
        const bool branch_taken_0x1788b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1788b0) {
            ctx->pc = 0x1788C0u;
            goto label_1788c0;
        }
    }
    ctx->pc = 0x1788B8u;
label_1788b8:
    // 0x1788b8: 0xc05e2e6  jal         func_178B98
    ctx->pc = 0x1788B8u;
    SET_GPR_U32(ctx, 31, 0x1788C0u);
    ctx->pc = 0x178B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B98u, 0x1788B8u, 0x1788C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788C0u;
label_1788c0:
    // 0x1788c0: 0xc06ec78  jal         func_1BB1E0
    ctx->pc = 0x1788C0u;
    SET_GPR_U32(ctx, 31, 0x1788C8u);
    ctx->pc = 0x1788C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788C0u;
    // 0x1788c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1E0u, 0x1788C0u, 0x1788C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788C8u;
label_1788c8:
    // 0x1788c8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1788C8u;
    {
        const bool branch_taken_0x1788c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1788c8) {
            ctx->pc = 0x1788B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1788b8;
        }
    }
    ctx->pc = 0x1788D0u;
    // 0x1788d0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1788D0u;
    SET_GPR_U32(ctx, 31, 0x1788D8u);
    ctx->pc = 0x1788D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788D0u;
    // 0x1788d4: 0x8e041014  lw          $a0, 0x1014($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1788D0u, 0x1788D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788D8u;
label_1788d8:
    // 0x1788d8: 0xc05e276  jal         func_1789D8
    ctx->pc = 0x1788D8u;
    SET_GPR_U32(ctx, 31, 0x1788E0u);
    ctx->pc = 0x1789D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1789D8u, 0x1788D8u, 0x1788E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788E0u;
label_1788e0:
    // 0x1788e0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1788E0u;
    {
        const bool branch_taken_0x1788e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788E0u;
        // 0x1788e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788e0) {
            ctx->pc = 0x1788A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1788a8;
        }
    }
    ctx->pc = 0x1788E8u;
    // 0x1788e8: 0xae001040  sw          $zero, 0x1040($s0)
    ctx->pc = 0x1788e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 0));
    // 0x1788ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1788ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1788f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1788f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1788f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1788F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1788F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788F4u;
        // 0x1788f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1788F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1788FCu;
}
