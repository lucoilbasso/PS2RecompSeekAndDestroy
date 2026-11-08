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

// Function: entry_00170338
// Address: 0x170338 - 0x170394
void entry_00170338_0x170338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170338_0x170338");
#endif

    switch (ctx->pc) {
        case 0x170340u: goto label_170340;
        case 0x170358u: goto label_170358;
        case 0x170368u: goto label_170368;
        case 0x170378u: goto label_170378;
        case 0x170390u: goto label_170390;
        default: break;
    }

    ctx->pc = 0x170338u;

    // 0x170338: 0xc05c250  jal         func_170940
    ctx->pc = 0x170338u;
    SET_GPR_U32(ctx, 31, 0x170340u);
    ctx->pc = 0x170940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170940u, 0x170338u, 0x170340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170340u;
label_170340:
    // 0x170340: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x170340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x170344: 0x14a00015  bnez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x170344u;
    {
        const bool branch_taken_0x170344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x170348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170344u;
        // 0x170348: 0x2a820005  slti        $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170344) {
            ctx->pc = 0x17039Cu;
            return;
        }
    }
    ctx->pc = 0x17034Cu;
    // 0x17034c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x17034cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170350: 0xc05cf5a  jal         func_173D68
    ctx->pc = 0x170350u;
    SET_GPR_U32(ctx, 31, 0x170358u);
    ctx->pc = 0x170354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170350u;
    // 0x170354: 0x248412a8  addiu       $a0, $a0, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D68u, 0x170350u, 0x170358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170358u;
label_170358:
    // 0x170358: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x170358u;
    {
        const bool branch_taken_0x170358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170358) {
            ctx->pc = 0x17035Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170358u;
            // 0x17035c: 0x2a820005  slti        $v0, $s4, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17039Cu;
            return;
        }
    }
    ctx->pc = 0x170360u;
    // 0x170360: 0xc05c126  jal         func_170498
    ctx->pc = 0x170360u;
    SET_GPR_U32(ctx, 31, 0x170368u);
    ctx->pc = 0x170498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170498u, 0x170360u, 0x170368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170368u;
label_170368:
    // 0x170368: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x170368u;
    {
        const bool branch_taken_0x170368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170368) {
            ctx->pc = 0x17036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170368u;
            // 0x17036c: 0x2a820005  slti        $v0, $s4, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17039Cu;
            return;
        }
    }
    ctx->pc = 0x170370u;
    // 0x170370: 0xc05d2f4  jal         func_174BD0
    ctx->pc = 0x170370u;
    SET_GPR_U32(ctx, 31, 0x170378u);
    ctx->pc = 0x170374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170370u;
    // 0x170374: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174BD0u, 0x170370u, 0x170378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170378u;
label_170378:
    // 0x170378: 0x8f828bd8  lw          $v0, -0x7428($gp)
    ctx->pc = 0x170378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937560)));
    // 0x17037c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17037Cu;
    {
        const bool branch_taken_0x17037c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17037c) {
            ctx->pc = 0x170380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17037Cu;
            // 0x170380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170394u;
            return;
        }
    }
    ctx->pc = 0x170384u;
    // 0x170384: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x170384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170388: 0xc05c404  jal         func_171010
    ctx->pc = 0x170388u;
    SET_GPR_U32(ctx, 31, 0x170390u);
    ctx->pc = 0x17038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170388u;
    // 0x17038c: 0x24841308  addiu       $a0, $a0, 0x1308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171010u, 0x170388u, 0x170390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170390u;
label_170390:
    // 0x170390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x170394u;
}
