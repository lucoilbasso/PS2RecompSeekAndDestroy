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

// Function: entry_0011fa80
// Address: 0x11fa80 - 0x11faa8
void entry_0011fa80_0x11fa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa80_0x11fa80");
#endif

    ctx->pc = 0x11fa80u;

    // 0x11fa80: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x11FA80u;
    {
        const bool branch_taken_0x11fa80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA80u;
        // 0x11fa84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa80) {
            ctx->pc = 0x11FB30u;
            return;
        }
    }
    ctx->pc = 0x11FA88u;
    // 0x11fa88: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11fa8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fa90: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11fa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x11fa94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11fa94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa98: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x11fa98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa9c: 0x24510790  addiu       $s1, $v0, 0x790
    ctx->pc = 0x11fa9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x11faa0: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x11faa0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    // 0x11faa4: 0x0  nop
    ctx->pc = 0x11faa4u;
    // NOP
    ctx->pc = 0x11faa8u;
}
