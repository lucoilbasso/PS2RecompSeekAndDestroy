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

// Function: entry_0010f600
// Address: 0x10f600 - 0x10f624
void entry_0010f600_0x10f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f600_0x10f600");
#endif

    switch (ctx->pc) {
        case 0x10f608u: goto label_10f608;
        default: break;
    }

    ctx->pc = 0x10f600u;

    // 0x10f600: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x10F600u;
    SET_GPR_U32(ctx, 31, 0x10F608u);
    ctx->pc = 0x10F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F600u;
    // 0x10f604: 0xe621015c  swc1        $f1, 0x15C($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x10F600u, 0x10F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F608u;
label_10f608:
    // 0x10f608: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x10f608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    // 0x10f60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10f614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f618: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10f618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f61c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F61Cu;
        // 0x10f620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F624u;
}
