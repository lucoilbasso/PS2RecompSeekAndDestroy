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

// Function: entry_0010d630
// Address: 0x10d630 - 0x10d65c
void entry_0010d630_0x10d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d630_0x10d630");
#endif

    switch (ctx->pc) {
        case 0x10d638u: goto label_10d638;
        default: break;
    }

    ctx->pc = 0x10d630u;

    // 0x10d630: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10D630u;
    SET_GPR_U32(ctx, 31, 0x10D638u);
    ctx->pc = 0x10D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D630u;
    // 0x10d634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10D630u, 0x10D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D638u;
label_10d638:
    // 0x10d638: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x10d638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x10d63c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10d63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d640: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x10d640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x10d644: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x10d644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x10d648: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10d64c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d654: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d658: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->pc = 0x10d65cu;
}
