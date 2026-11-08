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

// Function: entry_00127de8
// Address: 0x127de8 - 0x127e18
void entry_00127de8_0x127de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127de8_0x127de8");
#endif

    ctx->pc = 0x127de8u;

    // 0x127de8: 0x8e2301a4  lw          $v1, 0x1A4($s1)
    ctx->pc = 0x127de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x127dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x127decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x127df0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x127df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127df4: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x127DF4u;
    {
        const bool branch_taken_0x127df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x127DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DF4u;
        // 0x127df8: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127df4) {
            ctx->pc = 0x128068u;
            return;
        }
    }
    ctx->pc = 0x127DFCu;
    // 0x127dfc: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x127dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x127e00: 0x8e420480  lw          $v0, 0x480($s2)
    ctx->pc = 0x127e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
    // 0x127e04: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x127e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x127e08: 0x58c0000e  blezl       $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x127E08u;
    {
        const bool branch_taken_0x127e08 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x127e08) {
            ctx->pc = 0x127E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E08u;
            // 0x127e0c: 0x8602000a  lh          $v0, 0xA($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127E44u;
            return;
        }
    }
    ctx->pc = 0x127E10u;
    // 0x127e10: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x127e14: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x127e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x127e18u;
}
