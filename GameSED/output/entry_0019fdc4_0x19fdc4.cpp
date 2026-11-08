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

// Function: entry_0019fdc4
// Address: 0x19fdc4 - 0x19fde8
void entry_0019fdc4_0x19fdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fdc4_0x19fdc4");
#endif

    ctx->pc = 0x19fdc4u;

    // 0x19fdc4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x19fdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fdc8: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x19fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x19fdcc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fdd0: 0x2464e120  addiu       $a0, $v1, -0x1EE0
    ctx->pc = 0x19fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959392));
    // 0x19fdd4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FDD4u;
    {
        const bool branch_taken_0x19fdd4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x19FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDD4u;
        // 0x19fdd8: 0x2451f6a8  addiu       $s1, $v0, -0x958 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdd4) {
            ctx->pc = 0x19FDE8u;
            return;
        }
    }
    ctx->pc = 0x19FDDCu;
    // 0x19fddc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19fde0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FDE0u;
    {
        const bool branch_taken_0x19fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDE0u;
        // 0x19fde4: 0x2445d658  addiu       $a1, $v0, -0x29A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fde0) {
            ctx->pc = 0x19FDF0u;
            return;
        }
    }
    ctx->pc = 0x19FDE8u;
}
