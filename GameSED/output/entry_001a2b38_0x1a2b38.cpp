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

// Function: entry_001a2b38
// Address: 0x1a2b38 - 0x1a2b50
void entry_001a2b38_0x1a2b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2b38_0x1a2b38");
#endif

    ctx->pc = 0x1a2b38u;

    // 0x1a2b38: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a2b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a2b3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2B3Cu;
    {
        const bool branch_taken_0x1a2b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B3Cu;
        // 0x1a2b40: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b3c) {
            ctx->pc = 0x1A2B50u;
            return;
        }
    }
    ctx->pc = 0x1A2B44u;
    // 0x1a2b44: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a2b48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2B48u;
    {
        const bool branch_taken_0x1a2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B48u;
        // 0x1a2b4c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b48) {
            ctx->pc = 0x1A2B64u;
            return;
        }
    }
    ctx->pc = 0x1A2B50u;
}
