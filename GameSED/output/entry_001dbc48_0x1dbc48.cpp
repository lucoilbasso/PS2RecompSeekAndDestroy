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

// Function: entry_001dbc48
// Address: 0x1dbc48 - 0x1dbc88
void entry_001dbc48_0x1dbc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbc48_0x1dbc48");
#endif

    ctx->pc = 0x1dbc48u;

label_1dbc48:
    // 0x1dbc48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dbc4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1dbc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1dbc50: 0x0  nop
    ctx->pc = 0x1dbc50u;
    // NOP
    // 0x1dbc54: 0x0  nop
    ctx->pc = 0x1dbc54u;
    // NOP
    // 0x1dbc58: 0x0  nop
    ctx->pc = 0x1dbc58u;
    // NOP
    // 0x1dbc5c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DBC5Cu;
    {
        const bool branch_taken_0x1dbc5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DBC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC5Cu;
        // 0x1dbc60: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc5c) {
            ctx->pc = 0x1DBC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbc48;
        }
    }
    ctx->pc = 0x1DBC64u;
    // 0x1dbc64: 0xae6002dc  sw          $zero, 0x2DC($s3)
    ctx->pc = 0x1dbc64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 732), GPR_U32(ctx, 0));
    // 0x1dbc68: 0xae6002d8  sw          $zero, 0x2D8($s3)
    ctx->pc = 0x1dbc68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 728), GPR_U32(ctx, 0));
    // 0x1dbc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbc74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbc74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbc78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbc7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dbc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbc80: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC80u;
        // 0x1dbc84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC88u;
}
