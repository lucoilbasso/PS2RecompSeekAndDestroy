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

// Function: entry_00135f28
// Address: 0x135f28 - 0x135f54
void entry_00135f28_0x135f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135f28_0x135f28");
#endif

    switch (ctx->pc) {
        case 0x135f44u: goto label_135f44;
        case 0x135f50u: goto label_135f50;
        default: break;
    }

    ctx->pc = 0x135f28u;

    // 0x135f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x135f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x135f2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x135f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x135f30: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x135f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x135f34: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x135F34u;
    {
        const bool branch_taken_0x135f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x135F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F34u;
        // 0x135f38: 0x8c520024  lw          $s2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f34) {
            ctx->pc = 0x135F54u;
            return;
        }
    }
    ctx->pc = 0x135F3Cu;
    // 0x135f3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x135F3Cu;
    SET_GPR_U32(ctx, 31, 0x135F44u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x135F3Cu, 0x135F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F44u;
label_135f44:
    // 0x135f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f48: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x135F48u;
    SET_GPR_U32(ctx, 31, 0x135F50u);
    ctx->pc = 0x135F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F48u;
    // 0x135f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x135F48u, 0x135F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F50u;
label_135f50:
    // 0x135f50: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x135f50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x135f54u;
}
