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

// Function: entry_0019a790
// Address: 0x19a790 - 0x19a7c0
void entry_0019a790_0x19a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a790_0x19a790");
#endif

    switch (ctx->pc) {
        case 0x19a798u: goto label_19a798;
        default: break;
    }

    ctx->pc = 0x19a790u;

    // 0x19a790: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19A790u;
    SET_GPR_U32(ctx, 31, 0x19A798u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19A790u, 0x19A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A798u;
label_19a798:
    // 0x19a798: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a79c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A79Cu;
    {
        const bool branch_taken_0x19a79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A79Cu;
        // 0x19a7a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a79c) {
            ctx->pc = 0x19A7C0u;
            return;
        }
    }
    ctx->pc = 0x19A7A4u;
    // 0x19a7a4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x19a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19a7a8: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x19a7a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x19a7ac: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x19a7acu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x19a7b0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x19a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x19a7b4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x19a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x19a7b8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x19a7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x19a7c0u;
}
