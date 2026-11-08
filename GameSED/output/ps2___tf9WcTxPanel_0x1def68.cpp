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

// Function: __tf9WcTxPanel
// Address: 0x1def68 - 0x1defb8
void ps2___tf9WcTxPanel_0x1def68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9WcTxPanel_0x1def68");
#endif

    switch (ctx->pc) {
        case 0x1def8cu: goto label_1def8c;
        case 0x1defa4u: goto label_1defa4;
        default: break;
    }

    ctx->pc = 0x1def68u;

    // 0x1def68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1def68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1def6c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1def6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1def70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1def70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1def74: 0x24501678  addiu       $s0, $v0, 0x1678
    ctx->pc = 0x1def74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5752));
    // 0x1def78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1def78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411678u));
    // 0x1def7c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEF7Cu;
    {
        const bool branch_taken_0x1def7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF7Cu;
        // 0x1def80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def7c) {
            ctx->pc = 0x1DEFA4u;
            goto label_1defa4;
        }
    }
    ctx->pc = 0x1DEF84u;
    // 0x1def84: 0xc077ada  jal         func_1DEB68
    ctx->pc = 0x1DEF84u;
    SET_GPR_U32(ctx, 31, 0x1DEF8Cu);
    ctx->pc = 0x1DEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB68u, 0x1DEF84u, 0x1DEF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF8Cu;
label_1def8c:
    // 0x1def8c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1def8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1def90: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1def90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1def94: 0x24a58170  addiu       $a1, $a1, -0x7E90
    ctx->pc = 0x1def94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934896));
    // 0x1def98: 0x24c61668  addiu       $a2, $a2, 0x1668
    ctx->pc = 0x1def98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5736));
    // 0x1def9c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DEF9Cu;
    SET_GPR_U32(ctx, 31, 0x1DEFA4u);
    ctx->pc = 0x1DEFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF9Cu;
    // 0x1defa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DEF9Cu, 0x1DEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEFA4u;
label_1defa4:
    // 0x1defa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1defa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1defa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1defa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1defac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1defacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1defb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFB0u;
        // 0x1defb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEFB8u;
}
