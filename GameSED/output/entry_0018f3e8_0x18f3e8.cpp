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

// Function: entry_0018f3e8
// Address: 0x18f3e8 - 0x18f420
void entry_0018f3e8_0x18f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f3e8_0x18f3e8");
#endif

    switch (ctx->pc) {
        case 0x18f3f0u: goto label_18f3f0;
        default: break;
    }

    ctx->pc = 0x18f3e8u;

    // 0x18f3e8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18F3E8u;
    SET_GPR_U32(ctx, 31, 0x18F3F0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18F3E8u, 0x18F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F3F0u;
label_18f3f0:
    // 0x18f3f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F3F0u;
    {
        const bool branch_taken_0x18f3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3F0u;
        // 0x18f3f4: 0xae0201cc  sw          $v0, 0x1CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3f0) {
            ctx->pc = 0x18F420u;
            return;
        }
    }
    ctx->pc = 0x18F3F8u;
    // 0x18f3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f400: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18f400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18f404: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f40c: 0x24a58180  addiu       $a1, $a1, -0x7E80
    ctx->pc = 0x18f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
    // 0x18f410: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18f410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f414: 0x8068186  j           func_1A0618
    ctx->pc = 0x18F414u;
    ctx->pc = 0x18F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F414u;
    // 0x18f418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x18F41Cu;
    // 0x18f41c: 0x0  nop
    ctx->pc = 0x18f41cu;
    // NOP
    ctx->pc = 0x18f420u;
}
