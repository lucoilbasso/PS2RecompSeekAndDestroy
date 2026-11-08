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

// Function: entry_001dcf80
// Address: 0x1dcf80 - 0x1dcf90
void entry_001dcf80_0x1dcf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf80_0x1dcf80");
#endif

    ctx->pc = 0x1dcf80u;

    // 0x1dcf80: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCF80u;
    {
        const bool branch_taken_0x1dcf80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf80) {
            ctx->pc = 0x1DCF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF80u;
            // 0x1dcf84: 0xc4e00008  lwc1        $f0, 0x8($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFB0u;
            return;
        }
    }
    ctx->pc = 0x1DCF88u;
    // 0x1dcf88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DCF88u;
    {
        const bool branch_taken_0x1dcf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF88u;
        // 0x1dcf8c: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf88) {
            ctx->pc = 0x1DCFBCu;
            return;
        }
    }
    ctx->pc = 0x1DCF90u;
}
