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

// Function: entry_00101974
// Address: 0x101974 - 0x1019bc
void entry_00101974_0x101974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101974_0x101974");
#endif

    switch (ctx->pc) {
        case 0x10197cu: goto label_10197c;
        default: break;
    }

    ctx->pc = 0x101974u;

    // 0x101974: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101974u;
    SET_GPR_U32(ctx, 31, 0x10197Cu);
    ctx->pc = 0x101978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101974u;
    // 0x101978: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101974u, 0x10197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10197Cu;
label_10197c:
    // 0x10197c: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x10197cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x101980: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x101980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101984: 0x32a20100  andi        $v0, $s5, 0x100
    ctx->pc = 0x101984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x101988: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x101988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10198c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10198cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x101990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101994: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x101994u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x101998: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x101998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x10199c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1019a0: 0x8c42afe0  lw          $v0, -0x5020($v0)
    ctx->pc = 0x1019a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946784)));
    // 0x1019a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1019a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1019a8: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1019A8u;
    {
        const bool branch_taken_0x1019a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1019ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019A8u;
        // 0x1019ac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1019a8) {
            ctx->pc = 0x1019BCu;
            return;
        }
    }
    ctx->pc = 0x1019B0u;
    // 0x1019b0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1019b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1019b4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1019b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1019b8: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x1019b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->pc = 0x1019bcu;
}
