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

// Function: entry_0013b8b8
// Address: 0x13b8b8 - 0x13b8fc
void entry_0013b8b8_0x13b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b8b8_0x13b8b8");
#endif

    switch (ctx->pc) {
        case 0x13b8d4u: goto label_13b8d4;
        default: break;
    }

    ctx->pc = 0x13b8b8u;

    // 0x13b8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8bc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x13b8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b8c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13b8c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13b8c4: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x13b8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b8c8: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x13b8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x13b8cc: 0xc04ee64  jal         func_13B990
    ctx->pc = 0x13B8CCu;
    SET_GPR_U32(ctx, 31, 0x13B8D4u);
    ctx->pc = 0x13B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8CCu;
    // 0x13b8d0: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B990u, 0x13B8CCu, 0x13B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8D4u;
label_13b8d4:
    // 0x13b8d4: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x13b8d4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b8d8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x13b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x13b8dc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13b8e0: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x13b8e0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b8e4: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x13b8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13b8e8: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x13b8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13b8ec: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x13b8ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x13b8f0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x13b8f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13b8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13b8f8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x13b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x13b8fcu;
}
