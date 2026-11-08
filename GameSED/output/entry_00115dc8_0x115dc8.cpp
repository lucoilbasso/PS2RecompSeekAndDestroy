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

// Function: entry_00115dc8
// Address: 0x115dc8 - 0x115e1c
void entry_00115dc8_0x115dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115dc8_0x115dc8");
#endif

    ctx->pc = 0x115dc8u;

label_115dc8:
    // 0x115dc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115dcc: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x115dccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x115dd0: 0x0  nop
    ctx->pc = 0x115dd0u;
    // NOP
    // 0x115dd4: 0x0  nop
    ctx->pc = 0x115dd4u;
    // NOP
    // 0x115dd8: 0x0  nop
    ctx->pc = 0x115dd8u;
    // NOP
    // 0x115ddc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115DDCu;
    {
        const bool branch_taken_0x115ddc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x115DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DDCu;
        // 0x115de0: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ddc) {
            ctx->pc = 0x115DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115dc8;
        }
    }
    ctx->pc = 0x115DE4u;
    // 0x115de4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115de8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x115de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x115dec: 0x28e2006e  slti        $v0, $a3, 0x6E
    ctx->pc = 0x115decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x115df0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x115DF0u;
    {
        const bool branch_taken_0x115df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DF0u;
        // 0x115df4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115df0) {
            ctx->pc = 0x115DB8u;
            return;
        }
    }
    ctx->pc = 0x115DF8u;
    // 0x115df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115e00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115e04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x115e04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x115e08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x115e08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115e0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x115e0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x115e10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x115e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115e14: 0x3e00008  jr          $ra
    ctx->pc = 0x115E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E14u;
        // 0x115e18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115E1Cu;
}
