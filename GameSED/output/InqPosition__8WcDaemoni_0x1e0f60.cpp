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

// Function: InqPosition__8WcDaemoni
// Address: 0x1e0f60 - 0x1e0fc0
void InqPosition__8WcDaemoni_0x1e0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqPosition__8WcDaemoni_0x1e0f60");
#endif

    switch (ctx->pc) {
        case 0x1e0f98u: goto label_1e0f98;
        default: break;
    }

    ctx->pc = 0x1e0f60u;

    // 0x1e0f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0f68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e0f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0f70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e0f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0f78: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1e0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e0f7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e0f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e0f80: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0F80u;
    {
        const bool branch_taken_0x1e0f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f80) {
            ctx->pc = 0x1E0F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0F80u;
            // 0x1e0f84: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0F9Cu;
            goto label_1e0f9c;
        }
    }
    ctx->pc = 0x1E0F88u;
    // 0x1e0f88: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e0f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e0f8c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1e0f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e0f90: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1E0F90u;
    SET_GPR_U32(ctx, 31, 0x1E0F98u);
    ctx->pc = 0x1E0F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0F90u;
    // 0x1e0f94: 0x24a584c8  addiu       $a1, $a1, -0x7B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1E0F90u, 0x1E0F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F98u;
label_1e0f98:
    // 0x1e0f98: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1e0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1e0f9c:
    // 0x1e0f9c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e0fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0fa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0fac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0fb4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x1e0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1e0fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FB8u;
        // 0x1e0fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0FC0u;
}
