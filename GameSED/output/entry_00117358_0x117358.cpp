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

// Function: entry_00117358
// Address: 0x117358 - 0x1173e0
void entry_00117358_0x117358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117358_0x117358");
#endif

    switch (ctx->pc) {
        case 0x117378u: goto label_117378;
        default: break;
    }

    ctx->pc = 0x117358u;

label_117358:
    // 0x117358: 0x128600  sll         $s0, $s2, 24
    ctx->pc = 0x117358u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x11735c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11735cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x117360: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x117360u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x117364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x117364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11736c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x11736cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x117370: 0xc045360  jal         func_114D80
    ctx->pc = 0x117370u;
    SET_GPR_U32(ctx, 31, 0x117378u);
    ctx->pc = 0x117374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117370u;
    // 0x117374: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x117370u, 0x117378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117378u;
label_117378:
    // 0x117378: 0x86020ff0  lh          $v0, 0xFF0($s0)
    ctx->pc = 0x117378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x11737c: 0x2a43000c  slti        $v1, $s2, 0xC
    ctx->pc = 0x11737cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x117380: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x117380u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x117384: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x117384u;
    {
        const bool branch_taken_0x117384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117384u;
        // 0x117388: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117384) {
            ctx->pc = 0x117358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117358;
        }
    }
    ctx->pc = 0x11738Cu;
    // 0x11738c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x11738cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x117390: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x117390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x117394: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x117398: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x117398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x11739c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11739cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1173a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1173a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1173a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1173a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1173a8: 0x246733b0  addiu       $a3, $v1, 0x33B0
    ctx->pc = 0x1173a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 13232));
    // 0x1173ac: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1173acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1173b0: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x1173b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
    // 0x1173b4: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1173b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1173b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1173b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1173bc: 0x10450018  beq         $v0, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1173BCu;
    {
        const bool branch_taken_0x1173bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1173C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173BCu;
        // 0x1173c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173bc) {
            ctx->pc = 0x117420u;
            return;
        }
    }
    ctx->pc = 0x1173C4u;
    // 0x1173c4: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1173c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1173c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1173c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1173cc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1173ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1173d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1173d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1173d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1173d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1173d8: 0x45202b  sltu        $a0, $v0, $a1
    ctx->pc = 0x1173d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1173dc: 0x0  nop
    ctx->pc = 0x1173dcu;
    // NOP
    ctx->pc = 0x1173e0u;
}
