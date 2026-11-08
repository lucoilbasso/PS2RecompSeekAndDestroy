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

// Function: entry_0013643c
// Address: 0x13643c - 0x136470
void entry_0013643c_0x13643c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013643c_0x13643c");
#endif

    switch (ctx->pc) {
        case 0x136454u: goto label_136454;
        default: break;
    }

    ctx->pc = 0x13643cu;

    // 0x13643c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x13643cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x136440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x136440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x136444: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x136444u;
    {
        const bool branch_taken_0x136444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136444u;
        // 0x136448: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136444) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x13644Cu;
    // 0x13644c: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x13644Cu;
    SET_GPR_U32(ctx, 31, 0x136454u);
    ctx->pc = 0x136450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13644Cu;
    // 0x136450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13644Cu, 0x136454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136454u;
label_136454:
    // 0x136454: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x136454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x136458: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x136458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13645c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x136460: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x136460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x136464: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x136464u;
    {
        const bool branch_taken_0x136464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136464u;
        // 0x136468: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136464) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x13646Cu;
    // 0x13646c: 0x0  nop
    ctx->pc = 0x13646cu;
    // NOP
    ctx->pc = 0x136470u;
}
