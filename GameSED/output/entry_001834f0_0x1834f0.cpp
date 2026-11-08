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

// Function: entry_001834f0
// Address: 0x1834f0 - 0x183530
void entry_001834f0_0x1834f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001834f0_0x1834f0");
#endif

    switch (ctx->pc) {
        case 0x1834f8u: goto label_1834f8;
        default: break;
    }

    ctx->pc = 0x1834f0u;

    // 0x1834f0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1834F0u;
    SET_GPR_U32(ctx, 31, 0x1834F8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1834F0u, 0x1834F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834F8u;
label_1834f8:
    // 0x1834f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1834F8u;
    {
        const bool branch_taken_0x1834f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1834FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834F8u;
        // 0x1834fc: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834f8) {
            ctx->pc = 0x183530u;
            return;
        }
    }
    ctx->pc = 0x183500u;
    // 0x183500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183508: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x183508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x18350c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18350cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x183510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183514: 0x24a57df0  addiu       $a1, $a1, 0x7DF0
    ctx->pc = 0x183514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32240));
    // 0x183518: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x183518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18351c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18351cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183524: 0x8068186  j           func_1A0618
    ctx->pc = 0x183524u;
    ctx->pc = 0x183528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183524u;
    // 0x183528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x18352Cu;
    // 0x18352c: 0x0  nop
    ctx->pc = 0x18352cu;
    // NOP
    ctx->pc = 0x183530u;
}
