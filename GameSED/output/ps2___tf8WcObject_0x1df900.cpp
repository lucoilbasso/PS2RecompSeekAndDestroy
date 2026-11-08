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

// Function: __tf8WcObject
// Address: 0x1df900 - 0x1df950
void ps2___tf8WcObject_0x1df900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8WcObject_0x1df900");
#endif

    switch (ctx->pc) {
        case 0x1df924u: goto label_1df924;
        case 0x1df93cu: goto label_1df93c;
        default: break;
    }

    ctx->pc = 0x1df900u;

    // 0x1df900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df904: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1df904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1df908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df90c: 0x24501c40  addiu       $s0, $v0, 0x1C40
    ctx->pc = 0x1df90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7232));
    // 0x1df910: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1df910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411C40u));
    // 0x1df914: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF914u;
    {
        const bool branch_taken_0x1df914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF914u;
        // 0x1df918: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df914) {
            ctx->pc = 0x1DF93Cu;
            goto label_1df93c;
        }
    }
    ctx->pc = 0x1DF91Cu;
    // 0x1df91c: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DF91Cu;
    SET_GPR_U32(ctx, 31, 0x1DF924u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DF91Cu, 0x1DF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF924u;
label_1df924:
    // 0x1df924: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1df924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1df928: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1df928u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1df92c: 0x24a582b0  addiu       $a1, $a1, -0x7D50
    ctx->pc = 0x1df92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935216));
    // 0x1df930: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1df930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1df934: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DF934u;
    SET_GPR_U32(ctx, 31, 0x1DF93Cu);
    ctx->pc = 0x1DF938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF934u;
    // 0x1df938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DF934u, 0x1DF93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF93Cu;
label_1df93c:
    // 0x1df93c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df944: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df948: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF948u;
        // 0x1df94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF950u;
}
