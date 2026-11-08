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

// Function: entry_00164cb4
// Address: 0x164cb4 - 0x164d04
void entry_00164cb4_0x164cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164cb4_0x164cb4");
#endif

    switch (ctx->pc) {
        case 0x164cccu: goto label_164ccc;
        case 0x164cecu: goto label_164cec;
        default: break;
    }

    ctx->pc = 0x164cb4u;

    // 0x164cb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x164cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x164cb8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x164cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x164cbc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x164cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x164cc0: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x164cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x164cc4: 0xc04110c  jal         func_104430
    ctx->pc = 0x164CC4u;
    SET_GPR_U32(ctx, 31, 0x164CCCu);
    ctx->pc = 0x164CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CC4u;
    // 0x164cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x164CC4u, 0x164CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164CCCu;
label_164ccc:
    // 0x164ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cd4: 0x24021846  addiu       $v0, $zero, 0x1846
    ctx->pc = 0x164cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x164cd8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x164cd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164cdc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164CDCu;
    {
        const bool branch_taken_0x164cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CDCu;
        // 0x164ce0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cdc) {
            ctx->pc = 0x164D04u;
            return;
        }
    }
    ctx->pc = 0x164CE4u;
    // 0x164ce4: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x164CE4u;
    SET_GPR_U32(ctx, 31, 0x164CECu);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x164CE4u, 0x164CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164CECu;
label_164cec:
    // 0x164cec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x164cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x164cf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x164cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cf4: 0x24a56ff0  addiu       $a1, $a1, 0x6FF0
    ctx->pc = 0x164cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28656));
    // 0x164cf8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x164cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cfc: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x164CFCu;
    SET_GPR_U32(ctx, 31, 0x164D04u);
    ctx->pc = 0x164D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CFCu;
    // 0x164d00: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x164CFCu, 0x164D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D04u;
}
