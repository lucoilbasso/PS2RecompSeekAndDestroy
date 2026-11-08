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

// Function: entry_0014f67c
// Address: 0x14f67c - 0x14f6cc
void entry_0014f67c_0x14f67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f67c_0x14f67c");
#endif

    switch (ctx->pc) {
        case 0x14f6a8u: goto label_14f6a8;
        default: break;
    }

    ctx->pc = 0x14f67cu;

    // 0x14f67c: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x14f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x14f680: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x14f680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14f684: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x14f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x14f688: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x14f688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f68c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14f68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f690: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14f690u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14f694: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14f694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14f698: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x14f698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f69c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x14f69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6a0: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x14F6A0u;
    SET_GPR_U32(ctx, 31, 0x14F6A8u);
    ctx->pc = 0x14F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6A0u;
    // 0x14f6a4: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x14F6A0u, 0x14F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6A8u;
label_14f6a8:
    // 0x14f6a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F6A8u;
    {
        const bool branch_taken_0x14f6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6A8u;
        // 0x14f6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6a8) {
            ctx->pc = 0x14F6CCu;
            return;
        }
    }
    ctx->pc = 0x14F6B0u;
    // 0x14f6b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14f6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14f6b4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x14f6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x14f6b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14f6bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14f6c0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x14f6c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x14f6c4: 0xc04e416  jal         func_139058
    ctx->pc = 0x14F6C4u;
    SET_GPR_U32(ctx, 31, 0x14F6CCu);
    ctx->pc = 0x14F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6C4u;
    // 0x14f6c8: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139058u, 0x14F6C4u, 0x14F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6CCu;
}
