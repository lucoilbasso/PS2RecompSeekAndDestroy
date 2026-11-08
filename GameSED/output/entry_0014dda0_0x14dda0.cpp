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

// Function: entry_0014dda0
// Address: 0x14dda0 - 0x14de00
void entry_0014dda0_0x14dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dda0_0x14dda0");
#endif

    switch (ctx->pc) {
        case 0x14ddb0u: goto label_14ddb0;
        default: break;
    }

    ctx->pc = 0x14dda0u;

    // 0x14dda0: 0xae370014  sw          $s7, 0x14($s1)
    ctx->pc = 0x14dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 23));
    // 0x14dda4: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x14dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x14dda8: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x14DDA8u;
    SET_GPR_U32(ctx, 31, 0x14DDB0u);
    ctx->pc = 0x14DDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DDA8u;
    // 0x14ddac: 0xae360018  sw          $s6, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x14DDA8u, 0x14DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDB0u;
label_14ddb0:
    // 0x14ddb0: 0xae350020  sw          $s5, 0x20($s1)
    ctx->pc = 0x14ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 21));
    // 0x14ddb4: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x14ddb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x14ddb8: 0xae330024  sw          $s3, 0x24($s1)
    ctx->pc = 0x14ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
    // 0x14ddbc: 0xae340028  sw          $s4, 0x28($s1)
    ctx->pc = 0x14ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
    // 0x14ddc0: 0xae32002c  sw          $s2, 0x2C($s1)
    ctx->pc = 0x14ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 18));
    // 0x14ddc4: 0xae350030  sw          $s5, 0x30($s1)
    ctx->pc = 0x14ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 21));
    // 0x14ddc8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x14ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x14ddcc: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x14ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x14ddd0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x14ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x14ddd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ddd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ddd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ddd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14dddc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14dddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dde0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14dde0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14dde4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14dde4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dde8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14dde8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ddec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x14ddecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ddf0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x14ddf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14ddf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14ddf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x14DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDF8u;
        // 0x14ddfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DE00u;
}
