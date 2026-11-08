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

// Function: BSCDEntGetEntryPtr__FP15BsSCDEntControli
// Address: 0x1a8608 - 0x1a8664
void BSCDEntGetEntryPtr__FP15BsSCDEntControli_0x1a8608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGetEntryPtr__FP15BsSCDEntControli_0x1a8608");
#endif

    switch (ctx->pc) {
        case 0x1a8640u: goto label_1a8640;
        default: break;
    }

    ctx->pc = 0x1a8608u;

    // 0x1a8608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a860c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8610: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a8610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a861c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1a861cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a8620: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a8620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a8624: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a8624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8628: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8628u;
    {
        const bool branch_taken_0x1a8628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8628u;
        // 0x1a862c: 0x8c840028  lw          $a0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8628) {
            ctx->pc = 0x1A8640u;
            goto label_1a8640;
        }
    }
    ctx->pc = 0x1A8630u;
    // 0x1a8630: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a8630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a8634: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a8634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a8638: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A8638u;
    SET_GPR_U32(ctx, 31, 0x1A8640u);
    ctx->pc = 0x1A863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8638u;
    // 0x1a863c: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A8638u, 0x1A8640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8640u;
label_1a8640:
    // 0x1a8640: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1a8640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a8644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8648: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a8648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a864c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a864cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8650: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a8650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a8654: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a8654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a8658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a865c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A865Cu;
        // 0x1a8660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8664u;
}
