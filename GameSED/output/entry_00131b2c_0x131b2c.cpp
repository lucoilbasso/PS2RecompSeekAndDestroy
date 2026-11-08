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

// Function: entry_00131b2c
// Address: 0x131b2c - 0x131b50
void entry_00131b2c_0x131b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131b2c_0x131b2c");
#endif

    ctx->pc = 0x131b2cu;

    // 0x131b2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x131b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x131b30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x131b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x131b34: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x131b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x131b38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x131b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x131b3c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x131b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x131b40: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x131b40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x131b44: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x131b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x131b48: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x131B48u;
    {
        const bool branch_taken_0x131b48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B48u;
        // 0x131b4c: 0x8e30013c  lw          $s0, 0x13C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b48) {
            ctx->pc = 0x131C20u;
            return;
        }
    }
    ctx->pc = 0x131B50u;
}
