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

// Function: entry_001bf2e8
// Address: 0x1bf2e8 - 0x1bf344
void entry_001bf2e8_0x1bf2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf2e8_0x1bf2e8");
#endif

    ctx->pc = 0x1bf2e8u;

    // 0x1bf2e8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1bf2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1bf2ec: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1BF2ECu;
    {
        const bool branch_taken_0x1bf2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2ECu;
        // 0x1bf2f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2ec) {
            ctx->pc = 0x1BF4D4u;
            return;
        }
    }
    ctx->pc = 0x1BF2F4u;
    // 0x1bf2f4: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1bf2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1bf2f8: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1BF2F8u;
    {
        const bool branch_taken_0x1bf2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2F8u;
        // 0x1bf2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2f8) {
            ctx->pc = 0x1BF3CCu;
            return;
        }
    }
    ctx->pc = 0x1BF300u;
    // 0x1bf300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bf300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf304: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF304u;
    {
        const bool branch_taken_0x1bf304 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF304u;
        // 0x1bf308: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf304) {
            ctx->pc = 0x1BF344u;
            return;
        }
    }
    ctx->pc = 0x1BF30Cu;
    // 0x1bf30c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1bf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf314: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1bf314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf318: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf318u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf31c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf320: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf320u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf324: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf32c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf334: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf33c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF33Cu;
    {
        const bool branch_taken_0x1bf33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF33Cu;
        // 0x1bf340: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf33c) {
            ctx->pc = 0x1BF3BCu;
            return;
        }
    }
    ctx->pc = 0x1BF344u;
}
