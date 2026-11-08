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

// Function: entry_00137de0
// Address: 0x137de0 - 0x137e00
void entry_00137de0_0x137de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137de0_0x137de0");
#endif

    ctx->pc = 0x137de0u;

    // 0x137de0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137de4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x137de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x137de8: 0x54490006  bnel        $v0, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x137DE8u;
    {
        const bool branch_taken_0x137de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x137de8) {
            ctx->pc = 0x137DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137DE8u;
            // 0x137dec: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x137E04u;
            return;
        }
    }
    ctx->pc = 0x137DF0u;
    // 0x137df0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137df4: 0x8c43018c  lw          $v1, 0x18C($v0)
    ctx->pc = 0x137df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x137df8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x137DF8u;
    {
        const bool branch_taken_0x137df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137df8) {
            ctx->pc = 0x137DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137DF8u;
            // 0x137dfc: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x137E00u;
            return;
        }
    }
    ctx->pc = 0x137E00u;
}
