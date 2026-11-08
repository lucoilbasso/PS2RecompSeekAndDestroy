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

// Function: entry_0010fa88
// Address: 0x10fa88 - 0x10faa8
void entry_0010fa88_0x10fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fa88_0x10fa88");
#endif

    ctx->pc = 0x10fa88u;

    // 0x10fa88: 0x32221000  andi        $v0, $s1, 0x1000
    ctx->pc = 0x10fa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x10fa8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FA8Cu;
    {
        const bool branch_taken_0x10fa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA8Cu;
        // 0x10fa90: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa8c) {
            ctx->pc = 0x10FAA8u;
            return;
        }
    }
    ctx->pc = 0x10FA94u;
    // 0x10fa94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fa98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fa98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fa9c: 0x2442ff4a  addiu       $v0, $v0, -0xB6
    ctx->pc = 0x10fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967114));
    // 0x10faa0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10faa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10faa4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x10faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x10faa8u;
}
