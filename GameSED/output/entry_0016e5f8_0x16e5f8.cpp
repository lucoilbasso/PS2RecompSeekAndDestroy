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

// Function: entry_0016e5f8
// Address: 0x16e5f8 - 0x16e638
void entry_0016e5f8_0x16e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e5f8_0x16e5f8");
#endif

    ctx->pc = 0x16e5f8u;

label_16e5f8:
    // 0x16e5f8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x16e5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_16e5fc:
    // 0x16e5fc: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x16e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_16e600:
    // 0x16e600: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x16e600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_16e604:
    // 0x16e604: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x16e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_16e608:
    // 0x16e608: 0xe7b500b0  swc1        $f21, 0xB0($sp)
    ctx->pc = 0x16e608u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16e60c:
    // 0x16e60c: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x16e60cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_16e610:
    // 0x16e610: 0x8e2301e0  lw          $v1, 0x1E0($s1)
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_16e614:
    // 0x16e614: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x16e614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_16e618:
    // 0x16e618: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_16e61c:
    if (ctx->pc == 0x16E61Cu) {
        ctx->pc = 0x16E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E618u;
        // 0x16e61c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E620u;
        goto label_16e620;
    }
    ctx->pc = 0x16E618u;
    {
        const bool branch_taken_0x16e618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E618u;
        // 0x16e61c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e618) {
            ctx->pc = 0x16E6FCu;
            return;
        }
    }
    ctx->pc = 0x16E620u;
label_16e620:
    // 0x16e620: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16e620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16e624:
    // 0x16e624: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16e624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16e628:
    // 0x16e628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16e62c:
    // 0x16e62c: 0x8c6374f0  lw          $v1, 0x74F0($v1)
    ctx->pc = 0x16e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29936)));
label_16e630:
    // 0x16e630: 0x600008  jr          $v1
label_16e634:
    if (ctx->pc == 0x16E634u) {
        ctx->pc = 0x16E638u;
        goto label_fallthrough_0x16e630;
    }
    ctx->pc = 0x16E630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x16e630:
    ctx->pc = 0x16E638u;
}
