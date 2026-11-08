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

// Function: caseD_2e
// Address: 0x1d14e8 - 0x1d1518
void caseD_2e_0x1d14e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2e_0x1d14e8");
#endif

    ctx->pc = 0x1d14e8u;

    // 0x1d14e8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d14e8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d14ec: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1d14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d14f0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D14F0u;
    {
        const bool branch_taken_0x1d14f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14F0u;
        // 0x1d14f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14f0) {
            ctx->pc = 0x1D1518u;
            return;
        }
    }
    ctx->pc = 0x1D14F8u;
    // 0x1d14f8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d14f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d14fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1500: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1d1500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1504: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x1d1504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1d1508: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1D1508u;
    {
        const bool branch_taken_0x1d1508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1508u;
        // 0x1d150c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1508) {
            ctx->pc = 0x1D145Cu;
            return;
        }
    }
    ctx->pc = 0x1D1510u;
    // 0x1d1510: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D1510u;
    {
        const bool branch_taken_0x1d1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1510u;
        // 0x1d1514: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1510) {
            ctx->pc = 0x1D145Cu;
            return;
        }
    }
    ctx->pc = 0x1D1518u;
}
