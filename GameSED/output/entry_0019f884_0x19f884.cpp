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

// Function: entry_0019f884
// Address: 0x19f884 - 0x19f8d0
void entry_0019f884_0x19f884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f884_0x19f884");
#endif

    switch (ctx->pc) {
        case 0x19f8b4u: goto label_19f8b4;
        default: break;
    }

    ctx->pc = 0x19f884u;

    // 0x19f884: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x19f884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f888: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f88c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19f890: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x19f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x19f894: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x19f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x19f898: 0x73f02  srl         $a3, $a3, 28
    ctx->pc = 0x19f898u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
    // 0x19f89c: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x19f89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x19f8a0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x19f8a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x19f8a4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x19f8a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8a8: 0x26490010  addiu       $t1, $s2, 0x10
    ctx->pc = 0x19f8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x19f8ac: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x19F8ACu;
    SET_GPR_U32(ctx, 31, 0x19F8B4u);
    ctx->pc = 0x19F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8ACu;
    // 0x19f8b0: 0x27c48760  addiu       $a0, $fp, -0x78A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x19F8ACu, 0x19F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8B4u;
label_19f8b4:
    // 0x19f8b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f8b8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x19f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x19f8bc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x19f8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19f8c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f8c4: 0x769824  and         $s3, $v1, $s6
    ctx->pc = 0x19f8c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x19f8c8: 0x1660ffbb  bnez        $s3, . + 4 + (-0x45 << 2)
    ctx->pc = 0x19F8C8u;
    {
        const bool branch_taken_0x19f8c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8C8u;
        // 0x19f8cc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8c8) {
            ctx->pc = 0x19F7B8u;
            return;
        }
    }
    ctx->pc = 0x19F8D0u;
}
