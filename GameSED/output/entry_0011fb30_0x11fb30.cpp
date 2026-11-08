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

// Function: entry_0011fb30
// Address: 0x11fb30 - 0x11fb48
void entry_0011fb30_0x11fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fb30_0x11fb30");
#endif

    ctx->pc = 0x11fb30u;

    // 0x11fb30: 0x2e840003  sltiu       $a0, $s4, 0x3
    ctx->pc = 0x11fb30u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11fb34: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x11fb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11fb38: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FB38u;
    {
        const bool branch_taken_0x11fb38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB38u;
        // 0x11fb3c: 0x256102b  sltu        $v0, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb38) {
            ctx->pc = 0x11FB48u;
            return;
        }
    }
    ctx->pc = 0x11FB40u;
    // 0x11fb40: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x11fb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x11fb44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11fb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x11fb48u;
}
