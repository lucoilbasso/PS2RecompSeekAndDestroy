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

// Function: SetMini__20ApItemGameInfomationi
// Address: 0x118768 - 0x1187a8
void SetMini__20ApItemGameInfomationi_0x118768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMini__20ApItemGameInfomationi_0x118768");
#endif

    switch (ctx->pc) {
        case 0x11878cu: goto label_11878c;
        default: break;
    }

    ctx->pc = 0x118768u;

    // 0x118768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11876c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x118770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118778: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11877c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x11877cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118784: 0xc0461ea  jal         func_1187A8
    ctx->pc = 0x118784u;
    SET_GPR_U32(ctx, 31, 0x11878Cu);
    ctx->pc = 0x118788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118784u;
    // 0x118788: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A8u, 0x118784u, 0x11878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11878Cu;
label_11878c:
    // 0x11878c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118794: 0xae021c70  sw          $v0, 0x1C70($s0)
    ctx->pc = 0x118794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7280), GPR_U32(ctx, 2));
    // 0x118798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11879c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11879cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1187a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1187A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1187A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187A0u;
        // 0x1187a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1187A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1187A8u;
}
