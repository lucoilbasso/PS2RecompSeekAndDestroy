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

// Function: entry_00172460
// Address: 0x172460 - 0x1724d8
void entry_00172460_0x172460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172460_0x172460");
#endif

    switch (ctx->pc) {
        case 0x172474u: goto label_172474;
        case 0x1724a8u: goto label_1724a8;
        default: break;
    }

    ctx->pc = 0x172460u;

    // 0x172460: 0x3c06cfcf  lui         $a2, 0xCFCF
    ctx->pc = 0x172460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53199 << 16));
    // 0x172464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172468: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x172468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x17246c: 0xc05ceae  jal         func_173AB8
    ctx->pc = 0x17246Cu;
    SET_GPR_U32(ctx, 31, 0x172474u);
    ctx->pc = 0x172470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17246Cu;
    // 0x172470: 0x34c6cfcf  ori         $a2, $a2, 0xCFCF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53199);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173AB8u, 0x17246Cu, 0x172474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172474u;
label_172474:
    // 0x172474: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172478: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x17247c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17247cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172480: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x172480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x172484: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172488: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x172488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17248c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x17248cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172490: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x172490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172494: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172498: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17249c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x17249cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1724a0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1724A0u;
    SET_GPR_U32(ctx, 31, 0x1724A8u);
    ctx->pc = 0x1724A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724A0u;
    // 0x1724a4: 0x24e70013  addiu       $a3, $a3, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1724A0u, 0x1724A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724A8u;
label_1724a8:
    // 0x1724a8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1724a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1724ac: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1724acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1724b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1724B0u;
    {
        const bool branch_taken_0x1724b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724B0u;
        // 0x1724b4: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724b0) {
            ctx->pc = 0x1724D8u;
            return;
        }
    }
    ctx->pc = 0x1724B8u;
    // 0x1724b8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x1724b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1724bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1724c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1724c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1724c4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1724c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1724c8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1724c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1724cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1724CCu;
    {
        const bool branch_taken_0x1724cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724CCu;
        // 0x1724d0: 0x245102c0  addiu       $s1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724cc) {
            ctx->pc = 0x1724F0u;
            return;
        }
    }
    ctx->pc = 0x1724D4u;
    // 0x1724d4: 0x0  nop
    ctx->pc = 0x1724d4u;
    // NOP
    ctx->pc = 0x1724d8u;
}
