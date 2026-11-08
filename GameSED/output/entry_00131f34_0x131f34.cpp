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

// Function: entry_00131f34
// Address: 0x131f34 - 0x131f50
void entry_00131f34_0x131f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f34_0x131f34");
#endif

    ctx->pc = 0x131f34u;

    // 0x131f34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x131f38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131f3c: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x131f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x131f40: 0xaca600e8  sw          $a2, 0xE8($a1)
    ctx->pc = 0x131f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 6));
    // 0x131f44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x131F44u;
    {
        const bool branch_taken_0x131f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F44u;
        // 0x131f48: 0xe4a000ec  swc1        $f0, 0xEC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f44) {
            ctx->pc = 0x131F50u;
            return;
        }
    }
    ctx->pc = 0x131F4Cu;
    // 0x131f4c: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x131f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    ctx->pc = 0x131f50u;
}
