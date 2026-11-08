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

// Function: WTxPanelPutCode__FP9WcTxPaneliii
// Address: 0x18ec08 - 0x18ec40
void WTxPanelPutCode__FP9WcTxPaneliii_0x18ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelPutCode__FP9WcTxPaneliii_0x18ec08");
#endif

    switch (ctx->pc) {
        case 0x18ec34u: goto label_18ec34;
        default: break;
    }

    ctx->pc = 0x18ec08u;

    // 0x18ec08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ec0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18ec0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ec14: 0x8c430208  lw          $v1, 0x208($v0)
    ctx->pc = 0x18ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
    // 0x18ec18: 0x8c480214  lw          $t0, 0x214($v0)
    ctx->pc = 0x18ec18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x18ec1c: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x18ec1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18ec20: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18ec20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec24: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x18ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18ec28: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x18ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18ec2c: 0xc0632e6  jal         func_18CB98
    ctx->pc = 0x18EC2Cu;
    SET_GPR_U32(ctx, 31, 0x18EC34u);
    ctx->pc = 0x18EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC2Cu;
    // 0x18ec30: 0x1052821  addu        $a1, $t0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CB98u, 0x18EC2Cu, 0x18EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC34u;
label_18ec34:
    // 0x18ec34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ec38: 0x3e00008  jr          $ra
    ctx->pc = 0x18EC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC38u;
        // 0x18ec3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EC40u;
}
