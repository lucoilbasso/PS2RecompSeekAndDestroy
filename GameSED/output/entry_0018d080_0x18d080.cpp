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

// Function: entry_0018d080
// Address: 0x18d080 - 0x18d098
void entry_0018d080_0x18d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d080_0x18d080");
#endif

    ctx->pc = 0x18d080u;

    // 0x18d080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d084: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d088: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18d088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18d08c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18D08Cu;
    {
        const bool branch_taken_0x18d08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D08Cu;
        // 0x18d090: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d08c) {
            ctx->pc = 0x18D0D0u;
            return;
        }
    }
    ctx->pc = 0x18D094u;
    // 0x18d094: 0x0  nop
    ctx->pc = 0x18d094u;
    // NOP
    ctx->pc = 0x18d098u;
}
