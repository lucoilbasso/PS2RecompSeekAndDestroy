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

// Function: Init__9WcSpu2Man
// Address: 0x17a5a8 - 0x17a5d4
void Init__9WcSpu2Man_0x17a5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9WcSpu2Man_0x17a5a8");
#endif

    switch (ctx->pc) {
        case 0x17a5c8u: goto label_17a5c8;
        default: break;
    }

    ctx->pc = 0x17a5a8u;

    // 0x17a5a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17a5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a5acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a5b0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17a5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a5b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17a5bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17a5c0: 0xc05e976  jal         func_17A5D8
    ctx->pc = 0x17A5C0u;
    SET_GPR_U32(ctx, 31, 0x17A5C8u);
    ctx->pc = 0x17A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5C0u;
    // 0x17a5c4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D8u, 0x17A5C0u, 0x17A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5C8u;
label_17a5c8:
    // 0x17a5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5CCu;
        // 0x17a5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A5D4u;
}
