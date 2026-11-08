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

// Function: entry_001a3790
// Address: 0x1a3790 - 0x1a37a8
void entry_001a3790_0x1a3790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3790_0x1a3790");
#endif

    ctx->pc = 0x1a3790u;

    // 0x1a3790: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x1a3790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a3794: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3794u;
    {
        const bool branch_taken_0x1a3794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3794) {
            ctx->pc = 0x1A3798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3794u;
            // 0x1a3798: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A37A8u;
            return;
        }
    }
    ctx->pc = 0x1A379Cu;
    // 0x1a379c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a37a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A37A0u;
    {
        const bool branch_taken_0x1a37a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37A0u;
        // 0x1a37a4: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37a0) {
            ctx->pc = 0x1A37BCu;
            return;
        }
    }
    ctx->pc = 0x1A37A8u;
}
