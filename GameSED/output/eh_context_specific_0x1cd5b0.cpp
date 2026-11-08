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

// Function: eh_context_specific
// Address: 0x1cd5b0 - 0x1cd638
void eh_context_specific_0x1cd5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eh_context_specific_0x1cd5b0");
#endif

    switch (ctx->pc) {
        case 0x1cd5ccu: goto label_1cd5cc;
        case 0x1cd5e8u: goto label_1cd5e8;
        case 0x1cd5f0u: goto label_1cd5f0;
        case 0x1cd60cu: goto label_1cd60c;
        case 0x1cd614u: goto label_1cd614;
        default: break;
    }

    ctx->pc = 0x1cd5b0u;

    // 0x1cd5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd5b4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1cd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1cd5b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd5bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd5c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cd5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd5c4: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1CD5C4u;
    SET_GPR_U32(ctx, 31, 0x1CD5CCu);
    ctx->pc = 0x1CD5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD5C4u;
    // 0x1cd5c8: 0x24511cd0  addiu       $s1, $v0, 0x1CD0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 7376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1CD5C4u, 0x1CD5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5CCu;
label_1cd5cc:
    // 0x1cd5cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd5d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cd5d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1cd5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd5d8: 0x56000012  bnel        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CD5D8u;
    {
        const bool branch_taken_0x1cd5d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5d8) {
            ctx->pc = 0x1CD5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD5D8u;
            // 0x1cd5dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD624u;
            goto label_1cd624;
        }
    }
    ctx->pc = 0x1CD5E0u;
    // 0x1cd5e0: 0xc07347c  jal         func_1CD1F0
    ctx->pc = 0x1CD5E0u;
    SET_GPR_U32(ctx, 31, 0x1CD5E8u);
    ctx->pc = 0x1CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1F0u, 0x1CD5E0u, 0x1CD5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5E8u;
label_1cd5e8:
    // 0x1cd5e8: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1CD5E8u;
    SET_GPR_U32(ctx, 31, 0x1CD5F0u);
    ctx->pc = 0x1CD5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD5E8u;
    // 0x1cd5ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1CD5E8u, 0x1CD5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5F0u;
label_1cd5f0:
    // 0x1cd5f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd5f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cd5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cd5f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cd5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd5fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD5FCu;
    {
        const bool branch_taken_0x1cd5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5FCu;
        // 0x1cd600: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5fc) {
            ctx->pc = 0x1CD60Cu;
            goto label_1cd60c;
        }
    }
    ctx->pc = 0x1CD604u;
    // 0x1cd604: 0xc073d72  jal         func_1CF5C8
    ctx->pc = 0x1CD604u;
    SET_GPR_U32(ctx, 31, 0x1CD60Cu);
    ctx->pc = 0x1CF5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF5C8u, 0x1CD604u, 0x1CD60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD60Cu;
label_1cd60c:
    // 0x1cd60c: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1CD60Cu;
    SET_GPR_U32(ctx, 31, 0x1CD614u);
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1CD60Cu, 0x1CD614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD614u;
label_1cd614:
    // 0x1cd614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd618: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cd618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cd61c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1cd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1cd620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd624:
    // 0x1cd624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd62c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd630: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD630u;
        // 0x1cd634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD638u;
}
