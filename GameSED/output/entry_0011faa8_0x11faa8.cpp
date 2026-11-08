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

// Function: entry_0011faa8
// Address: 0x11faa8 - 0x11fac0
void entry_0011faa8_0x11faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011faa8_0x11faa8");
#endif

    ctx->pc = 0x11faa8u;

    // 0x11faa8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x11faa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11faac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FAACu;
    {
        const bool branch_taken_0x11faac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11faac) {
            ctx->pc = 0x11FAC0u;
            return;
        }
    }
    ctx->pc = 0x11FAB4u;
    // 0x11fab4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11fab8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FAB8u;
    {
        const bool branch_taken_0x11fab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fab8) {
            ctx->pc = 0x11FABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FAB8u;
            // 0x11fabc: 0xc6000070  lwc1        $f0, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FAD0u;
            return;
        }
    }
    ctx->pc = 0x11FAC0u;
}
