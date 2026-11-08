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

// Function: entry_001767d0
// Address: 0x1767d0 - 0x176818
void entry_001767d0_0x1767d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001767d0_0x1767d0");
#endif

    switch (ctx->pc) {
        case 0x1767e8u: goto label_1767e8;
        case 0x17680cu: goto label_17680c;
        default: break;
    }

    ctx->pc = 0x1767d0u;

    // 0x1767d0: 0x10a000d7  beqz        $a1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1767D0u;
    {
        const bool branch_taken_0x1767d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767D0u;
        // 0x1767d4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767d0) {
            ctx->pc = 0x176B30u;
            return;
        }
    }
    ctx->pc = 0x1767D8u;
    // 0x1767d8: 0x26620160  addiu       $v0, $s3, 0x160
    ctx->pc = 0x1767d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x1767dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1767dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767e0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1767E0u;
    SET_GPR_U32(ctx, 31, 0x1767E8u);
    ctx->pc = 0x1767E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767E0u;
    // 0x1767e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1767E0u, 0x1767E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767E8u;
label_1767e8:
    // 0x1767e8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1767ec: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1767ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1767f0: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x1767f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
    // 0x1767f4: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x1767f8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1767f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1767fc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1767fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x176800: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176804: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x176804u;
    SET_GPR_U32(ctx, 31, 0x17680Cu);
    ctx->pc = 0x176808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176804u;
    // 0x176808: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x176804u, 0x17680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17680Cu;
label_17680c:
    // 0x17680c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x176810: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x176810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x176814: 0x0  nop
    ctx->pc = 0x176814u;
    // NOP
    ctx->pc = 0x176818u;
}
