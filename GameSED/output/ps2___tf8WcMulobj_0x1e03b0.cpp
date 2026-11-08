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

// Function: __tf8WcMulobj
// Address: 0x1e03b0 - 0x1e0400
void ps2___tf8WcMulobj_0x1e03b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8WcMulobj_0x1e03b0");
#endif

    switch (ctx->pc) {
        case 0x1e03d4u: goto label_1e03d4;
        case 0x1e03ecu: goto label_1e03ec;
        default: break;
    }

    ctx->pc = 0x1e03b0u;

    // 0x1e03b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e03b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e03b4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e03b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e03bc: 0x24501c90  addiu       $s0, $v0, 0x1C90
    ctx->pc = 0x1e03bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7312));
    // 0x1e03c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e03c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411C90u));
    // 0x1e03c4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E03C4u;
    {
        const bool branch_taken_0x1e03c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03C4u;
        // 0x1e03c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03c4) {
            ctx->pc = 0x1E03ECu;
            goto label_1e03ec;
        }
    }
    ctx->pc = 0x1E03CCu;
    // 0x1e03cc: 0xc077e40  jal         func_1DF900
    ctx->pc = 0x1E03CCu;
    SET_GPR_U32(ctx, 31, 0x1E03D4u);
    ctx->pc = 0x1DF900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF900u, 0x1E03CCu, 0x1E03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03D4u;
label_1e03d4:
    // 0x1e03d4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e03d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e03d8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1e03d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1e03dc: 0x24a58430  addiu       $a1, $a1, -0x7BD0
    ctx->pc = 0x1e03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935600));
    // 0x1e03e0: 0x24c61c40  addiu       $a2, $a2, 0x1C40
    ctx->pc = 0x1e03e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7232));
    // 0x1e03e4: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E03E4u;
    SET_GPR_U32(ctx, 31, 0x1E03ECu);
    ctx->pc = 0x1E03E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03E4u;
    // 0x1e03e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E03E4u, 0x1E03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03ECu;
label_1e03ec:
    // 0x1e03ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e03ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e03f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e03f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e03f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e03f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E03F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03F8u;
        // 0x1e03fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E03F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0400u;
}
