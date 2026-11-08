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

// Function: entry_0011fa6c
// Address: 0x11fa6c - 0x11fa80
void entry_0011fa6c_0x11fa6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa6c_0x11fa6c");
#endif

    ctx->pc = 0x11fa6cu;

    // 0x11fa6c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x11fa6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11fa70: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FA70u;
    {
        const bool branch_taken_0x11fa70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA70u;
        // 0x11fa74: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa70) {
            ctx->pc = 0x11FA80u;
            return;
        }
    }
    ctx->pc = 0x11FA78u;
    // 0x11fa78: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x11fa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x11fa7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11fa7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x11fa80u;
}
