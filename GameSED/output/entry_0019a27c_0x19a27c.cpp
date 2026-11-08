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

// Function: entry_0019a27c
// Address: 0x19a27c - 0x19a2a8
void entry_0019a27c_0x19a27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a27c_0x19a27c");
#endif

    switch (ctx->pc) {
        case 0x19a284u: goto label_19a284;
        default: break;
    }

    ctx->pc = 0x19a27cu;

    // 0x19a27c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19A27Cu;
    SET_GPR_U32(ctx, 31, 0x19A284u);
    ctx->pc = 0x19A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A27Cu;
    // 0x19a280: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19A27Cu, 0x19A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A284u;
label_19a284:
    // 0x19a284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a288: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A288u;
    {
        const bool branch_taken_0x19a288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A288u;
        // 0x19a28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a288) {
            ctx->pc = 0x19A2A8u;
            return;
        }
    }
    ctx->pc = 0x19A290u;
    // 0x19a290: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x19a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19a294: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x19a294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x19a298: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19a298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19a29c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19a29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19a2a4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x19a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x19a2a8u;
}
