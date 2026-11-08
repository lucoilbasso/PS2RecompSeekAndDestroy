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

// Function: entry_001c557c
// Address: 0x1c557c - 0x1c55f8
void entry_001c557c_0x1c557c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c557c_0x1c557c");
#endif

    switch (ctx->pc) {
        case 0x1c55a4u: goto label_1c55a4;
        case 0x1c55b0u: goto label_1c55b0;
        case 0x1c55e0u: goto label_1c55e0;
        default: break;
    }

    ctx->pc = 0x1c557cu;

    // 0x1c557c: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1c557cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1c5580: 0x2610f340  addiu       $s0, $s0, -0xCC0
    ctx->pc = 0x1c5580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964032));
    // 0x1c5584: 0x2451eec0  addiu       $s1, $v0, -0x1140
    ctx->pc = 0x1c5584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x1c5588: 0xac54eec0  sw          $s4, -0x1140($v0)
    ctx->pc = 0x1c5588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962880), GPR_U32(ctx, 20));
    // 0x1c558c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c558cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5590: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x1c5590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x1c5594: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c5594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5598: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x1c5598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x1c559c: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1C559Cu;
    SET_GPR_U32(ctx, 31, 0x1C55A4u);
    ctx->pc = 0x1C55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C559Cu;
    // 0x1c55a0: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1C559Cu, 0x1C55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55A4u;
label_1c55a4:
    // 0x1c55a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c55a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55a8: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1C55A8u;
    SET_GPR_U32(ctx, 31, 0x1C55B0u);
    ctx->pc = 0x1C55ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55A8u;
    // 0x1c55ac: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1C55A8u, 0x1C55B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55B0u;
label_1c55b0:
    // 0x1c55b0: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c55b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c55b4: 0x3c0b001c  lui         $t3, 0x1C
    ctx->pc = 0x1c55b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28 << 16));
    // 0x1c55b8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1c55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1c55bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c55bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c55c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55c4: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c55c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c55c8: 0x256b5488  addiu       $t3, $t3, 0x5488
    ctx->pc = 0x1c55c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 21640));
    // 0x1c55cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c55ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c55d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c55d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c55d4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c55d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c55d8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C55D8u;
    SET_GPR_U32(ctx, 31, 0x1C55E0u);
    ctx->pc = 0x1C55DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55D8u;
    // 0x1c55dc: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C55D8u, 0x1C55E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55E0u;
label_1c55e0:
    // 0x1c55e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c55e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55e4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C55E4u;
    {
        const bool branch_taken_0x1c55e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55E4u;
        // 0x1c55e8: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55e4) {
            ctx->pc = 0x1C55F8u;
            return;
        }
    }
    ctx->pc = 0x1C55ECu;
    // 0x1c55ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c55ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c55f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C55F0u;
    {
        const bool branch_taken_0x1c55f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55F0u;
        // 0x1c55f4: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55f0) {
            ctx->pc = 0x1C5600u;
            return;
        }
    }
    ctx->pc = 0x1C55F8u;
}
