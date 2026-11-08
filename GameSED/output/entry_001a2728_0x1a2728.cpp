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

// Function: entry_001a2728
// Address: 0x1a2728 - 0x1a2748
void entry_001a2728_0x1a2728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2728_0x1a2728");
#endif

    ctx->pc = 0x1a2728u;

    // 0x1a2728: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a2728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a272c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A272Cu;
    {
        const bool branch_taken_0x1a272c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A272Cu;
        // 0x1a2730: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a272c) {
            ctx->pc = 0x1A2748u;
            return;
        }
    }
    ctx->pc = 0x1A2734u;
    // 0x1a2734: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a2738: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a2738u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a273c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A273Cu;
    {
        const bool branch_taken_0x1a273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A273Cu;
        // 0x1a2740: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a273c) {
            ctx->pc = 0x1A2758u;
            return;
        }
    }
    ctx->pc = 0x1A2744u;
    // 0x1a2744: 0x0  nop
    ctx->pc = 0x1a2744u;
    // NOP
    ctx->pc = 0x1a2748u;
}
