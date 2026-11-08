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

// Function: entry_001d2dac
// Address: 0x1d2dac - 0x1d2e10
void entry_001d2dac_0x1d2dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2dac_0x1d2dac");
#endif

    ctx->pc = 0x1d2dacu;

    // 0x1d2dac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d2dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d2db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d2db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d2db4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d2db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d2db8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d2db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d2dbc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d2dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d2dc0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1d2dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1d2dc4: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x1d2dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1d2dc8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1d2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1d2dcc: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1d2dccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d2dd0: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1D2DD0u;
    {
        const bool branch_taken_0x1d2dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DD0u;
        // 0x1d2dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dd0) {
            ctx->pc = 0x1D2F9Cu;
            return;
        }
    }
    ctx->pc = 0x1D2DD8u;
    // 0x1d2dd8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d2ddc: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x1d2ddcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x1d2de0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d2de4: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x1d2de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x1d2de8: 0x1629821  addu        $s3, $t3, $v0
    ctx->pc = 0x1d2de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1d2dec: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x1d2decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d2df0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d2df4: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x1d2df4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2df8: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d2dfc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d2dfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2e04: 0x1a3001b  divu        $zero, $t5, $v1
    ctx->pc = 0x1d2e04u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x1d2e08: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D2E08u;
    {
        const bool branch_taken_0x1d2e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e08) {
            ctx->pc = 0x1D2E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2E08u;
            // 0x1d2e0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2E10u;
            return;
        }
    }
    ctx->pc = 0x1D2E10u;
}
