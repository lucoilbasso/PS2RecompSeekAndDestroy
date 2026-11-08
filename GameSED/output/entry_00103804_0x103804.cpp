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

// Function: entry_00103804
// Address: 0x103804 - 0x103828
void entry_00103804_0x103804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103804_0x103804");
#endif

    ctx->pc = 0x103804u;

label_103804:
    // 0x103804: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x103804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_103808:
    // 0x103808: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_10380c:
    if (ctx->pc == 0x10380Cu) {
        ctx->pc = 0x10380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103808u;
        // 0x10380c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103810u;
        goto label_103810;
    }
    ctx->pc = 0x103808u;
    {
        const bool branch_taken_0x103808 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103808u;
        // 0x10380c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103808) {
            ctx->pc = 0x103828u;
            return;
        }
    }
    ctx->pc = 0x103810u;
label_103810:
    // 0x103810: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x103810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_103814:
    // 0x103814: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x103814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_103818:
    // 0x103818: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x103818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_10381c:
    // 0x10381c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10381cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103820:
    // 0x103820: 0x40f809  jalr        $v0
label_103824:
    if (ctx->pc == 0x103824u) {
        ctx->pc = 0x103824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103820u;
        // 0x103824: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103828u;
        goto label_fallthrough_0x103820;
    }
    ctx->pc = 0x103820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x103828u);
        ctx->pc = 0x103824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103820u;
        // 0x103824: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103820u, 0x103828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x103820:
    ctx->pc = 0x103828u;
}
