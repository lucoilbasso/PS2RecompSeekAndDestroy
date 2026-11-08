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

// Function: entry_001dbd98
// Address: 0x1dbd98 - 0x1dbdec
void entry_001dbd98_0x1dbd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbd98_0x1dbd98");
#endif

    switch (ctx->pc) {
        case 0x1dbdc8u: goto label_1dbdc8;
        default: break;
    }

    ctx->pc = 0x1dbd98u;

label_1dbd98:
    // 0x1dbd98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dbd9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1dbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1dbda0: 0x0  nop
    ctx->pc = 0x1dbda0u;
    // NOP
    // 0x1dbda4: 0x0  nop
    ctx->pc = 0x1dbda4u;
    // NOP
    // 0x1dbda8: 0x0  nop
    ctx->pc = 0x1dbda8u;
    // NOP
    // 0x1dbdac: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DBDACu;
    {
        const bool branch_taken_0x1dbdac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDACu;
        // 0x1dbdb0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdac) {
            ctx->pc = 0x1DBD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbd98;
        }
    }
    ctx->pc = 0x1DBDB4u;
    // 0x1dbdb4: 0xae8002dc  sw          $zero, 0x2DC($s4)
    ctx->pc = 0x1dbdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 732), GPR_U32(ctx, 0));
    // 0x1dbdb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dbdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdbc: 0xae8002d8  sw          $zero, 0x2D8($s4)
    ctx->pc = 0x1dbdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 728), GPR_U32(ctx, 0));
    // 0x1dbdc0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DBDC0u;
    SET_GPR_U32(ctx, 31, 0x1DBDC8u);
    ctx->pc = 0x1DBDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC0u;
    // 0x1dbdc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DBDC0u, 0x1DBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDC8u;
label_1dbdc8:
    // 0x1dbdc8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1dbdc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbdccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbdd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbdd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbdd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbdd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbdd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbddc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dbddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbde0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dbde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dbde4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDE4u;
        // 0x1dbde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDECu;
}
