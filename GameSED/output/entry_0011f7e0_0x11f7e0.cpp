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

// Function: entry_0011f7e0
// Address: 0x11f7e0 - 0x11f808
void entry_0011f7e0_0x11f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f7e0_0x11f7e0");
#endif

    ctx->pc = 0x11f7e0u;

    // 0x11f7e0: 0x12a00046  beqz        $s5, . + 4 + (0x46 << 2)
    ctx->pc = 0x11F7E0u;
    {
        const bool branch_taken_0x11f7e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7E0u;
        // 0x11f7e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7e0) {
            ctx->pc = 0x11F8FCu;
            return;
        }
    }
    ctx->pc = 0x11F7E8u;
    // 0x11f7e8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11f7ec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11f7f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f7f4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x11f7f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f7fc: 0x247e4a80  addiu       $fp, $v1, 0x4A80
    ctx->pc = 0x11f7fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 19072));
    // 0x11f800: 0x45b023  subu        $s6, $v0, $a1
    ctx->pc = 0x11f800u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f804: 0x24930790  addiu       $s3, $a0, 0x790
    ctx->pc = 0x11f804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1936));
    ctx->pc = 0x11f808u;
}
