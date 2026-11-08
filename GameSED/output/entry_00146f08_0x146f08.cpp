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

// Function: entry_00146f08
// Address: 0x146f08 - 0x146f9c
void entry_00146f08_0x146f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146f08_0x146f08");
#endif

    switch (ctx->pc) {
        case 0x146f28u: goto label_146f28;
        case 0x146f98u: goto label_146f98;
        default: break;
    }

    ctx->pc = 0x146f08u;

    // 0x146f08: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x146F08u;
    {
        const bool branch_taken_0x146f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F08u;
        // 0x146f0c: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f08) {
            ctx->pc = 0x146FA0u;
            return;
        }
    }
    ctx->pc = 0x146F10u;
    // 0x146f10: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x146f10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x146f14: 0x36100540  ori         $s0, $s0, 0x540
    ctx->pc = 0x146f14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1344);
    // 0x146f18: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x146f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x146f1c: 0x26c50070  addiu       $a1, $s6, 0x70
    ctx->pc = 0x146f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x146f20: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x146F20u;
    SET_GPR_U32(ctx, 31, 0x146F28u);
    ctx->pc = 0x146F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F20u;
    // 0x146f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x146F20u, 0x146F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F28u;
label_146f28:
    // 0x146f28: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x146f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x146f2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x146f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146f34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x146f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f38: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146f3c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x146f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x146f40: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x146f40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x146f44: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x146f44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x146f48: 0x35088001  ori         $t0, $t0, 0x8001
    ctx->pc = 0x146f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32769);
    // 0x146f4c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x146f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x146f50: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x146f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x146f54: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x146f54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x146f58: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x146f58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x146f5c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x146f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x146f60: 0xfce80000  sd          $t0, 0x0($a3)
    ctx->pc = 0x146f60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 8));
    // 0x146f64: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x146f64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x146f68: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x146f68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x146f6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146f70: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x146f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x146f74: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x146f74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x146f78: 0x28420051  slti        $v0, $v0, 0x51
    ctx->pc = 0x146f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x146f7c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x146F7Cu;
    {
        const bool branch_taken_0x146f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146f7c) {
            ctx->pc = 0x146F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146F7Cu;
            // 0x146f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146F9Cu;
            return;
        }
    }
    ctx->pc = 0x146F84u;
    // 0x146f84: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x146f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x146f88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x146f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f8c: 0x24a56b10  addiu       $a1, $a1, 0x6B10
    ctx->pc = 0x146f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27408));
    // 0x146f90: 0xc068186  jal         func_1A0618
    ctx->pc = 0x146F90u;
    SET_GPR_U32(ctx, 31, 0x146F98u);
    ctx->pc = 0x146F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F90u;
    // 0x146f94: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x146F90u, 0x146F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F98u;
label_146f98:
    // 0x146f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x146f9cu;
}
