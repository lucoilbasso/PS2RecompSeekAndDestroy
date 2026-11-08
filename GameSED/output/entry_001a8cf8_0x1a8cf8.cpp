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

// Function: entry_001a8cf8
// Address: 0x1a8cf8 - 0x1a8d28
void entry_001a8cf8_0x1a8cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8cf8_0x1a8cf8");
#endif

    ctx->pc = 0x1a8cf8u;

    // 0x1a8cf8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a8cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a8cfc: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A8CFCu;
    {
        const bool branch_taken_0x1a8cfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CFCu;
        // 0x1a8d00: 0xa6050000  sh          $a1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cfc) {
            ctx->pc = 0x1A8CC8u;
            return;
        }
    }
    ctx->pc = 0x1A8D04u;
    // 0x1a8d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8d08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8d0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8d10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8d10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8d14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8d14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8d18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8d18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8d1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D20u;
        // 0x1a8d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8D28u;
}
