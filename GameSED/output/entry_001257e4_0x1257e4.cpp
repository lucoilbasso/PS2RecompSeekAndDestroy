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

// Function: entry_001257e4
// Address: 0x1257e4 - 0x125800
void entry_001257e4_0x1257e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001257e4_0x1257e4");
#endif

    ctx->pc = 0x1257e4u;

    // 0x1257e4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1257e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1257e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1257e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1257ec: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x1257ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1257f0: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x1257f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1257f4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1257F4u;
    {
        const bool branch_taken_0x1257f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257F4u;
        // 0x1257f8: 0xe7b40048  swc1        $f20, 0x48($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257f4) {
            ctx->pc = 0x125800u;
            return;
        }
    }
    ctx->pc = 0x1257FCu;
    // 0x1257fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1257fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x125800u;
}
