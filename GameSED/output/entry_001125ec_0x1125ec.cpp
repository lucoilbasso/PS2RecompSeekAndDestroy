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

// Function: entry_001125ec
// Address: 0x1125ec - 0x112618
void entry_001125ec_0x1125ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001125ec_0x1125ec");
#endif

    switch (ctx->pc) {
        case 0x1125f4u: goto label_1125f4;
        default: break;
    }

    ctx->pc = 0x1125ecu;

label_1125ec:
    // 0x1125ec: 0xc06a26e  jal         func_1A89B8
label_1125f0:
    if (ctx->pc == 0x1125F0u) {
        ctx->pc = 0x1125F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125ECu;
        // 0x1125f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125F4u;
        goto label_1125f4;
    }
    ctx->pc = 0x1125ECu;
    SET_GPR_U32(ctx, 31, 0x1125F4u);
    ctx->pc = 0x1125F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125ECu;
    // 0x1125f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1125ECu, 0x1125F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125F4u;
label_1125f4:
    // 0x1125f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1125f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1125f8:
    // 0x1125f8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1125f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1125fc:
    // 0x1125fc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_112600:
    if (ctx->pc == 0x112600u) {
        ctx->pc = 0x112600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125FCu;
        // 0x112600: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112604u;
        goto label_112604;
    }
    ctx->pc = 0x1125FCu;
    {
        const bool branch_taken_0x1125fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125FCu;
        // 0x112600: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125fc) {
            ctx->pc = 0x112694u;
            return;
        }
    }
    ctx->pc = 0x112604u;
label_112604:
    // 0x112604: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x112604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_112608:
    // 0x112608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11260c:
    // 0x11260c: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x11260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_112610:
    // 0x112610: 0x600008  jr          $v1
label_112614:
    if (ctx->pc == 0x112614u) {
        ctx->pc = 0x112618u;
        goto label_fallthrough_0x112610;
    }
    ctx->pc = 0x112610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112610u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x112610:
    ctx->pc = 0x112618u;
}
