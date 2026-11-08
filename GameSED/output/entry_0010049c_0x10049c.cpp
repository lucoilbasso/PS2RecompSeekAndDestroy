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

// Function: entry_0010049c
// Address: 0x10049c - 0x1004c4
void entry_0010049c_0x10049c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010049c_0x10049c");
#endif

    ctx->pc = 0x10049cu;

    // 0x10049c: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x10049cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1004a0: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1004a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1004a4: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1004a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1004a8: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x1004a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1004ac: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x1004acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1004b0: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x1004b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1004b4: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x1004b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1004b8: 0xdfbf0238  ld          $ra, 0x238($sp)
    ctx->pc = 0x1004b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1004bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1004BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004BCu;
        // 0x1004c0: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1004BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1004C4u;
}
