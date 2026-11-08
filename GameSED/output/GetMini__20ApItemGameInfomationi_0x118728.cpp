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

// Function: GetMini__20ApItemGameInfomationi
// Address: 0x118728 - 0x118764
void GetMini__20ApItemGameInfomationi_0x118728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMini__20ApItemGameInfomationi_0x118728");
#endif

    switch (ctx->pc) {
        case 0x11874cu: goto label_11874c;
        default: break;
    }

    ctx->pc = 0x118728u;

    // 0x118728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11872c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11872cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118730: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x118730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11873c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x11873cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118744: 0xc0461ea  jal         func_1187A8
    ctx->pc = 0x118744u;
    SET_GPR_U32(ctx, 31, 0x11874Cu);
    ctx->pc = 0x118748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118744u;
    // 0x118748: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A8u, 0x118744u, 0x11874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11874Cu;
label_11874c:
    // 0x11874c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11874cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118750: 0x86021c70  lh          $v0, 0x1C70($s0)
    ctx->pc = 0x118750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7280)));
    // 0x118754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11875c: 0x3e00008  jr          $ra
    ctx->pc = 0x11875Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11875Cu;
        // 0x118760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11875Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118764u;
}
