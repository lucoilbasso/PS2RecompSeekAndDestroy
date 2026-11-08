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

// Function: entry_0017d268
// Address: 0x17d268 - 0x17d2a0
void entry_0017d268_0x17d268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d268_0x17d268");
#endif

    switch (ctx->pc) {
        case 0x17d270u: goto label_17d270;
        default: break;
    }

    ctx->pc = 0x17d268u;

    // 0x17d268: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17D268u;
    SET_GPR_U32(ctx, 31, 0x17D270u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17D268u, 0x17D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D270u;
label_17d270:
    // 0x17d270: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D270u;
    {
        const bool branch_taken_0x17d270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D270u;
        // 0x17d274: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d270) {
            ctx->pc = 0x17D2A0u;
            return;
        }
    }
    ctx->pc = 0x17D278u;
    // 0x17d278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d280: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17d284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d28c: 0x24a57bd0  addiu       $a1, $a1, 0x7BD0
    ctx->pc = 0x17d28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31696));
    // 0x17d290: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17d290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d294: 0x8068186  j           func_1A0618
    ctx->pc = 0x17D294u;
    ctx->pc = 0x17D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D294u;
    // 0x17d298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17D29Cu;
    // 0x17d29c: 0x0  nop
    ctx->pc = 0x17d29cu;
    // NOP
    ctx->pc = 0x17d2a0u;
}
