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

// Function: entry_0011865c
// Address: 0x11865c - 0x1186a0
void entry_0011865c_0x11865c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011865c_0x11865c");
#endif

    switch (ctx->pc) {
        case 0x11866cu: goto label_11866c;
        default: break;
    }

    ctx->pc = 0x11865cu;

    // 0x11865c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11865cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x118660: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x118660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x118664: 0xc0461a8  jal         func_1186A0
    ctx->pc = 0x118664u;
    SET_GPR_U32(ctx, 31, 0x11866Cu);
    ctx->pc = 0x118668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118664u;
    // 0x118668: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186A0u, 0x118664u, 0x11866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11866Cu;
label_11866c:
    // 0x11866c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x11866cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x118670: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x118670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118674: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x118674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x118678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11867c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x118680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118684: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x118684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x118688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x118688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11868c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x118690: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118694: 0xac431c10  sw          $v1, 0x1C10($v0)
    ctx->pc = 0x118694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7184), GPR_U32(ctx, 3));
    // 0x118698: 0x3e00008  jr          $ra
    ctx->pc = 0x118698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118698u;
        // 0x11869c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1186A0u;
}
