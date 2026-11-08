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

// Function: ApRsc3DSetup3DCom__FP8ApcRsc3D
// Address: 0x145a20 - 0x145a7c
void ApRsc3DSetup3DCom__FP8ApcRsc3D_0x145a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DSetup3DCom__FP8ApcRsc3D_0x145a20");
#endif

    switch (ctx->pc) {
        case 0x145a40u: goto label_145a40;
        case 0x145a5cu: goto label_145a5c;
        default: break;
    }

    ctx->pc = 0x145a20u;

    // 0x145a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145a2c: 0x24900024  addiu       $s0, $a0, 0x24
    ctx->pc = 0x145a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x145a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145a34: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x145a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x145a38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x145a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145a3c: 0x0  nop
    ctx->pc = 0x145a3cu;
    // NOP
label_145a40:
    // 0x145a40: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x145a44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145A44u;
    {
        const bool branch_taken_0x145a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A44u;
        // 0x145a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a44) {
            ctx->pc = 0x145A5Cu;
            goto label_145a5c;
        }
    }
    ctx->pc = 0x145A4Cu;
    // 0x145a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a54: 0xc05f820  jal         func_17E080
    ctx->pc = 0x145A54u;
    SET_GPR_U32(ctx, 31, 0x145A5Cu);
    ctx->pc = 0x145A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A54u;
    // 0x145a58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E080u, 0x145A54u, 0x145A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A5Cu;
label_145a5c:
    // 0x145a5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x145a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x145a60: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x145A60u;
    {
        const bool branch_taken_0x145a60 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x145a60) {
            ctx->pc = 0x145A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145A60u;
            // 0x145a64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145a40;
        }
    }
    ctx->pc = 0x145A68u;
    // 0x145a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145a74: 0x3e00008  jr          $ra
    ctx->pc = 0x145A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A74u;
        // 0x145a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145A7Cu;
}
