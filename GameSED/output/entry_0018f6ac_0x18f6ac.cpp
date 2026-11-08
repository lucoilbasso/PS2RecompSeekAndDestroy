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

// Function: entry_0018f6ac
// Address: 0x18f6ac - 0x18f6e8
void entry_0018f6ac_0x18f6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f6ac_0x18f6ac");
#endif

    switch (ctx->pc) {
        case 0x18f6b4u: goto label_18f6b4;
        default: break;
    }

    ctx->pc = 0x18f6acu;

    // 0x18f6ac: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18F6ACu;
    SET_GPR_U32(ctx, 31, 0x18F6B4u);
    ctx->pc = 0x18F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6ACu;
    // 0x18f6b0: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18F6ACu, 0x18F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6B4u;
label_18f6b4:
    // 0x18f6b4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18f6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18f6b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18f6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f6c0: 0x24a58190  addiu       $a1, $a1, -0x7E70
    ctx->pc = 0x18f6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934928));
    // 0x18f6c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f6c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18f6cc: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F6CCu;
    {
        const bool branch_taken_0x18f6cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6CCu;
        // 0x18f6d0: 0xae0701d0  sw          $a3, 0x1D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6cc) {
            ctx->pc = 0x18F6E8u;
            return;
        }
    }
    ctx->pc = 0x18F6D4u;
    // 0x18f6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f6d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18f6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f6dc: 0x8068186  j           func_1A0618
    ctx->pc = 0x18F6DCu;
    ctx->pc = 0x18F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6DCu;
    // 0x18f6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x18F6E4u;
    // 0x18f6e4: 0x0  nop
    ctx->pc = 0x18f6e4u;
    // NOP
    ctx->pc = 0x18f6e8u;
}
