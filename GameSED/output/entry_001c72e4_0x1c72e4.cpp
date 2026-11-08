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

// Function: entry_001c72e4
// Address: 0x1c72e4 - 0x1c7310
void entry_001c72e4_0x1c72e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c72e4_0x1c72e4");
#endif

    ctx->pc = 0x1c72e4u;

    // 0x1c72e4: 0x1bc00041  blez        $fp, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C72E4u;
    {
        const bool branch_taken_0x1c72e4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x1C72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72E4u;
        // 0x1c72e8: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72e4) {
            ctx->pc = 0x1C73ECu;
            return;
        }
    }
    ctx->pc = 0x1C72ECu;
    // 0x1c72ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c72ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c72f4: 0x1ac00013  blez        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C72F4u;
    {
        const bool branch_taken_0x1c72f4 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1C72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72F4u;
        // 0x1c72f8: 0xafa3024c  sw          $v1, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72f4) {
            ctx->pc = 0x1C7344u;
            return;
        }
    }
    ctx->pc = 0x1C72FCu;
    // 0x1c72fc: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x1c72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x1c7300: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1c7304: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c7304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c7308: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1c7308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c730c: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c730cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c7310u;
}
