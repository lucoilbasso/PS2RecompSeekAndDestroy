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

// Function: entry_0010fce8
// Address: 0x10fce8 - 0x10fcf8
void entry_0010fce8_0x10fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fce8_0x10fce8");
#endif

    ctx->pc = 0x10fce8u;

    // 0x10fce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FCE8u;
    {
        const bool branch_taken_0x10fce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE8u;
        // 0x10fcec: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fce8) {
            ctx->pc = 0x10FCF8u;
            return;
        }
    }
    ctx->pc = 0x10FCF0u;
    // 0x10fcf0: 0xc7808068  lwc1        $f0, -0x7F98($gp)
    ctx->pc = 0x10fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fcf4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x10fcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x10fcf8u;
}
