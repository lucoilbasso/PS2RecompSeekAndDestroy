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

// Function: entry_00151150
// Address: 0x151150 - 0x151160
void entry_00151150_0x151150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151150_0x151150");
#endif

    ctx->pc = 0x151150u;

    // 0x151150: 0xc60003b8  lwc1        $f0, 0x3B8($s0)
    ctx->pc = 0x151150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151154: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x151154u;
    {
        const bool branch_taken_0x151154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151154u;
        // 0x151158: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151154) {
            ctx->pc = 0x151188u;
            return;
        }
    }
    ctx->pc = 0x15115Cu;
    // 0x15115c: 0x0  nop
    ctx->pc = 0x15115cu;
    // NOP
    ctx->pc = 0x151160u;
}
