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

// Function: entry_0018f2d0
// Address: 0x18f2d0 - 0x18f308
void entry_0018f2d0_0x18f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f2d0_0x18f2d0");
#endif

    switch (ctx->pc) {
        case 0x18f2d8u: goto label_18f2d8;
        default: break;
    }

    ctx->pc = 0x18f2d0u;

    // 0x18f2d0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18F2D0u;
    SET_GPR_U32(ctx, 31, 0x18F2D8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18F2D0u, 0x18F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2D8u;
label_18f2d8:
    // 0x18f2d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F2D8u;
    {
        const bool branch_taken_0x18f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2D8u;
        // 0x18f2dc: 0xae0201c8  sw          $v0, 0x1C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2d8) {
            ctx->pc = 0x18F308u;
            return;
        }
    }
    ctx->pc = 0x18F2E0u;
    // 0x18f2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f2e8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18f2ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f2ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f2f4: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x18f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x18f2f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18f2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f2fc: 0x8068186  j           func_1A0618
    ctx->pc = 0x18F2FCu;
    ctx->pc = 0x18F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2FCu;
    // 0x18f300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x18F304u;
    // 0x18f304: 0x0  nop
    ctx->pc = 0x18f304u;
    // NOP
    ctx->pc = 0x18f308u;
}
