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

// Function: entry_0014f3ac
// Address: 0x14f3ac - 0x14f3e8
void entry_0014f3ac_0x14f3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f3ac_0x14f3ac");
#endif

    ctx->pc = 0x14f3acu;

    // 0x14f3ac: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x14f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x14f3b0: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x14F3B0u;
    {
        const bool branch_taken_0x14f3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3B0u;
        // 0x14f3b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3b0) {
            ctx->pc = 0x14F5E0u;
            return;
        }
    }
    ctx->pc = 0x14F3B8u;
    // 0x14f3b8: 0x2624071c  addiu       $a0, $s1, 0x71C
    ctx->pc = 0x14f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1820));
    // 0x14f3bc: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x14f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14f3c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F3C0u;
    {
        const bool branch_taken_0x14f3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3C0u;
        // 0x14f3c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3c0) {
            ctx->pc = 0x14F3E8u;
            return;
        }
    }
    ctx->pc = 0x14F3C8u;
    // 0x14f3c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f3cc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x14F3CCu;
    {
        const bool branch_taken_0x14f3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3CCu;
        // 0x14f3d0: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3cc) {
            ctx->pc = 0x14F4B8u;
            return;
        }
    }
    ctx->pc = 0x14F3D4u;
    // 0x14f3d4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f3d8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14f3dc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x14f3e0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x14F3E0u;
    {
        const bool branch_taken_0x14f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3E0u;
        // 0x14f3e4: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3e0) {
            ctx->pc = 0x14F4B8u;
            return;
        }
    }
    ctx->pc = 0x14F3E8u;
}
