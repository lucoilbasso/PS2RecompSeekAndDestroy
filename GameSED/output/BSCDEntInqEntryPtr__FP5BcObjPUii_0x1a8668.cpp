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

// Function: BSCDEntInqEntryPtr__FP5BcObjPUii
// Address: 0x1a8668 - 0x1a86c0
void BSCDEntInqEntryPtr__FP5BcObjPUii_0x1a8668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntInqEntryPtr__FP5BcObjPUii_0x1a8668");
#endif

    switch (ctx->pc) {
        case 0x1a869cu: goto label_1a869c;
        default: break;
    }

    ctx->pc = 0x1a8668u;

    // 0x1a8668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a866c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8670: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a8670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8678: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a8678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a867c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8680: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a8680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a8684: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a8684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8688: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8688u;
    {
        const bool branch_taken_0x1a8688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8688u;
        // 0x1a868c: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8688) {
            ctx->pc = 0x1A869Cu;
            goto label_1a869c;
        }
    }
    ctx->pc = 0x1A8690u;
    // 0x1a8690: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a8690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a8694: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A8694u;
    SET_GPR_U32(ctx, 31, 0x1A869Cu);
    ctx->pc = 0x1A8698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8694u;
    // 0x1a8698: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A8694u, 0x1A869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A869Cu;
label_1a869c:
    // 0x1a869c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1a869cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a86a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a86a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a86a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a86a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a86a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a86ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a86acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a86b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a86b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a86b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a86b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A86B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86B8u;
        // 0x1a86bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A86B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A86C0u;
}
