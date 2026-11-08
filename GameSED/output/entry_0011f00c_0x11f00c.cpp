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

// Function: entry_0011f00c
// Address: 0x11f00c - 0x11f030
void entry_0011f00c_0x11f00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f00c_0x11f00c");
#endif

    ctx->pc = 0x11f00cu;

    // 0x11f00c: 0x12e000aa  beqz        $s7, . + 4 + (0xAA << 2)
    ctx->pc = 0x11F00Cu;
    {
        const bool branch_taken_0x11f00c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F00Cu;
        // 0x11f010: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f00c) {
            ctx->pc = 0x11F2B8u;
            return;
        }
    }
    ctx->pc = 0x11F014u;
    // 0x11f014: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x11f014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x11f018: 0x3c022022  lui         $v0, 0x2022
    ctx->pc = 0x11f018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8226 << 16));
    // 0x11f01c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11f020: 0x2455f640  addiu       $s5, $v0, -0x9C0
    ctx->pc = 0x11f020u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x11f024: 0x24be7cc0  addiu       $fp, $a1, 0x7CC0
    ctx->pc = 0x11f024u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
    // 0x11f028: 0x24d60790  addiu       $s6, $a2, 0x790
    ctx->pc = 0x11f028u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    // 0x11f02c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x11f02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x11f030u;
}
