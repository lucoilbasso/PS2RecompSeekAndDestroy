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

// Function: __tf6WcFont
// Address: 0x1dcca8 - 0x1dccf8
void ps2___tf6WcFont_0x1dcca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf6WcFont_0x1dcca8");
#endif

    switch (ctx->pc) {
        case 0x1dccccu: goto label_1dcccc;
        case 0x1dcce4u: goto label_1dcce4;
        default: break;
    }

    ctx->pc = 0x1dcca8u;

    // 0x1dcca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dccac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dccacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dccb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dccb4: 0x24501570  addiu       $s0, $v0, 0x1570
    ctx->pc = 0x1dccb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5488));
    // 0x1dccb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411570u));
    // 0x1dccbc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DCCBCu;
    {
        const bool branch_taken_0x1dccbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCBCu;
        // 0x1dccc0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccbc) {
            ctx->pc = 0x1DCCE4u;
            goto label_1dcce4;
        }
    }
    ctx->pc = 0x1DCCC4u;
    // 0x1dccc4: 0xc0771d4  jal         func_1DC750
    ctx->pc = 0x1DCCC4u;
    SET_GPR_U32(ctx, 31, 0x1DCCCCu);
    ctx->pc = 0x1DC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC750u, 0x1DCCC4u, 0x1DCCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCCCu;
label_1dcccc:
    // 0x1dcccc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1dccccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1dccd0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dccd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dccd4: 0x24a5d5c0  addiu       $a1, $a1, -0x2A40
    ctx->pc = 0x1dccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956480));
    // 0x1dccd8: 0x24c61510  addiu       $a2, $a2, 0x1510
    ctx->pc = 0x1dccd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5392));
    // 0x1dccdc: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DCCDCu;
    SET_GPR_U32(ctx, 31, 0x1DCCE4u);
    ctx->pc = 0x1DCCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCCDCu;
    // 0x1dcce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DCCDCu, 0x1DCCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCE4u;
label_1dcce4:
    // 0x1dcce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dcce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dccec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dccecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCF0u;
        // 0x1dccf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCCF8u;
}
