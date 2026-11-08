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

// Function: WPadSoftWareAllInit__Fv
// Address: 0x177e68 - 0x177e94
void WPadSoftWareAllInit__Fv_0x177e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadSoftWareAllInit__Fv_0x177e68");
#endif

    switch (ctx->pc) {
        case 0x177e78u: goto label_177e78;
        case 0x177e80u: goto label_177e80;
        case 0x177e88u: goto label_177e88;
        default: break;
    }

    ctx->pc = 0x177e68u;

    // 0x177e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177e70: 0xc05dfa6  jal         func_177E98
    ctx->pc = 0x177E70u;
    SET_GPR_U32(ctx, 31, 0x177E78u);
    ctx->pc = 0x177E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E70u;
    // 0x177e74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E98u, 0x177E70u, 0x177E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E78u;
label_177e78:
    // 0x177e78: 0xc05dfa6  jal         func_177E98
    ctx->pc = 0x177E78u;
    SET_GPR_U32(ctx, 31, 0x177E80u);
    ctx->pc = 0x177E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E78u;
    // 0x177e7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E98u, 0x177E78u, 0x177E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E80u;
label_177e80:
    // 0x177e80: 0xc05dfa6  jal         func_177E98
    ctx->pc = 0x177E80u;
    SET_GPR_U32(ctx, 31, 0x177E88u);
    ctx->pc = 0x177E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E80u;
    // 0x177e84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E98u, 0x177E80u, 0x177E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E88u;
label_177e88:
    // 0x177e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x177E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E8Cu;
        // 0x177e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E94u;
}
