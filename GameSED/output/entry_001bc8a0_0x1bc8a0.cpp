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

// Function: entry_001bc8a0
// Address: 0x1bc8a0 - 0x1bc8d4
void entry_001bc8a0_0x1bc8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8a0_0x1bc8a0");
#endif

    ctx->pc = 0x1bc8a0u;

    // 0x1bc8a0: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x1bc8a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc8a4: 0x3402bd88  ori         $v0, $zero, 0xBD88
    ctx->pc = 0x1bc8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48520);
    // 0x1bc8a8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bc8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bc8ac: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC8ACu;
    {
        const bool branch_taken_0x1bc8ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8ACu;
        // 0x1bc8b0: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8ac) {
            ctx->pc = 0x1BC8F4u;
            return;
        }
    }
    ctx->pc = 0x1BC8B4u;
    // 0x1bc8b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC8B4u;
    {
        const bool branch_taken_0x1bc8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8b4) {
            ctx->pc = 0x1BC8D4u;
            return;
        }
    }
    ctx->pc = 0x1BC8BCu;
    // 0x1bc8bc: 0x1114000b  beq         $t0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC8BCu;
    {
        const bool branch_taken_0x1bc8bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 20));
        ctx->pc = 0x1BC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8BCu;
        // 0x1bc8c0: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8bc) {
            ctx->pc = 0x1BC8ECu;
            return;
        }
    }
    ctx->pc = 0x1BC8C4u;
    // 0x1bc8c4: 0x1113000b  beq         $t0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC8C4u;
    {
        const bool branch_taken_0x1bc8c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x1BC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8C4u;
        // 0x1bc8c8: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8c4) {
            ctx->pc = 0x1BC8F4u;
            return;
        }
    }
    ctx->pc = 0x1BC8CCu;
    // 0x1bc8cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BC8CCu;
    {
        const bool branch_taken_0x1bc8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8CCu;
        // 0x1bc8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8cc) {
            ctx->pc = 0x1BC8FCu;
            return;
        }
    }
    ctx->pc = 0x1BC8D4u;
}
