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

// Function: entry_00102460
// Address: 0x102460 - 0x1024a0
void entry_00102460_0x102460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102460_0x102460");
#endif

    switch (ctx->pc) {
        case 0x102478u: goto label_102478;
        default: break;
    }

    ctx->pc = 0x102460u;

    // 0x102460: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x102460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x102464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102468: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x102468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10246c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x10246cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102470: 0xc05fddc  jal         func_17F770
    ctx->pc = 0x102470u;
    SET_GPR_U32(ctx, 31, 0x102478u);
    ctx->pc = 0x102474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102470u;
    // 0x102474: 0x24e7b000  addiu       $a3, $a3, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F770u, 0x102470u, 0x102478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102478u;
label_102478:
    // 0x102478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10247c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10247cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102480: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102484: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102488: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10248c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10248cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102490: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x102490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102494: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x102494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102498: 0x3e00008  jr          $ra
    ctx->pc = 0x102498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102498u;
        // 0x10249c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1024A0u;
}
