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

// Function: entry_001c6848
// Address: 0x1c6848 - 0x1c6888
void entry_001c6848_0x1c6848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6848_0x1c6848");
#endif

    switch (ctx->pc) {
        case 0x1c6858u: goto label_1c6858;
        default: break;
    }

    ctx->pc = 0x1c6848u;

    // 0x1c6848: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c684c: 0xdc25ba00  ld          $a1, -0x4600($at)
    ctx->pc = 0x1c684cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA00u));
    // 0x1c6850: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C6850u;
    SET_GPR_U32(ctx, 31, 0x1C6858u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C6850u, 0x1C6858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6858u;
label_1c6858:
    // 0x1c6858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c685c: 0x3c023ff9  lui         $v0, 0x3FF9
    ctx->pc = 0x1c685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16377 << 16));
    // 0x1c6860: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1c6860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x1c6864: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6864u;
    {
        const bool branch_taken_0x1c6864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6864) {
            ctx->pc = 0x1C6888u;
            return;
        }
    }
    ctx->pc = 0x1C686Cu;
    // 0x1c686c: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6870: 0xdc30ba08  ld          $s0, -0x45F8($at)
    ctx->pc = 0x1c6870u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25BA08u));
    // 0x1c6874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c687c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C687Cu;
    {
        const bool branch_taken_0x1c687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c687c) {
            ctx->pc = 0x1C68B0u;
            return;
        }
    }
    ctx->pc = 0x1C6884u;
    // 0x1c6884: 0x0  nop
    ctx->pc = 0x1c6884u;
    // NOP
    ctx->pc = 0x1c6888u;
}
