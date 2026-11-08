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

// Function: entry_00122978
// Address: 0x122978 - 0x122a30
void entry_00122978_0x122978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122978_0x122978");
#endif

    switch (ctx->pc) {
        case 0x1229acu: goto label_1229ac;
        case 0x1229c4u: goto label_1229c4;
        case 0x122a24u: goto label_122a24;
        default: break;
    }

    ctx->pc = 0x122978u;

    // 0x122978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12297c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x12297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x122980: 0x14430171  bne         $v0, $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x122980u;
    {
        const bool branch_taken_0x122980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x122984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122980u;
        // 0x122984: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122980) {
            ctx->pc = 0x122F48u;
            return;
        }
    }
    ctx->pc = 0x122988u;
    // 0x122988: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x122988u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x12298c: 0x5440016f  bnel        $v0, $zero, . + 4 + (0x16F << 2)
    ctx->pc = 0x12298Cu;
    {
        const bool branch_taken_0x12298c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12298c) {
            ctx->pc = 0x122990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12298Cu;
            // 0x122990: 0xa640002e  sh          $zero, 0x2E($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122F4Cu;
            return;
        }
    }
    ctx->pc = 0x122994u;
    // 0x122994: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x122994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x122998: 0x12a20051  beq         $s5, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x122998u;
    {
        const bool branch_taken_0x122998 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x12299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122998u;
        // 0x12299c: 0x26530110  addiu       $s3, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122998) {
            ctx->pc = 0x122AE0u;
            return;
        }
    }
    ctx->pc = 0x1229A0u;
    // 0x1229a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1229a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229a4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1229A4u;
    SET_GPR_U32(ctx, 31, 0x1229ACu);
    ctx->pc = 0x1229A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229A4u;
    // 0x1229a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1229A4u, 0x1229ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229ACu;
label_1229ac:
    // 0x1229ac: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1229acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1229b0: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x1229b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
    // 0x1229b4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1229b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1229b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1229b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1229bc: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x1229BCu;
    SET_GPR_U32(ctx, 31, 0x1229C4u);
    ctx->pc = 0x1229C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229BCu;
    // 0x1229c0: 0x8e4500d0  lw          $a1, 0xD0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x1229BCu, 0x1229C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229C4u;
label_1229c4:
    // 0x1229c4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1229c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1229c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1229c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1229ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1229d0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1229d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1229d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1229d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1229d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1229dc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1229dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1229e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1229e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1229e4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1229e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1229e8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1229e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1229ec: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x1229ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x1229f0: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x1229f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1229f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1229f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1229f8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1229f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1229fc: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1229fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x122a00: 0x26b50a00  addiu       $s5, $s5, 0xA00
    ctx->pc = 0x122a00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2560));
    // 0x122a04: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x122a04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x122a08: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x122a08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a0c: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x122a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x122a10: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x122a10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a14: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x122a14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x122a18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x122a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a1c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122A1Cu;
    SET_GPR_U32(ctx, 31, 0x122A24u);
    ctx->pc = 0x122A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A1Cu;
    // 0x122a20: 0x8f848c64  lw          $a0, -0x739C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122A1Cu, 0x122A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A24u;
label_122a24:
    // 0x122a24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x122a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x122a28: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x122a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x122a2c: 0x0  nop
    ctx->pc = 0x122a2cu;
    // NOP
    ctx->pc = 0x122a30u;
}
