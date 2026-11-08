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

// Function: entry_00172860
// Address: 0x172860 - 0x1728c8
void entry_00172860_0x172860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172860_0x172860");
#endif

    ctx->pc = 0x172860u;

    // 0x172860: 0x1ae0018f  blez        $s7, . + 4 + (0x18F << 2)
    ctx->pc = 0x172860u;
    {
        const bool branch_taken_0x172860 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x172864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172860u;
        // 0x172864: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172860) {
            ctx->pc = 0x172EA0u;
            return;
        }
    }
    ctx->pc = 0x172868u;
    // 0x172868: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x172868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x17286c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x17286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x172870: 0x971818  mult        $v1, $a0, $s7
    ctx->pc = 0x172870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172874: 0x3c047200  lui         $a0, 0x7200
    ctx->pc = 0x172874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29184 << 16));
    // 0x172878: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x172878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x17287c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x17287cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x172880: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x172880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x172884: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x172884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x172888: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x172888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17288c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172890: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x172890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x172894: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x172894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x172898: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17289c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x17289cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1728a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1728a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1728a4: 0x3c037200  lui         $v1, 0x7200
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29184 << 16));
    // 0x1728a8: 0x26e4ffff  addiu       $a0, $s7, -0x1
    ctx->pc = 0x1728a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1728ac: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1728acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1728b0: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x1728b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x1728b4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1728b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1728b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1728bc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1728bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1728c0: 0x44a821  addu        $s5, $v0, $a0
    ctx->pc = 0x1728c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1728c4: 0x0  nop
    ctx->pc = 0x1728c4u;
    // NOP
    ctx->pc = 0x1728c8u;
}
