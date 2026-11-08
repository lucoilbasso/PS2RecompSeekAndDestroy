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

// Function: entry_0010faf0
// Address: 0x10faf0 - 0x10fb08
void entry_0010faf0_0x10faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010faf0_0x10faf0");
#endif

    ctx->pc = 0x10faf0u;

    // 0x10faf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FAF0u;
    {
        const bool branch_taken_0x10faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAF0u;
        // 0x10faf4: 0x2402e000  addiu       $v0, $zero, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faf0) {
            ctx->pc = 0x10FB08u;
            return;
        }
    }
    ctx->pc = 0x10FAF8u;
    // 0x10faf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10faf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fafc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fb00: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x10fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x10fb04: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->pc = 0x10fb08u;
}
