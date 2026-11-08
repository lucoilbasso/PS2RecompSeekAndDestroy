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

// Function: entry_001c24dc
// Address: 0x1c24dc - 0x1c2510
void entry_001c24dc_0x1c24dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c24dc_0x1c24dc");
#endif

    switch (ctx->pc) {
        case 0x1c24e4u: goto label_1c24e4;
        default: break;
    }

    ctx->pc = 0x1c24dcu;

    // 0x1c24dc: 0xc070778  jal         func_1C1DE0
    ctx->pc = 0x1C24DCu;
    SET_GPR_U32(ctx, 31, 0x1C24E4u);
    ctx->pc = 0x1C24E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24DCu;
    // 0x1c24e0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DE0u, 0x1C24DCu, 0x1C24E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24E4u;
label_1c24e4:
    // 0x1c24e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c24e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24e8: 0x1051ffe7  beq         $v0, $s1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C24E8u;
    {
        const bool branch_taken_0x1c24e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24E8u;
        // 0x1c24ec: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24e8) {
            ctx->pc = 0x1C2488u;
            return;
        }
    }
    ctx->pc = 0x1C24F0u;
    // 0x1c24f0: 0x1053ffe3  beq         $v0, $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C24F0u;
    {
        const bool branch_taken_0x1c24f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24F0u;
        // 0x1c24f4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24f0) {
            ctx->pc = 0x1C2480u;
            return;
        }
    }
    ctx->pc = 0x1C24F8u;
    // 0x1c24f8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1c24f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c24fc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c24fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2500: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1c2500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2504: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c2504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2508: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2508u;
        // 0x1c250c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2510u;
}
