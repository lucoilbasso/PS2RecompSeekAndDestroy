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

// Function: entry_00186f30
// Address: 0x186f30 - 0x186fa8
void entry_00186f30_0x186f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186f30_0x186f30");
#endif

    switch (ctx->pc) {
        case 0x186f94u: goto label_186f94;
        case 0x186fa0u: goto label_186fa0;
        default: break;
    }

    ctx->pc = 0x186f30u;

    // 0x186f30: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x186f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x186f34: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x186f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x186f38: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x186f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x186f3c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x186f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x186f40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186f44: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x186f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x186f48: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x186f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x186f4c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x186f50: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x186f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x186f54: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x186f54u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x186f58: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x186f58u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x186f5c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x186f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x186f60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x186f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x186f64: 0x2484d000  addiu       $a0, $a0, -0x3000
    ctx->pc = 0x186f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955008));
    // 0x186f68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x186f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186f6c: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x186f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x186f70: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x186f70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x186f74: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x186f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186f78: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x186f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x186f7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186f80: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x186F80u;
    {
        const bool branch_taken_0x186f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F80u;
        // 0x186f84: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f80) {
            ctx->pc = 0x186FA8u;
            return;
        }
    }
    ctx->pc = 0x186F88u;
    // 0x186f88: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x186f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x186f8c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x186F8Cu;
    SET_GPR_U32(ctx, 31, 0x186F94u);
    ctx->pc = 0x186F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F8Cu;
    // 0x186f90: 0x24847ef0  addiu       $a0, $a0, 0x7EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x186F8Cu, 0x186F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F94u;
label_186f94:
    // 0x186f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f98: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x186F98u;
    SET_GPR_U32(ctx, 31, 0x186FA0u);
    ctx->pc = 0x186F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F98u;
    // 0x186f9c: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x186F98u, 0x186FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FA0u;
label_186fa0:
    // 0x186fa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x186FA0u;
    {
        const bool branch_taken_0x186fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FA0u;
        // 0x186fa4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fa0) {
            ctx->pc = 0x186FB0u;
            return;
        }
    }
    ctx->pc = 0x186FA8u;
}
