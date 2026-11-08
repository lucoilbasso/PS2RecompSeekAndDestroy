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

// Function: entry_001ded38
// Address: 0x1ded38 - 0x1ded60
void entry_001ded38_0x1ded38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ded38_0x1ded38");
#endif

    ctx->pc = 0x1ded38u;

label_1ded38:
    // 0x1ded38: 0x25280150  addiu       $t0, $t1, 0x150
    ctx->pc = 0x1ded38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
label_1ded3c:
    // 0x1ded3c: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1ded3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1ded40:
    // 0x1ded40: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1ded44:
    if (ctx->pc == 0x1DED44u) {
        ctx->pc = 0x1DED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED40u;
        // 0x1ded44: 0xa505000e  sh          $a1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DED48u;
        goto label_1ded48;
    }
    ctx->pc = 0x1DED40u;
    {
        const bool branch_taken_0x1ded40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED40u;
        // 0x1ded44: 0xa505000e  sh          $a1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded40) {
            ctx->pc = 0x1DEDBCu;
            return;
        }
    }
    ctx->pc = 0x1DED48u;
label_1ded48:
    // 0x1ded48: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ded48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ded4c:
    // 0x1ded4c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1ded4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1ded50:
    // 0x1ded50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ded50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ded54:
    // 0x1ded54: 0x8c638010  lw          $v1, -0x7FF0($v1)
    ctx->pc = 0x1ded54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934544)));
label_1ded58:
    // 0x1ded58: 0x600008  jr          $v1
label_1ded5c:
    if (ctx->pc == 0x1DED5Cu) {
        ctx->pc = 0x1DED60u;
        goto label_fallthrough_0x1ded58;
    }
    ctx->pc = 0x1DED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DED58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ded58:
    ctx->pc = 0x1DED60u;
}
