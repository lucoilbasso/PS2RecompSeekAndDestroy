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

// Function: Init__8ApcMCardP22W_MCARD_INIT_PARAMETER
// Address: 0x11c840 - 0x11c884
void Init__8ApcMCardP22W_MCARD_INIT_PARAMETER_0x11c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8ApcMCardP22W_MCARD_INIT_PARAMETER_0x11c840");
#endif

    switch (ctx->pc) {
        case 0x11c85cu: goto label_11c85c;
        case 0x11c870u: goto label_11c870;
        default: break;
    }

    ctx->pc = 0x11c840u;

    // 0x11c840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c84c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11c850: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c854: 0xc05e518  jal         func_179460
    ctx->pc = 0x11C854u;
    SET_GPR_U32(ctx, 31, 0x11C85Cu);
    ctx->pc = 0x11C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C854u;
    // 0x11c858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179460u, 0x11C854u, 0x11C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C85Cu;
label_11c85c:
    // 0x11c85c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x11c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11c860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c864: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11c864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11c868: 0xc047222  jal         func_11C888
    ctx->pc = 0x11C868u;
    SET_GPR_U32(ctx, 31, 0x11C870u);
    ctx->pc = 0x11C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C868u;
    // 0x11c86c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C888u, 0x11C868u, 0x11C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C870u;
label_11c870:
    // 0x11c870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c87c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C87Cu;
        // 0x11c880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C884u;
}
