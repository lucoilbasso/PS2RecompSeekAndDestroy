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

// Function: entry_001380c8
// Address: 0x1380c8 - 0x1380f4
void entry_001380c8_0x1380c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380c8_0x1380c8");
#endif

    ctx->pc = 0x1380c8u;

    // 0x1380c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1380c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1380cc: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x1380ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x1380d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1380d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1380d4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1380D4u;
    {
        const bool branch_taken_0x1380d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1380D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380D4u;
        // 0x1380d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380d4) {
            ctx->pc = 0x138100u;
            return;
        }
    }
    ctx->pc = 0x1380DCu;
    // 0x1380dc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1380dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1380e0: 0x8c43018c  lw          $v1, 0x18C($v0)
    ctx->pc = 0x1380e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x1380e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1380E4u;
    {
        const bool branch_taken_0x1380e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1380E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380E4u;
        // 0x1380e8: 0x8e0201c4  lw          $v0, 0x1C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380e4) {
            ctx->pc = 0x1380F4u;
            return;
        }
    }
    ctx->pc = 0x1380ECu;
    // 0x1380ec: 0xc7808120  lwc1        $f0, -0x7EE0($gp)
    ctx->pc = 0x1380ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1380f0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1380f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x1380f4u;
}
