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

// Function: entry_00100ddc
// Address: 0x100ddc - 0x100df8
void entry_00100ddc_0x100ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ddc_0x100ddc");
#endif

    ctx->pc = 0x100ddcu;

    // 0x100ddc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x100ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x100de0: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x100DE0u;
    {
        const bool branch_taken_0x100de0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DE0u;
        // 0x100de4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100de0) {
            ctx->pc = 0x100E4Cu;
            return;
        }
    }
    ctx->pc = 0x100DE8u;
    // 0x100de8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x100de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100dec: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x100decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100df0: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x100df0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x100df4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x100df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x100df8u;
}
