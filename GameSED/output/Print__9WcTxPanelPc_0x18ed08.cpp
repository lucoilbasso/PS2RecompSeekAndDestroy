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

// Function: Print__9WcTxPanelPc
// Address: 0x18ed08 - 0x18ed58
void Print__9WcTxPanelPc_0x18ed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Print__9WcTxPanelPc_0x18ed08");
#endif

    switch (ctx->pc) {
        case 0x18ed44u: goto label_18ed44;
        default: break;
    }

    ctx->pc = 0x18ed08u;

    // 0x18ed08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ed0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ed10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ed10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18ed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18ed18: 0x26080260  addiu       $t0, $s0, 0x260
    ctx->pc = 0x18ed18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x18ed1c: 0xae08025c  sw          $t0, 0x25C($s0)
    ctx->pc = 0x18ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 8));
    // 0x18ed20: 0x86060246  lh          $a2, 0x246($s0)
    ctx->pc = 0x18ed20u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
    // 0x18ed24: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x18ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18ed28: 0x86030244  lh          $v1, 0x244($s0)
    ctx->pc = 0x18ed28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x18ed2c: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x18ed2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x18ed30: 0x8e070214  lw          $a3, 0x214($s0)
    ctx->pc = 0x18ed30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x18ed34: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x18ed34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18ed38: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x18ed38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x18ed3c: 0xc06343e  jal         func_18D0F8
    ctx->pc = 0x18ED3Cu;
    SET_GPR_U32(ctx, 31, 0x18ED44u);
    ctx->pc = 0x18ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED3Cu;
    // 0x18ed40: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D0F8u, 0x18ED3Cu, 0x18ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED44u;
label_18ed44:
    // 0x18ed44: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x18ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x18ed48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18ed48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18ed4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ed4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ed50: 0x3e00008  jr          $ra
    ctx->pc = 0x18ED50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED50u;
        // 0x18ed54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ED50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ED58u;
}
