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

// Function: entry_001855e8
// Address: 0x1855e8 - 0x185618
void entry_001855e8_0x1855e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001855e8_0x1855e8");
#endif

    ctx->pc = 0x1855e8u;

    // 0x1855e8: 0x1660ffc3  bnez        $s3, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1855E8u;
    {
        const bool branch_taken_0x1855e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855E8u;
        // 0x1855ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855e8) {
            ctx->pc = 0x1854F8u;
            return;
        }
    }
    ctx->pc = 0x1855F0u;
    // 0x1855f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1855f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1855f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1855f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1855f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1855f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1855fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1855fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185600: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x185600u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x185604: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x185604u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185608: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x185608u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18560c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18560cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185610: 0x3e00008  jr          $ra
    ctx->pc = 0x185610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185610u;
        // 0x185614: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185618u;
}
