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

// Function: entry_00164744
// Address: 0x164744 - 0x164778
void entry_00164744_0x164744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164744_0x164744");
#endif

    ctx->pc = 0x164744u;

    // 0x164744: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x164744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164748: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x164748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16474c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x16474cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x164750: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x164750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164754: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x164754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x164758: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x164758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16475c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x16475cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x164760: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x164760u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164764: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x164764u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x164768: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x164768u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16476c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x16476cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x164770: 0x3e00008  jr          $ra
    ctx->pc = 0x164770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164770u;
        // 0x164774: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164778u;
}
