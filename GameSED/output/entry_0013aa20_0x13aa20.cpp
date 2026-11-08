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

// Function: entry_0013aa20
// Address: 0x13aa20 - 0x13aa8c
void entry_0013aa20_0x13aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aa20_0x13aa20");
#endif

    switch (ctx->pc) {
        case 0x13aa38u: goto label_13aa38;
        case 0x13aa4cu: goto label_13aa4c;
        case 0x13aa60u: goto label_13aa60;
        default: break;
    }

    ctx->pc = 0x13aa20u;

    // 0x13aa20: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x13aa20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x13aa24: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x13aa24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13aa28: 0x2610a8f8  addiu       $s0, $s0, -0x5708
    ctx->pc = 0x13aa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945016));
    // 0x13aa2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa30: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x13AA30u;
    SET_GPR_U32(ctx, 31, 0x13AA38u);
    ctx->pc = 0x13AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA30u;
    // 0x13aa34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x13AA30u, 0x13AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA38u;
label_13aa38:
    // 0x13aa38: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x13aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13aa3c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x13aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13aa40: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13aa40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13aa44: 0xc06164c  jal         func_185930
    ctx->pc = 0x13AA44u;
    SET_GPR_U32(ctx, 31, 0x13AA4Cu);
    ctx->pc = 0x13AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA44u;
    // 0x13aa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13AA44u, 0x13AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA4Cu;
label_13aa4c:
    // 0x13aa4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13aa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13aa54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa58: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13AA58u;
    SET_GPR_U32(ctx, 31, 0x13AA60u);
    ctx->pc = 0x13AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA58u;
    // 0x13aa5c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13AA58u, 0x13AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA60u;
label_13aa60:
    // 0x13aa60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13aa60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13aa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa6c: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13aa70: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x13aa70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13aa78: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13aa7c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AA7Cu;
    {
        const bool branch_taken_0x13aa7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA7Cu;
        // 0x13aa80: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa7c) {
            ctx->pc = 0x13AA8Cu;
            return;
        }
    }
    ctx->pc = 0x13AA84u;
    // 0x13aa84: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x13aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x13aa88: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13aa88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13aa8cu;
}
