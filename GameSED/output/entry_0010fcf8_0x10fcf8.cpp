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

// Function: entry_0010fcf8
// Address: 0x10fcf8 - 0x10fd0c
void entry_0010fcf8_0x10fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fcf8_0x10fcf8");
#endif

    ctx->pc = 0x10fcf8u;

    // 0x10fcf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FCF8u;
    {
        const bool branch_taken_0x10fcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCF8u;
        // 0x10fcfc: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcf8) {
            ctx->pc = 0x10FD0Cu;
            return;
        }
    }
    ctx->pc = 0x10FD00u;
    // 0x10fd00: 0xc780806c  lwc1        $f0, -0x7F94($gp)
    ctx->pc = 0x10fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fd04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x10fd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x10fd08: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x10fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x10fd0cu;
}
