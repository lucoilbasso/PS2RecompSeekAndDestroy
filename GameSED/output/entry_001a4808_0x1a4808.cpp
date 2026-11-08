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

// Function: entry_001a4808
// Address: 0x1a4808 - 0x1a4820
void entry_001a4808_0x1a4808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4808_0x1a4808");
#endif

    ctx->pc = 0x1a4808u;

    // 0x1a4808: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x1a4808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a480c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A480Cu;
    {
        const bool branch_taken_0x1a480c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a480c) {
            ctx->pc = 0x1A4810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A480Cu;
            // 0x1a4810: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4820u;
            return;
        }
    }
    ctx->pc = 0x1A4814u;
    // 0x1a4814: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a4814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a4818: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4818u;
    {
        const bool branch_taken_0x1a4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4818u;
        // 0x1a481c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4818) {
            ctx->pc = 0x1A4834u;
            return;
        }
    }
    ctx->pc = 0x1A4820u;
}
