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

// Function: entry_00100cb4
// Address: 0x100cb4 - 0x100cfc
void entry_00100cb4_0x100cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100cb4_0x100cb4");
#endif

    switch (ctx->pc) {
        case 0x100cc4u: goto label_100cc4;
        case 0x100cdcu: goto label_100cdc;
        default: break;
    }

    ctx->pc = 0x100cb4u;

    // 0x100cb4: 0x8e900020  lw          $s0, 0x20($s4)
    ctx->pc = 0x100cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x100cb8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x100cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x100cbc: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x100CBCu;
    SET_GPR_U32(ctx, 31, 0x100CC4u);
    ctx->pc = 0x100CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CBCu;
    // 0x100cc0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x100CBCu, 0x100CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CC4u;
label_100cc4:
    // 0x100cc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x100cc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x100cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ccc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x100cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cd4: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x100CD4u;
    SET_GPR_U32(ctx, 31, 0x100CDCu);
    ctx->pc = 0x100CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CD4u;
    // 0x100cd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x100CD4u, 0x100CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CDCu;
label_100cdc:
    // 0x100cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100ce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x100ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100ce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x100ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x100cec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x100cecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100cf0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x100cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x100cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x100CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CF4u;
        // 0x100cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100CFCu;
}
