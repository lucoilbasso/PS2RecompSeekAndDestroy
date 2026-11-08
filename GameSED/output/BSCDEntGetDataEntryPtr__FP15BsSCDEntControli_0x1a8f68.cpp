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

// Function: BSCDEntGetDataEntryPtr__FP15BsSCDEntControli
// Address: 0x1a8f68 - 0x1a8fd8
void BSCDEntGetDataEntryPtr__FP15BsSCDEntControli_0x1a8f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGetDataEntryPtr__FP15BsSCDEntControli_0x1a8f68");
#endif

    switch (ctx->pc) {
        case 0x1a8fa4u: goto label_1a8fa4;
        default: break;
    }

    ctx->pc = 0x1a8f68u;

    // 0x1a8f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8f70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a8f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8f78: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A8F78u;
    {
        const bool branch_taken_0x1a8f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F78u;
        // 0x1a8f7c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f78) {
            ctx->pc = 0x1A8FC0u;
            goto label_1a8fc0;
        }
    }
    ctx->pc = 0x1A8F80u;
    // 0x1a8f80: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x1a8f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a8f84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a8f88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8f8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8F8Cu;
    {
        const bool branch_taken_0x1a8f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F8Cu;
        // 0x1a8f90: 0x8c840028  lw          $a0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f8c) {
            ctx->pc = 0x1A8FA4u;
            goto label_1a8fa4;
        }
    }
    ctx->pc = 0x1A8F94u;
    // 0x1a8f94: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a8f98: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a8f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a8f9c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A8F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A8FA4u);
    ctx->pc = 0x1A8FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F9Cu;
    // 0x1a8fa0: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A8F9Cu, 0x1A8FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FA4u;
label_1a8fa4:
    // 0x1a8fa4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a8fa8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a8fac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a8facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a8fb0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a8fb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8FB4u;
    {
        const bool branch_taken_0x1a8fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FB4u;
        // 0x1a8fb8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fb4) {
            ctx->pc = 0x1A8FC4u;
            goto label_1a8fc4;
        }
    }
    ctx->pc = 0x1A8FBCu;
    // 0x1a8fbc: 0x0  nop
    ctx->pc = 0x1a8fbcu;
    // NOP
label_1a8fc0:
    // 0x1a8fc0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1a8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1a8fc4:
    // 0x1a8fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FD0u;
        // 0x1a8fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8FD8u;
}
