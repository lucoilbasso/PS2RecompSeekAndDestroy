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

// Function: entry_001755d4
// Address: 0x1755d4 - 0x1755fc
void entry_001755d4_0x1755d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755d4_0x1755d4");
#endif

    ctx->pc = 0x1755d4u;

    // 0x1755d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1755d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1755d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1755d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1755dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1755DCu;
    {
        const bool branch_taken_0x1755dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755DCu;
        // 0x1755e0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755dc) {
            ctx->pc = 0x175604u;
            return;
        }
    }
    ctx->pc = 0x1755E4u;
    // 0x1755e4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1755E4u;
    {
        const bool branch_taken_0x1755e4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755E4u;
        // 0x1755e8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755e4) {
            ctx->pc = 0x1755FCu;
            return;
        }
    }
    ctx->pc = 0x1755ECu;
    // 0x1755ec: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1755ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1755f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1755f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1755f4: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x1755f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1755f8: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x1755f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x1755fcu;
}
