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

// Function: entry_00134c64
// Address: 0x134c64 - 0x134c98
void entry_00134c64_0x134c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c64_0x134c64");
#endif

    switch (ctx->pc) {
        case 0x134c90u: goto label_134c90;
        default: break;
    }

    ctx->pc = 0x134c64u;

    // 0x134c64: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x134c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134c68: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x134c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134c6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134c74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134c78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134c7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x134c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c80: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x134c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x134c84: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x134c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c88: 0xc04e7e8  jal         func_139FA0
    ctx->pc = 0x134C88u;
    SET_GPR_U32(ctx, 31, 0x134C90u);
    ctx->pc = 0x134C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C88u;
    // 0x134c8c: 0x122400b  movn        $t0, $t1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FA0u, 0x134C88u, 0x134C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C90u;
label_134c90:
    // 0x134c90: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x134C90u;
    {
        const bool branch_taken_0x134c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C90u;
        // 0x134c94: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c90) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134C98u;
}
