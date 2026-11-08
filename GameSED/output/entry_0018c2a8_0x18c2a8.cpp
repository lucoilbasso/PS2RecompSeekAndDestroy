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

// Function: entry_0018c2a8
// Address: 0x18c2a8 - 0x18c300
void entry_0018c2a8_0x18c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c2a8_0x18c2a8");
#endif

    switch (ctx->pc) {
        case 0x18c2ecu: goto label_18c2ec;
        case 0x18c2f8u: goto label_18c2f8;
        default: break;
    }

    ctx->pc = 0x18c2a8u;

    // 0x18c2a8: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x18c2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x18c2ac: 0x2631d640  addiu       $s1, $s1, -0x29C0
    ctx->pc = 0x18c2acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956608));
    // 0x18c2b0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x18c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x18c2b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c2b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D644u));
    // 0x18c2bc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x18c2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x18c2c0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18c2c4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c2c8: 0x2484d000  addiu       $a0, $a0, -0x3000
    ctx->pc = 0x18c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955008));
    // 0x18c2cc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18c2d0: 0x44202b  sltu        $a0, $v0, $a0
    ctx->pc = 0x18c2d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x18c2d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18c2d8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C2D8u;
    {
        const bool branch_taken_0x18c2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2D8u;
        // 0x18c2dc: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2d8) {
            ctx->pc = 0x18C300u;
            return;
        }
    }
    ctx->pc = 0x18C2E0u;
    // 0x18c2e0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x18c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x18c2e4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x18C2E4u;
    SET_GPR_U32(ctx, 31, 0x18C2ECu);
    ctx->pc = 0x18C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C2E4u;
    // 0x18c2e8: 0x24847fe0  addiu       $a0, $a0, 0x7FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x18C2E4u, 0x18C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C2ECu;
label_18c2ec:
    // 0x18c2ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2f0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x18C2F0u;
    SET_GPR_U32(ctx, 31, 0x18C2F8u);
    ctx->pc = 0x18C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C2F0u;
    // 0x18c2f4: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x18C2F0u, 0x18C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C2F8u;
label_18c2f8:
    // 0x18c2f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C2F8u;
    {
        const bool branch_taken_0x18c2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2F8u;
        // 0x18c2fc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2f8) {
            ctx->pc = 0x18C308u;
            return;
        }
    }
    ctx->pc = 0x18C300u;
}
