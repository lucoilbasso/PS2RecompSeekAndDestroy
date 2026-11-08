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

// Function: entry_0016c870
// Address: 0x16c870 - 0x16c8b0
void entry_0016c870_0x16c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c870_0x16c870");
#endif

    ctx->pc = 0x16c870u;

label_16c870:
    // 0x16c870: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x16c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_16c874:
    // 0x16c874: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x16c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_16c878:
    // 0x16c878: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x16c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_16c87c:
    // 0x16c87c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x16c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_16c880:
    // 0x16c880: 0xe7b500b0  swc1        $f21, 0xB0($sp)
    ctx->pc = 0x16c880u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16c884:
    // 0x16c884: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x16c884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_16c888:
    // 0x16c888: 0x8e2301e0  lw          $v1, 0x1E0($s1)
    ctx->pc = 0x16c888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_16c88c:
    // 0x16c88c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x16c88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_16c890:
    // 0x16c890: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_16c894:
    if (ctx->pc == 0x16C894u) {
        ctx->pc = 0x16C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C890u;
        // 0x16c894: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C898u;
        goto label_16c898;
    }
    ctx->pc = 0x16C890u;
    {
        const bool branch_taken_0x16c890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C890u;
        // 0x16c894: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c890) {
            ctx->pc = 0x16C974u;
            return;
        }
    }
    ctx->pc = 0x16C898u;
label_16c898:
    // 0x16c898: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16c898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16c89c:
    // 0x16c89c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16c8a0:
    // 0x16c8a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16c8a4:
    // 0x16c8a4: 0x8c637460  lw          $v1, 0x7460($v1)
    ctx->pc = 0x16c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29792)));
label_16c8a8:
    // 0x16c8a8: 0x600008  jr          $v1
label_16c8ac:
    if (ctx->pc == 0x16C8ACu) {
        ctx->pc = 0x16C8B0u;
        goto label_fallthrough_0x16c8a8;
    }
    ctx->pc = 0x16C8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C8A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x16c8a8:
    ctx->pc = 0x16C8B0u;
}
