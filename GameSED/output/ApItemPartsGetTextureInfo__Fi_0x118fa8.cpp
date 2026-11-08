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

// Function: ApItemPartsGetTextureInfo__Fi
// Address: 0x118fa8 - 0x118fcc
void ApItemPartsGetTextureInfo__Fi_0x118fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemPartsGetTextureInfo__Fi_0x118fa8");
#endif

    ctx->pc = 0x118fa8u;

    // 0x118fa8: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x118fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x118fac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x118facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x118fb0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x118fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x118fb4: 0x2884002a  slti        $a0, $a0, 0x2A
    ctx->pc = 0x118fb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)42) ? 1 : 0);
    // 0x118fb8: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x118fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x118fbc: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x118fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x118fc0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x118fc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x118fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x118FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FC4u;
        // 0x118fc8: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118FCCu;
}
