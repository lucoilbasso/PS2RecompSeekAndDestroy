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

// Function: entry_0011e118
// Address: 0x11e118 - 0x11e130
void entry_0011e118_0x11e118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e118_0x11e118");
#endif

    ctx->pc = 0x11e118u;

    // 0x11e118: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E118u;
    {
        const bool branch_taken_0x11e118 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E118u;
        // 0x11e11c: 0xac890000  sw          $t1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e118) {
            ctx->pc = 0x11E130u;
            return;
        }
    }
    ctx->pc = 0x11E120u;
    // 0x11e120: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11e120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11e124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e128: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x11E128u;
    {
        const bool branch_taken_0x11e128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E128u;
        // 0x11e12c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e128) {
            ctx->pc = 0x11E250u;
            return;
        }
    }
    ctx->pc = 0x11E130u;
}
