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

// Function: entry_001cc3bc
// Address: 0x1cc3bc - 0x1cc3f8
void entry_001cc3bc_0x1cc3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc3bc_0x1cc3bc");
#endif

    ctx->pc = 0x1cc3bcu;

    // 0x1cc3bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1cc3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3c0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CC3C0u;
    {
        const bool branch_taken_0x1cc3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3C0u;
        // 0x1cc3c4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3c0) {
            ctx->pc = 0x1CC47Cu;
            return;
        }
    }
    ctx->pc = 0x1CC3C8u;
    // 0x1cc3c8: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CC3C8u;
    {
        const bool branch_taken_0x1cc3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc3c8) {
            ctx->pc = 0x1CC3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC3C8u;
            // 0x1cc3cc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC3F8u;
            return;
        }
    }
    ctx->pc = 0x1CC3D0u;
    // 0x1cc3d0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1cc3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cc3d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1cc3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cc3d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cc3dc: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1cc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x1cc3e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cc3e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC3E4u;
    {
        const bool branch_taken_0x1cc3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3e4) {
            ctx->pc = 0x1CC3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC3E4u;
            // 0x1cc3e8: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC3F8u;
            return;
        }
    }
    ctx->pc = 0x1CC3ECu;
    // 0x1cc3ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc3f0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1cc3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1cc3f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1cc3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1cc3f8u;
}
