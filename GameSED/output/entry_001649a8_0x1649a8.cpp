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

// Function: entry_001649a8
// Address: 0x1649a8 - 0x164a04
void entry_001649a8_0x1649a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001649a8_0x1649a8");
#endif

    switch (ctx->pc) {
        case 0x1649e4u: goto label_1649e4;
        default: break;
    }

    ctx->pc = 0x1649a8u;

    // 0x1649a8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1649ac: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x1649acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1649b0: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1649b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1649b4: 0x8c45038c  lw          $a1, 0x38C($v0)
    ctx->pc = 0x1649b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    // 0x1649b8: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x1649b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1649bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1649c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1649c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1649c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649c8: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x1649c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x1649cc: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x1649ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1649d0: 0xafa8005c  sw          $t0, 0x5C($sp)
    ctx->pc = 0x1649d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 8));
    // 0x1649d4: 0xafa90060  sw          $t1, 0x60($sp)
    ctx->pc = 0x1649d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 9));
    // 0x1649d8: 0xafbd0058  sw          $sp, 0x58($sp)
    ctx->pc = 0x1649d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 29));
    // 0x1649dc: 0xc060e24  jal         func_183890
    ctx->pc = 0x1649DCu;
    SET_GPR_U32(ctx, 31, 0x1649E4u);
    ctx->pc = 0x1649E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649DCu;
    // 0x1649e0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183890u, 0x1649DCu, 0x1649E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649E4u;
label_1649e4:
    // 0x1649e4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1649e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x1649e8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1649ec: 0x24634bd0  addiu       $v1, $v1, 0x4BD0
    ctx->pc = 0x1649ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19408));
    // 0x1649f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649f4: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x1649f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1649f8: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1649f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1649fc: 0xc069626  jal         func_1A5898
    ctx->pc = 0x1649FCu;
    SET_GPR_U32(ctx, 31, 0x164A04u);
    ctx->pc = 0x164A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649FCu;
    // 0x164a00: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x1649FCu, 0x164A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A04u;
}
