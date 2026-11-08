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

// Function: entry_0010fbd0
// Address: 0x10fbd0 - 0x10fbe0
void entry_0010fbd0_0x10fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbd0_0x10fbd0");
#endif

    ctx->pc = 0x10fbd0u;

    // 0x10fbd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fbd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fbd8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x10FBD8u;
    {
        const bool branch_taken_0x10fbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBD8u;
        // 0x10fbdc: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbd8) {
            ctx->pc = 0x10FE0Cu;
            return;
        }
    }
    ctx->pc = 0x10FBE0u;
}
