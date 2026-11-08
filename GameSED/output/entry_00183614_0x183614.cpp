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

// Function: entry_00183614
// Address: 0x183614 - 0x183658
void entry_00183614_0x183614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183614_0x183614");
#endif

    switch (ctx->pc) {
        case 0x18361cu: goto label_18361c;
        default: break;
    }

    ctx->pc = 0x183614u;

    // 0x183614: 0xc068086  jal         func_1A0218
    ctx->pc = 0x183614u;
    SET_GPR_U32(ctx, 31, 0x18361Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x183614u, 0x18361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18361Cu;
label_18361c:
    // 0x18361c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18361cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183620: 0x5620000d  bnel        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x183620u;
    {
        const bool branch_taken_0x183620 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x183620) {
            ctx->pc = 0x183624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183620u;
            // 0x183624: 0x86020028  lh          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183658u;
            return;
        }
    }
    ctx->pc = 0x183628u;
    // 0x183628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18362c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18362cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183630: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x183630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x183634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x183638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18363c: 0x24a57e08  addiu       $a1, $a1, 0x7E08
    ctx->pc = 0x18363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32264));
    // 0x183640: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x183640u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183644: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x183644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183648: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18364c: 0x8068186  j           func_1A0618
    ctx->pc = 0x18364Cu;
    ctx->pc = 0x183650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18364Cu;
    // 0x183650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x183654u;
    // 0x183654: 0x0  nop
    ctx->pc = 0x183654u;
    // NOP
    ctx->pc = 0x183658u;
}
