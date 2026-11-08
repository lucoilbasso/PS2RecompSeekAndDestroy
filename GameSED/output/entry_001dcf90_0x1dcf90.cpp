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

// Function: entry_001dcf90
// Address: 0x1dcf90 - 0x1dcfa0
void entry_001dcf90_0x1dcf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf90_0x1dcf90");
#endif

    ctx->pc = 0x1dcf90u;

    // 0x1dcf90: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1dcf90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1dcf94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCF94u;
    {
        const bool branch_taken_0x1dcf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF94u;
        // 0x1dcf98: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf94) {
            ctx->pc = 0x1DCFB8u;
            return;
        }
    }
    ctx->pc = 0x1DCF9Cu;
    // 0x1dcf9c: 0x0  nop
    ctx->pc = 0x1dcf9cu;
    // NOP
    ctx->pc = 0x1dcfa0u;
}
