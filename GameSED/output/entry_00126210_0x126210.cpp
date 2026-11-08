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

// Function: entry_00126210
// Address: 0x126210 - 0x126228
void entry_00126210_0x126210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126210_0x126210");
#endif

    ctx->pc = 0x126210u;

    // 0x126210: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x126210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x126214: 0xe7b60098  swc1        $f22, 0x98($sp)
    ctx->pc = 0x126214u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x126218: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x126218u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x12621c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12621Cu;
    {
        const bool branch_taken_0x12621c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12621Cu;
        // 0x126220: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12621c) {
            ctx->pc = 0x126228u;
            return;
        }
    }
    ctx->pc = 0x126224u;
    // 0x126224: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x126224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x126228u;
}
