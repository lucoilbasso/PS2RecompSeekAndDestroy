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

// Function: entry_00115bc8
// Address: 0x115bc8 - 0x115c18
void entry_00115bc8_0x115bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115bc8_0x115bc8");
#endif

    ctx->pc = 0x115bc8u;

label_115bc8:
    // 0x115bc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115bcc: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x115bccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x115bd0: 0x0  nop
    ctx->pc = 0x115bd0u;
    // NOP
    // 0x115bd4: 0x0  nop
    ctx->pc = 0x115bd4u;
    // NOP
    // 0x115bd8: 0x0  nop
    ctx->pc = 0x115bd8u;
    // NOP
    // 0x115bdc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115BDCu;
    {
        const bool branch_taken_0x115bdc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x115BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BDCu;
        // 0x115be0: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bdc) {
            ctx->pc = 0x115BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115bc8;
        }
    }
    ctx->pc = 0x115BE4u;
    // 0x115be4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115be8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x115be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x115bec: 0x28e2006e  slti        $v0, $a3, 0x6E
    ctx->pc = 0x115becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x115bf0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x115BF0u;
    {
        const bool branch_taken_0x115bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BF0u;
        // 0x115bf4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bf0) {
            ctx->pc = 0x115BB8u;
            return;
        }
    }
    ctx->pc = 0x115BF8u;
    // 0x115bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115c04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x115c04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x115c08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x115c08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115c0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x115c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x115c10: 0x3e00008  jr          $ra
    ctx->pc = 0x115C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C10u;
        // 0x115c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C18u;
}
