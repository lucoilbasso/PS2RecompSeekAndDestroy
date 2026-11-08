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

// Function: InqCtrlObj__8WcDaemoni
// Address: 0x1e0e48 - 0x1e0ea4
void InqCtrlObj__8WcDaemoni_0x1e0e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqCtrlObj__8WcDaemoni_0x1e0e48");
#endif

    switch (ctx->pc) {
        case 0x1e0e80u: goto label_1e0e80;
        default: break;
    }

    ctx->pc = 0x1e0e48u;

    // 0x1e0e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0e58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e0e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0e60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e0e64: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e0e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e0e68: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0E68u;
    {
        const bool branch_taken_0x1e0e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e68) {
            ctx->pc = 0x1E0E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0E68u;
            // 0x1e0e6c: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0E84u;
            goto label_1e0e84;
        }
    }
    ctx->pc = 0x1E0E70u;
    // 0x1e0e70: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e0e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e0e74: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1e0e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e0e78: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1E0E78u;
    SET_GPR_U32(ctx, 31, 0x1E0E80u);
    ctx->pc = 0x1E0E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0E78u;
    // 0x1e0e7c: 0x24a584c8  addiu       $a1, $a1, -0x7B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1E0E78u, 0x1E0E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E80u;
label_1e0e80:
    // 0x1e0e80: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1e0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e0e84:
    // 0x1e0e84: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e0e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0e90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0e94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0e98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E9Cu;
        // 0x1e0ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0EA4u;
}
