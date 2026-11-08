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

// Function: ApStudioDirectorSetup__FP9ApcStudioi
// Address: 0x114210 - 0x114258
void ApStudioDirectorSetup__FP9ApcStudioi_0x114210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApStudioDirectorSetup__FP9ApcStudioi_0x114210");
#endif

    switch (ctx->pc) {
        case 0x114228u: goto label_114228;
        default: break;
    }

    ctx->pc = 0x114210u;

    // 0x114210: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x114210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x114214: 0x2464bfd0  addiu       $a0, $v1, -0x4030
    ctx->pc = 0x114214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950864));
    // 0x114218: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x114218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1EBFD0u));
    // 0x11421c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11421Cu;
    {
        const bool branch_taken_0x11421c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11421Cu;
        // 0x114220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11421c) {
            ctx->pc = 0x114250u;
            goto label_114250;
        }
    }
    ctx->pc = 0x114224u;
    // 0x114224: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x114224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_114228:
    // 0x114228: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x114228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11422c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11422Cu;
    {
        const bool branch_taken_0x11422c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x114230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11422Cu;
        // 0x114230: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11422c) {
            ctx->pc = 0x114250u;
            goto label_114250;
        }
    }
    ctx->pc = 0x114234u;
    // 0x114234: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x114234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x114238: 0x0  nop
    ctx->pc = 0x114238u;
    // NOP
    // 0x11423c: 0x0  nop
    ctx->pc = 0x11423cu;
    // NOP
    // 0x114240: 0x0  nop
    ctx->pc = 0x114240u;
    // NOP
    // 0x114244: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114244u;
    {
        const bool branch_taken_0x114244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114244) {
            ctx->pc = 0x114248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114244u;
            // 0x114248: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114228;
        }
    }
    ctx->pc = 0x11424Cu;
    // 0x11424c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11424cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114250:
    // 0x114250: 0x3e00008  jr          $ra
    ctx->pc = 0x114250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114258u;
}
