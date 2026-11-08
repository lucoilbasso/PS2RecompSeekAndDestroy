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

// Function: entry_001da460
// Address: 0x1da460 - 0x1da4a4
void entry_001da460_0x1da460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da460_0x1da460");
#endif

    ctx->pc = 0x1da460u;

    // 0x1da460: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1da460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1da464: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1da464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1da468: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1da468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1da46c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1da470: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1da470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1da474: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1da474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1da478: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1da478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1da47c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1da47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1da480: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1da480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1da484: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1da484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1da488: 0x621ffd1  bgez        $s1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1DA488u;
    {
        const bool branch_taken_0x1da488 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1DA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA488u;
        // 0x1da48c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da488) {
            ctx->pc = 0x1DA3D0u;
            return;
        }
    }
    ctx->pc = 0x1DA490u;
    // 0x1da490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da49c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA49Cu;
        // 0x1da4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA4A4u;
}
