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

// Function: entry_001c7acc
// Address: 0x1c7acc - 0x1c7afc
void entry_001c7acc_0x1c7acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7acc_0x1c7acc");
#endif

    ctx->pc = 0x1c7accu;

    // 0x1c7acc: 0xdfb10278  ld          $s1, 0x278($sp)
    ctx->pc = 0x1c7accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1c7ad0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1c7ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1c7ad4: 0xdfb20280  ld          $s2, 0x280($sp)
    ctx->pc = 0x1c7ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1c7ad8: 0xdfb30288  ld          $s3, 0x288($sp)
    ctx->pc = 0x1c7ad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x1c7adc: 0xdfb40290  ld          $s4, 0x290($sp)
    ctx->pc = 0x1c7adcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1c7ae0: 0xdfb50298  ld          $s5, 0x298($sp)
    ctx->pc = 0x1c7ae0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1c7ae4: 0xdfb602a0  ld          $s6, 0x2A0($sp)
    ctx->pc = 0x1c7ae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1c7ae8: 0xdfb702a8  ld          $s7, 0x2A8($sp)
    ctx->pc = 0x1c7ae8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x1c7aec: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x1c7aecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1c7af0: 0xdfbf02b8  ld          $ra, 0x2B8($sp)
    ctx->pc = 0x1c7af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x1c7af4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AF4u;
        // 0x1c7af8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7AFCu;
}
