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

// Function: entry_0016dcbc
// Address: 0x16dcbc - 0x16dcf4
void entry_0016dcbc_0x16dcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dcbc_0x16dcbc");
#endif

    switch (ctx->pc) {
        case 0x16dcc8u: goto label_16dcc8;
        default: break;
    }

    ctx->pc = 0x16dcbcu;

    // 0x16dcbc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16dcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcc0: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x16DCC0u;
    SET_GPR_U32(ctx, 31, 0x16DCC8u);
    ctx->pc = 0x16DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCC0u;
    // 0x16dcc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x16DCC0u, 0x16DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCC8u;
label_16dcc8:
    // 0x16dcc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16dcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16dcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16dcd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16dcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dcd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16dcd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16dcd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16dcd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dcdc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16dcdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16dce0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16dce0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dce4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16dce4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16dce8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16dce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dcec: 0x3e00008  jr          $ra
    ctx->pc = 0x16DCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCECu;
        // 0x16dcf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DCF4u;
}
