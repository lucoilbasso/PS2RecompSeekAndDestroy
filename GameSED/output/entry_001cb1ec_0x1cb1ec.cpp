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

// Function: entry_001cb1ec
// Address: 0x1cb1ec - 0x1cb210
void entry_001cb1ec_0x1cb1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb1ec_0x1cb1ec");
#endif

    ctx->pc = 0x1cb1ecu;

    // 0x1cb1ec: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1cb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cb1f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb1f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1cb1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1cb1f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CB1F8u;
    {
        const bool branch_taken_0x1cb1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1F8u;
        // 0x1cb1fc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1f8) {
            ctx->pc = 0x1CB238u;
            return;
        }
    }
    ctx->pc = 0x1CB200u;
    // 0x1cb200: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1cb200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb204: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb208: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB208u;
    {
        const bool branch_taken_0x1cb208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB208u;
        // 0x1cb20c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb208) {
            ctx->pc = 0x1CB250u;
            return;
        }
    }
    ctx->pc = 0x1CB210u;
}
